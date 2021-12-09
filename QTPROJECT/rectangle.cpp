#include "rectangle.h"

void myStd::Rectangle::draw(QPainter* painter)
{
    painter->setPen(this->getPen());
    painter->setBrush(this->getBrush());
    painter->drawRect(rectangle);
    painter->drawText(QPoint(rectangle.x(), rectangle.y()), QString::number(getId()));
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
