#include "ellipse.h"
#include "math.h"
#include <iostream>


namespace myStd{

void Ellipse::draw(const int x, const int y) {
    shape.moveTo(x, y);
    getPainter()->drawEllipse(shape);

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
    this->draw(x, y);
}

}
