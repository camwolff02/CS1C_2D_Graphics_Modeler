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
Qt::BrushStyle getBrushStyle(QString style)
{
    if (style == "SolidPattern") return Qt::SolidPattern;
    else if (style == "Dense1Pattern") return Qt::Dense1Pattern;
    else if (style == "Dense2Pattern") return Qt::Dense2Pattern;
    else if (style == "Dense3Pattern") return Qt::Dense3Pattern;
    else if (style == "Dense4Pattern") return Qt::Dense4Pattern;
    else if (style == "Dense5Pattern") return Qt::Dense5Pattern;
    else if (style == "Dense6Pattern") return Qt::Dense6Pattern;
    else if (style == "Dense7Pattern") return Qt::Dense7Pattern;
    else if (style == "HorPattern") return Qt::HorPattern;
    else if (style == "VerPattern") return Qt::VerPattern;
    else if (style == "CrossPattern") return Qt::CrossPattern;
    else if (style == "BDiagPattern") return Qt::BDiagPattern;
    else if (style == "FDiagPattern") return Qt::FDiagPattern;
    else if (style == "DiagCrossPattern") return Qt::DiagCrossPattern;
    else if (style == "LinearGradientPattern") return Qt::LinearGradientPattern;
    else if (style == "ConicalGradientPattern") return Qt::ConicalGradientPattern;
    else if (style == "RadialGradientPattern") return Qt::RadialGradientPattern;
    else if (style == "TexturePattern") return Qt::TexturePattern;
    else return Qt::NoBrush;
}

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

QFont makeFont(QString fontFamily, int pointSize, QString fontWeight, QString fontStyle)
{
    QFont font {fontFamily, pointSize};

    if (fontWeight == "Thin") font.setWeight(QFont::Thin);
    else if (fontWeight == "Light") font.setWeight(QFont::Light);
    else if (fontWeight == "Bold") font.setWeight(QFont::Bold);
    else font.setWeight(QFont::Normal);

    if (fontStyle == "StyleItalic") font.setStyle(QFont::StyleItalic);
    else if (fontStyle == "StyleOblique") font.setStyle(QFont::StyleOblique);
    else font.setStyle(QFont::StyleNormal);

    return font;
}

// parser function
myStd::vector<Shape*> parse(QString filename = "shapes.txt")
{
    // create vector to write to
    myStd::vector<Shape*> vect;

    // fix file path before opening
    QString fullPath = QDir::currentPath().split("CS1C_2D_Graphics_Modeler").at(0) + "CS1C_2D_Graphics_Modeler/QTPROJECT/" + filename;

    // to account for OS differences
    #ifdef _WIN32
        fullPath = fullPath.replace('/', "\\\\");
    #endif

    qInfo() << fullPath << "\n";

    // open file using Qt's file system
    QFile file {fullPath};

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
        Shape* shape = nullptr;
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

            shape = new myStd::Text(msg, makeFont(fontFamily, pointSize, fontWeight, fontStyle),
                                    color, dims.at(0), dims.at(1), dims.at(2), dims.at(3), id);
        }
        else {
            QColor color = in.readLine().remove(0, 10);
            int width = in.readLine().remove(0, 10).toInt();
            Qt::PenStyle style = getPenStyle(in.readLine().remove(0, 10));
            Qt::PenCapStyle capStyle = getPenCapStyle(in.readLine().remove(0, 13));
            Qt::PenJoinStyle joinStyle = getPenJoinStyle(in.readLine().remove(0, 14));

            if (type != "Line" && type != "Polyline") {
                QColor brushColor = in.readLine().remove(0, 12);
                QString brushStyle = in.readLine().remove(0, 12);

                if (type == "Polygon") {
                    shape = new myStd::Polygon(id);
                    for (int i = 0; i < dims.length(); i+=2)
                        ((myStd::Polygon*)shape)->addPoint(dims.at(i), dims.at(i+1));
                }
                else if (type == "Rectangle") {
                    shape = new myStd::Rectangle(id, dims.at(0), dims.at(1), dims.at(2), dims.at(3));
                }
                else if (type == "Square") {
                    shape = new myStd::Rectangle(id, dims.at(0), dims.at(1), dims.at(2), dims.at(2));
                }
                else if (type == "Ellipse") {
                    shape = new myStd::Ellipse(id, dims.at(2), dims.at(3));
                    shape->move(dims.at(0), dims.at(1));
                }
                else {  // type == "Circle"
                    shape = new myStd::Ellipse(id, dims.at(2), dims.at(2));
                    shape->move(dims.at(0), dims.at(1));
                }

                shape->setBrush(brushColor, getBrushStyle(brushStyle));
            }
            else {
                if (type == "Line") {
                    shape = new myStd::Line(id, dims.at(0), dims.at(1), dims.at(2), dims.at(3));
                }
                else {  // type == "Polyline"
                    shape = new myStd::Polyline(id);
                    for (int i = 0; i < dims.length(); i+=2)
                        ((myStd::Polyline*)shape)->addPoint(dims.at(i), dims.at(i+1));
                }
            }
            shape->setPen(color, width, style, capStyle, joinStyle);
        }

        if (shape != nullptr) vect.push_back(shape);
    }
    qInfo("\nvector write complete\n");
    file.close();
    return vect;
}

#endif // PARSER_H_H
