#include "rectangle.h"

void myStd::Rectangle::draw(const int x, const int y)
{
    // call Rectangle::move function
    move(x, y);
    getPainter()->drawRect(rectangle);
    getPainter()->drawText(QPoint(x, y), QString::number(getId()));
}

void myStd::Rectangle::move(const int x, const int y)
{
    rectangle.moveTo(x, y);
}

double myStd::Rectangle::getPerimeter()
{
    return 2 * (rectangle.height() + rectangle.width());
}

double myStd::Rectangle::getArea()
{
    return rectangle.height() * rectangle.width();
}
