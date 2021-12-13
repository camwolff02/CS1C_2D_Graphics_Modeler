#include "ellipse.h"
#include "math.h"
#include <iostream>


namespace myStd{

void Ellipse::draw(QPainter* painter) {
    shape.moveTo(getX(), getY());

    painter->setPen(this->getPen());
    painter->setBrush(this->getBrush());
    painter->drawEllipse(shape);
    painter->drawText(QPoint(getX(), getY()), QString::number(getId()));

}

double Ellipse::getPerimeter(){
    if(shape.height() == shape.width()){
        //is a circle
        return (2 * M_PI * shape.height());
    } else {
        std::cout << "cannot return the peremiter of an ellipse that isnt a circle";
        return 0;
    }
}

double Ellipse::getArea(){
    return (M_PI * shape.width() * shape.height());
}

void Ellipse::move(const int x, const int y){
    this->setX(x);
    this->setY(y);
}

}

