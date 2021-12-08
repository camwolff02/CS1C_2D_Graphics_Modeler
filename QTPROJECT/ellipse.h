#ifndef _ELLIPSE_
#define _ELLIPSE_

#include "shape.h"

namespace myStd{

class Ellipse : public Shape {
public:
    Ellipse(int id = -1, int width=0, int height=0) : Shape{ShapeType::Ellipse, id} , shape{0, 0, width, height} {};

    virtual void draw(QPainter* painter) override;
    virtual void move(const int x, const int y) override;
    virtual double getPerimeter() override;
    virtual double getArea() override;


private:
  QRect shape;

};

}


#endif
