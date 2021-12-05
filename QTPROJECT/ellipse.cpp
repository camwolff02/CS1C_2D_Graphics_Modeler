#include "ellipse.h"

namespace myStd{

void Ellipse::draw(const int x, const int y) {
    shape.moveTo(x, y);
    getPainter()->drawEllipse(shape);

}

double Ellipse::getPerimeter(){


}

double Ellipse::getArea(){

}

void Ellipse::move(const int x, const int y){

}

}

