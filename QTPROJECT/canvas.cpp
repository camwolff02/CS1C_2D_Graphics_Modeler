#include "canvas.h"
#include "ellipse.h"
#include "text.h"
#include "polyline.h"
#include "read_data.h"
#include <QDebug>

Canvas::Canvas(QWidget *parent)
       : QWidget(parent)
       , shapes{ read_data()}
{
    setFixedSize(1000, 500);
    //creating some test shapes to demonstrate:
    //myStd::Ellipse firstShape(&painter, 0, 200, 100);
    //shapes.push_back(&firstShape);

    // this->paintEvent();
}

void Canvas::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    for (int i = 0; i < shapes.size(); i++){
        if (shapes.size() != 0){
            shapes[i]->draw(&painter);
        }
    }

    //QPainter painter(this);

    //STUFF BELOW IS HARD CODED IN AND WILL BE REMOVED!
    //demo of shapes--we need to make the shapes somewhere else, unsure of where
   // myStd::Ellipse firstShape(0, 200, 100);

    //firstShape.draw(&painter);

    //QFont font("times", 24);
    //myStd::Text text("hello world", font, Qt::red);

    //text.draw(&painter);

    //myStd::Polyline poly(&painter, 0);
    //poly.addPoint(QPoint(50,50));
    //poly.addPoint(QPoint(100,200));
    //poly.addPoint(QPoint(200,954));
    //poly.addPoint(QPoint(50,20));
    //poly.draw(0,0);
}

QPainter* Canvas::getPainter() {
    return &painter;
}

void Canvas::addShape(Shape* shape) {
    shapes.push_back(shape);
}
