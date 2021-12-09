#ifndef READ_DATA_H
#define READ_DATA_H

#include <QString>
#include <QFile>
#include <QCoreApplication>
#include <QMessageBox>
#include <QDebug>
#include "shapes.h"
#include "Vector.h"

 /*Author: Cameron Wolff
  Editors: <list your names here>
*/

myStd::vector<Shape*> read_data(QString filename)
{
    qInfo() << "constructor called\n";
    // create vector to write to
    myStd::vector<Shape*> vect;

    // open file using Qt's file system
    //QFile file {/*QCoreApplication::applicationDirPath() + */filename};

    /*
    // give error if we can't open the file in read only
    // QIODevice::Text turns Windows style to c++ style line terminators
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::information(0, "error", file.errorString());
        return vect;
    }

    // open Qt text stream to write file to
    QTextStream in {&file};
    while (!in.atEnd()) {  // while we are not at file end
        QString line = in.readLine();

        if (line.startsWith("\n")) {  // create new shape in vector
            // first 3 param are same for all shapes

            // isolate ID
            line = in.readLine();
            int id = in.readLine().split(" ").at(1).toInt();

            // isolate Type
            QString type = in.readLine().split(" ").at(1);
            if (type == "Line") {

            }
            else if (type == "Polyline") {

            }
            else if (type == "Polygon") {

            }
            else if (type == "Square" || type == "Rectangle") {

                if (type == "Square") {

                }
            }
            else if (type == "Circle" || type == "Ellipse") {
                if (type == "Circle") {

                }
            }
            else if (type == "Text") {

            }
            else {

            }
            qInfo() << "constructor finished\n";
            return vect;
        }
    }
    file.close();*/
    return vect;
}




#endif // READ_DATA_H
