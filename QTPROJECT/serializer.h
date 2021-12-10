#ifndef SERIALIZER_H
#define SERIALIZER_H

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QCoreApplication>
#include <Vector.h>
#include <shapes.h>
#include <QString>
#include <QMessageBox>
#include <mainwindow.h>
#include <ui_mainwindow.h>
#include <QMainWindow>
#include <iomanip>
#include <typeinfo>
#include <QColor>
#include <Qt>

using namespace myStd;
using namespace std;

namespace myStd{
// Questions:
// How do I output pen/brush data as a string?
// Private data I need to access: Begin, End, shapeID(shape type),  polyline vector
// friend of shape class...

/*
 * Author: Riley Berry
 */

//Test: Line, Polyline, Polygon, Rectangle, Square,  Ellipse, Circle, Text

void serializer(const myStd::vector<Shape*>& list, std::string file = "shapes.txt")
//void serializer(const myStd::vector<Shape*>& list, std::string file = "A:\\Github Repositories\\Qt Projects\\QtTest\\shapes.txt")
{
    /************
    * VARIABLES *
    ************/

    // PROCESSING
    int index;                                  // index of vector list
    ShapeType currentShape;
    QColor b;

    // PROCESSING - creates text file path
    QString fullPath = QDir::currentPath() + '/' + QString::fromStdString(file);  // attaches file name to directory path
    fullPath         = fullPath.replace('/', "\\\\");                             // replaces / with \\ for proper formatting

    // DISCLAIMER - text file must be in same file as project executable, for this pathing to work!

    // OUTPUT
//    QFile shapesFile(QString::fromStdString(file));     // shapes.txt QFile
    QFile shapesFile(fullPath);     // shapes.txt QFile
    QTextStream out(&shapesFile);   // output stream var
    QString colorName;              // name of pen or brush color
    QString shapeName;


    /***********************************************************************/

    // PROCESSING - Opens shapes.txt file
    if(!shapesFile.open(QFile::WriteOnly | QFile::Text))
    {
        // GUI OUTPUT - file could not open message
        qDebug() << "Opening file failed!";
    }
//        out << fullPath << "\n";

    // PRIMARY LOOP - iterates through the vector list
    for(index = 0; index < list.size(); index++)
    {
        currentShape = list[index]->getShapeType();

        // OUTPUT - universal shape information
        switch(currentShape)
        {
            case 1: shapeName = "Line";
                    break;
            case 2: shapeName = "Polyline";
                break;
            case 3: shapeName = "Polygon";
                break;
            case 4: shapeName = "Rectangle;";
                break;
            case 5: shapeName = "Square";
                break;
            case 6: shapeName = "Ellipse";
                break;
            case 7: shapeName = "Cirlce";;
                break;
            case 8: shapeName = "Text";
        }

        out << "\nShapeId: "   << list[index]->getId();
        out << "\nShapeType: " << shapeName;                   // NEED shapeID enum
        out << "\nShapeDimensions: " << list[index];             // NEED Begin and End coords/ vector coords

        // OUTPUT - pen data for valid shapes
        if(currentShape != 8)
        {
            b = list[index]->getPen().color();

            if(b  == QColor(Qt::red))
            {
                colorName = "red";
            }
            else if(b == QColor(Qt::green))
            {
                colorName = "green";

            }
            else if(b == QColor(Qt::blue))
            {
                colorName = "blue";
            }
            else
            {
                colorName = "N\\A";
            }

            out << "\nPenColor: "        << colorName; // search through qt color library to find code??
            out << "\nPenWidth: "        << list[index]->getPen().width();
            out << "\nPenStyle: "        << list[index]->getPen().style();             // Use switch statement to output as string
            out << "\nPenCapStyle: "     << list[index]->getPen().capStyle();          // Use switch statement to output as string
            out << "\nPenJoinStyle: "    << list[index]->getPen().joinStyle() << '\n'; // Use switch statement to output as string
        }
        else    // OUTPUT - text data for text shapes
        {
            // - Implement text data output -

//            out << "\nTextString: : "     << (myStd::Text(*list[index]).getText();
//            out << "\nTextColor: : "      << list[index]->;
//            out << "\nTextAlignment: : "  << list[index]->getPainter();
//            out << "\nTextPointSize: : "  << list[index]->getPainter();
//            out << "\nTextFontFamily: : " << list[index]->getPainter();
//            out << "\nTextFontStyle: : "  << list[index]->getPainter();
//            out << "\nTextFontWeight: : " << list[index] << '\n';
        }

        // OUTPUT - brush data for valid shapes
        if(currentShape != 1 && currentShape != 2)
        {
            out << "BrushColor: "    << list[index]->getBrush().color().name();
            out << "\nBrushStyle: "    << list[index]->getBrush().style() << '\n';
        }
    }       // END - primary loop

        shapesFile.flush();     // TextStream is cleared
        shapesFile.close();     // QFile shapes.txt is closed

}   // END - functon definition
}   // END - namespace myStd


#endif // SERIALIZER_H
