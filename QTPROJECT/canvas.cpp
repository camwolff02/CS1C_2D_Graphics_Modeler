#include "canvas.h"
#include "ellipse.h"

Canvas::Canvas(QWidget *parent) : QWidget(parent) {
    setFixedSize(1000, 500);

}

void Canvas::paintEvent(QPaintEvent *event) {

    for (int i = 0; i <= shapes.size(); i++){
        //shapes[i]->draw();
    }

    QPainter painter(this);

    //demo of shapes--we need to make the shapes somewhere else, unsure of where
    myStd::Ellipse firstShape(&painter, 0, 200, 100);

    firstShape.draw(500, 250);
}
