#include "canvas.h"
#include "ellipse.h"
#include "text.h"
#include "polyline.h"
#include "parser.h"
#include <QDebug>

Canvas::Canvas(QWidget *parent)
       : QWidget(parent)
       , shapes{ parse()}
{
    setFixedSize(1000, 500);
}

void Canvas::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    for (int i = 0; i < shapes.size(); i++){
        if (shapes.size() != 0){
            shapes[i]->draw(&painter);
        }
    }
}

QPainter* Canvas::getPainter() {
    return &painter;
}

void Canvas::addShape(Shape* shape) {
    shapes.push_back(shape);
}

Qt::PenStyle Canvas::getPenStyle(int index){
    Qt::PenStyle style;
    switch (index){
    case 1:
        style = Qt::NoPen;
        break;
    case 2:
        style = Qt::SolidLine;
        break;
    case 3:
        style = Qt::DashLine;
        break;
    case 4:
        style = Qt::DotLine;
        break;
    case 5:
        style = Qt::DashDotLine;
        break;
    case 6:
        style = Qt::DashDotDotLine;
        break;
    }
    return style;
}
Qt::PenCapStyle Canvas::getPenCapStyle(int index){
    Qt::PenCapStyle capStyle;
    switch (index) {
    case 1:
        capStyle = Qt::FlatCap;
        break;
    case 2:
        capStyle = Qt::SquareCap;
        break;
    case 3:
        capStyle = Qt::RoundCap;
        break;
    }
    return capStyle;
}
Qt::PenJoinStyle Canvas::getPenJoinStyle(int index){
    Qt::PenJoinStyle pen_join_style;
      switch(index)
      {
          case 1:
              pen_join_style = Qt::MiterJoin;
              break;
          case 2:
              pen_join_style = Qt::BevelJoin;
              break;
          case 3:
              pen_join_style = Qt::RoundJoin;
              break;
      }
      return pen_join_style;
}

Qt::BrushStyle Canvas::getBrushStyle(int index){
    Qt::BrushStyle brush_style;
    switch(index)
    {
        case 1:
            brush_style = Qt::SolidPattern;
            break;
        case 2:
            brush_style = Qt::HorPattern;
            break;
        case 3:
            brush_style = Qt::VerPattern;
            break;
        case 4:
            brush_style = Qt::NoBrush;
            break;
    }
    return brush_style;
}

void Canvas::moveShape(int id, int x, int y){
    myStd::vector<Shape*>::iterator m;
    for (m = shapes.begin(); m < shapes.end();m++)
    {
        if ((*m)->getId() == id)
        {
            (*m)->move(x, y);

        }
    }

}

void Canvas::deleteShape(int id){

    myStd::vector<Shape*>::iterator p;
    for (p = shapes.begin(); p < shapes.end(); p++){
        if ((*p)->getId() == id){
            this->shapes.erase(p);
            //deallocate memory here crashed program?

        }
    }

}

Canvas::~Canvas(){


    myStd::vector<Shape*>::iterator p;
    for (p = shapes.begin(); p < shapes.end(); p++){
        delete *p;
    }

}
