#ifndef PARSER_H
#define PARSER_H

#include <QString>
#include <QFile>
#include <QFileDialog>
#include <QCoreApplication>
#include <QMessageBox>
#include <QDebug>
#include "shapes.h"
#include "Vector.h"

 /*Author: Cameron Wolff
  Editors: <list your names here>
*/

// helper functions
Qt::PenCapStyle getPenCapStyle(QString style)
{
    if (style == "SquareCap") return Qt::SquareCap;
    else if (style == "RoundCap") return Qt::RoundCap;
    else return Qt::FlatCap;
}

Qt::PenStyle getPenStyle(QString style)
{
    if (style == "SolidLine") return Qt::SolidLine;
    else if (style == "DashLine") return Qt::DashLine;
    else if (style == "DotLine") return Qt::DotLine;
    else if (style == "DashDotLine") return Qt::DashDotLine;
    else return Qt::NoPen;
}

Qt::PenJoinStyle getPenJoinStyle(QString style)
{
    if (style == "MiterJoin") return Qt::MiterJoin;
    else if (style == "BevelJoin") return Qt::BevelJoin;
    else return Qt::RoundJoin;
}

// parser function
myStd::vector<Shape*> parse(QString filename = "shapes.txt")
{
    // create vector to write to
    myStd::vector<Shape*> vect;

    // fix file path before opening
    QString fullPath = QDir::currentPath() + '/' + filename;
    fullPath = fullPath.replace('/', "\\\\");

    // open file using Qt's file system
    QFile file {filename};

    // give error if we can't open the file in read only
    // QIODevice::Text turns Windows style to c++ style line terminators
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::information(0, "error", file.errorString());
        return vect;
    }
    else {
        qInfo() << "file read successfully\n";
    }

    // open Qt text stream to write file to
    QTextStream in {&file};
    while (!in.atEnd()) {  // while we are not at file end
        // create new shape to add to vector
        Shape* shape;
        in.readLine();

        // first 3 param are same for all shapes
        int id = in.readLine().remove(0, 9).toInt();
        QString type = in.readLine().remove(0, 11);
        QList<int> dims;
        foreach (QString str, in.readLine().remove(0, 17).split(", ")) dims.append(str.toInt());

        // now handling rest of param
        if (type == "Text") {
            QString msg = in.readLine().remove(0, 12);
            QColor color = in.readLine().remove(0, 11);
            QString alignment = in.readLine().remove(0, 15);
            int pointSize = in.readLine().remove(0, 15).toInt();
            QString fontFamily = in.readLine().remove(0, 16);
            QString fontStyle = in.readLine().remove(0, 15);
            QString fontWeight = in.readLine().remove(0, 16);
            QFont font {fontFamily, pointSize};

            //shape = new myStd::Text(msg, font, color, id);
        }
        else {
            QColor color = in.readLine().remove(0, 10);
            int width = in.readLine().remove(0, 10).toInt();
            Qt::PenStyle style = getPenStyle(in.readLine().remove(0, 10));
            Qt::PenCapStyle capStyle = getPenCapStyle(in.readLine().remove(0, 13));
            Qt::PenJoinStyle joinStyle = getPenJoinStyle(in.readLine().remove(0, 14));

            if (type != "Line" && type != "Polyline") {
                QString brushColor = in.readLine().remove(0, 12);
                QString brushStyle = in.readLine().remove(0, 12);
            }
            else {
                if (type == "Line") {
                    shape = new myStd::Line(id, dims.at(0), dims.at(1), dims.at(2), dims.at(3));
                    shape->setPen(color, width, style, capStyle, joinStyle);
                }
                else {  // type == "Polyline"

                }
            }
        }

        vect.push_back(shape);
    }
    qInfo("\nvector write complete\n");
    file.close();
    return vect;
}

#endif // PARSER_H_H
