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
 #include <parser.h>

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
    QColor currentColor;

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
    QString currentStyle;
    string dimensions;


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
                    dimensions = to_string(((myStd::Line*)(list[index]))->getBegin().x()) + ", " + to_string(((myStd::Line*)(list[index]))->getBegin().y()) + ", "
                    + to_string(((myStd::Line*)(list[index]))->getEnd().x()) +  ", " + to_string(((myStd::Line*)(list[index]))->getEnd().y());
                    break;
            case 2: shapeName = "Polyline";

                    int i;
                    for(i = 0; i < ((myStd::Polyline*)(list[index]))->getPoints().size(); i++)
                    {
                        if(i == 0)
                        {
                            dimensions = ((myStd::Polyline*)(list[index]))->getPoints()[i].x();
                        }

                        dimensions += ", " + ((myStd::Polyline*)(list[index]))->getPoints()[i].y();
                        dimensions += ", " + ((myStd::Polyline*)(list[index]))->getPoints()[i].x();
                    }
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
        out << "\nShapeDimensions: " << QString::fromStdString(dimensions);             // NEED Begin and End coords/ vector coords

        // OUTPUT - pen data for valid shapes
        if(currentShape != 8)
        {
            currentColor = list[index]->getPen().color();

            if(currentColor  == QColor(Qt::red))
            {
                colorName = "red";
            }
            else if(currentColor == QColor(Qt::green))
            {
                colorName = "green";

            }
            else if(currentColor == QColor(Qt::blue))
            {
                colorName = "blue";
            }
            else if(currentColor == QColor(Qt::yellow))
            {
                colorName = "Yellow";
            }
            else if(currentColor == QColor(Qt::cyan))
            {
                colorName = "Cyan";
            }
            else if(currentColor == QColor(Qt::magenta))
            {
                colorName = "Magenta";
            }
            else if(currentColor == QColor(Qt::white))
            {
                colorName = "White";
            }
            else if(currentColor == QColor(Qt::black))
            {
                colorName = "Black";
            }
            else if(currentColor == QColor(Qt::gray))
            {
                colorName = "Gray";
            }

//            switch(list[index]->getPen().color().alpha())
//            {
//            case 2: colorName = "black";
//                    break;
//            case 3: colorName = "white";
//                    break;
//            case 5: colorName = "gray";
//                    break;
//            case 7: colorName = "red";
//                    break;
//            case 8: colorName = "green";
//                    break;
//            case 9: colorName = "blue";
//                    break;
//            case 10: colorName = "Cyan";
//                    break;
//            case 11: colorName = "magenta";
//                     break;
//            case 12: colorName = "yellow";
//            }

            out << "\nPenColor: "        << colorName; // search through qt color library to find code??
            out << "\nPenWidth: "        << list[index]->getPen().width();
            switch(list[index]->getPen().style())
            {
                case 0: currentStyle = "NoPen";
                        break;
                case 1: currentStyle = "SolidLine";
                        break;
                case 2: currentStyle = "DashLine";
                        break;
                case 3: currentStyle = "DotLine";
                        break;
                case 4: currentStyle = "DashDotLine";
                        break;
                case 5: currentStyle = "DashDotDotLine";
                        break;
                case 6: currentStyle = "CustomDashLine";
                        break;
                case 15: currentStyle = "MPenStyle";
            }

            out << "\nPenStyle: "        << currentStyle;             // Use switch statement to output as string

            switch(list[index]->getPen().capStyle())
            {
                case 0: currentStyle = "FlatCap";
                        break;
                case 16: currentStyle = "SquareCap";
                         break;
                case 32: currentStyle = "RoundCap";
                         break;
                case 48: currentStyle = "MPenCapStyle";
            }

            out << "\nPenCapStyle: "     << currentStyle;          // Use switch statement to output as string

            switch(list[index]->getPen().joinStyle())
            {
                case 0: currentStyle = "MiterJoin";
                        break;
                case 64: currentStyle = "BevelJoin";
                         break;
                case 128: currentStyle = "RoundJoin";
                          break;
                case 256: currentStyle = "SvgMiterJoin";
                          break;
                case 448: currentStyle = "MPenJoinStyle";
            }
            out << "\nPenJoinStyle: "    << currentStyle << '\n'; // Use switch statement to output as string
        }

        // OUTPUT - brush data for valid shapes

        if(currentShape != 1 && currentShape != 2 && currentShape != 8)
        {
            currentColor = list[index]->getBrush().color();

            if(currentColor  == QColor(Qt::red))
            {
                colorName = "red";
            }
            else if(currentColor == QColor(Qt::green))
            {
                colorName = "green";

            }
            else if(currentColor == QColor(Qt::blue))
            {
                colorName = "blue";
            }
            else if(currentColor == QColor(Qt::yellow))
            {
                colorName = "Yellow";
            }
            else if(currentColor == QColor(Qt::cyan))
            {
                colorName = "Cyan";
            }
            else if(currentColor == QColor(Qt::magenta))
            {
                colorName = "Magenta";
            }
            else if(currentColor == QColor(Qt::white))
            {
                colorName = "White";
            }
            else if(currentColor == QColor(Qt::black))
            {
                colorName = "Black";
            }
            else if(currentColor == QColor(Qt::gray))
            {
                colorName = "Gray";
            }
            out << "BrushColor: "    << colorName;

            switch(list[index]->getBrush().style())
            {
                case 0: currentStyle = "NoBrush";
                        break;
                case 1: currentStyle = "SolidPattern";
                        break;
                case 2: currentStyle = "Dense1Pattern";
                          break;
                case 3: currentStyle = "Dense2Pattern";
                        break;
                case 4: currentStyle = "Dense3Pattern";
                        break;
                case 5: currentStyle = "Dense4Pattern";
                        break;
                case 6: currentStyle = "Dense5Pattern";
                         break;
                case 7: currentStyle = "Dense6Pattern";
                         break;
                case 8: currentStyle = "Dense7Pattern";
                        break;
                case 9: currentStyle = "HorPattern";
                        break;
                case 10: currentStyle = "VerPattern";
                         break;
                case 11: currentStyle = "CrossPattern";
                         break;
                case 12: currentStyle = "BDiagPattern";
                         break;
                case 13: currentStyle = "FDiagPattern";
                         break;
                case 14: currentStyle = "DiagCrossPattern";
                         break;
                case 15: currentStyle = "LinearGradientPattern";
                         break;
                case 16: currentStyle = "RadialGradientPattern";
                         break;
                case 17: currentStyle = "ConicalGradientPattern";
                         break;
                case 24: currentStyle = "TexturePattern";
                         break;
            }
            out << "\nBrushStyle: "    << currentStyle << '\n';
        }
        else if(currentShape == 8)    // OUTPUT - text data for text shapes
        {
            // - Implement text data output -

            out << "\nTextString: "     << ((myStd::Text*)(list[index]))->getText();


            currentColor = (list[index])->getBrush().color();

            if(currentColor  == QColor(Qt::red))
            {
                colorName = "red";
            }
            else if(currentColor == QColor(Qt::green))
            {
                colorName = "green";

            }
            else if(currentColor == QColor(Qt::blue))
            {
                colorName = "blue";
            }
            else if(currentColor == QColor(Qt::yellow))
            {
                colorName = "Yellow";
            }
            else if(currentColor == QColor(Qt::cyan))
            {
                colorName = "Cyan";
            }
            else if(currentColor == QColor(Qt::magenta))
            {
                colorName = "Magenta";
            }
            else if(currentColor == QColor(Qt::white))
            {
                colorName = "White";
            }
            else if(currentColor == QColor(Qt::black))
            {
                colorName = "Black";
            }
            else if(currentColor == QColor(Qt::gray))
            {
                colorName = "Gray";
            }
            out << "\nTextColor: : "      << colorName;

            switch(((myStd::Text*)(list[index]))->getFlag())
            {
                case 1: currentStyle = "AlignLeft";
                        break;
                case 2: currentStyle = "AlignRight";
                        break;
                case 4: currentStyle = "AlignHCenter";
                        break;
                case 8: currentStyle = "AlignJustify";
                     break;
                case 16: currentStyle = "AlignAbsolute";
                         break;
                case 31: currentStyle = "AlignHorizontal_Mask";
                         break;
                case 64: currentStyle = "AlignBottom";
                         break;
                case 132: currentStyle = "AlignCenter";
                          break;
             case 256: currentStyle = "AlignBaseline";
            }
            out << "\nTextAlignment: "  << currentStyle;
            out << "\nTextPointSize: "  << ((myStd::Text*)(list[index]))->getFont().pointSize();
            out << "\nTextFontFamily: " << ((myStd::Text*)(list[index]))->getFont().family();

            switch(((myStd::Text*)(list[index]))->getFont().style())
            {
                case 0: currentStyle = "StyleNormal";
                        break;
                case 1: currentStyle = "StyleItalic";
                        break;
                case 2: currentStyle = "StyleOblique";
            }

            out << "\nTextFontStyle: "  << currentStyle;

            switch(((myStd::Text*)(list[index]))->getFont().weight())
            {
                case 100: currentStyle = "Thin";
                          break;
                case 200: currentStyle = "ExtraLight";
                          break;
                case 300: currentStyle = "Light";
                          break;
                case 400: currentStyle = "Normal";
                          break;
                case 500: currentStyle = "Medium";
                          break;
                case 600: currentStyle = "DemiBold";
                          break;
                case 700: currentStyle = "Bold";
                          break;
                case 800: currentStyle = "ExtraBold";
                          break;
                case 900: currentStyle = "Black";
            }

            out << "\nTextFontWeight: " << currentStyle << '\n';
        }
    }       // END - primary loop

        shapesFile.flush();     // TextStream is cleared
        shapesFile.close();     // QFile shapes.txt is closed

}   // END - functon definition
}   // END - namespace myStd


#endif // SERIALIZER_H
