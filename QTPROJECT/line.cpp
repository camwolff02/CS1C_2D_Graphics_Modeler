#include "line.h"
#include <cmath>

void myStd::Line::draw(QPainter* painter)
{
    //move(x, y);

    painter->setPen(this->getPen());
    painter->setBrush(this->getBrush());
    painter->drawLine(begin, end);
    painter->drawText(begin, QString::number(getId()));
}

void myStd::Line::move(const int x, const int y)
{
    // use x & y as offsets to move the beginning and ending coordinate pairs
    begin = QPoint(begin.x() + x, begin.y() + y);
    end = QPoint(end.x() + x, end.y() + y);
}

double myStd::Line::getPerimeter()
{
    return 0;
}

double myStd::Line::getArea()
{
    return 0;
}

double myStd::Line::getLength() const
{
    // returns distance between the beginning and ending coordinate pairs
    return sqrt(pow(end.x() - begin.x(), 2) + pow(end.y() - begin.y(), 2));
}
