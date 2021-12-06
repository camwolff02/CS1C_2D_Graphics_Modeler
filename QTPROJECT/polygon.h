#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"
#include "Vector.h"

/*
 * Author: Ethan Safai
 */

namespace myStd
{
class Polygon : public Shape
{
public:
    // defualt/ alt constructor
    Polygon(QPainter* painter, int id = -1)
        : Shape(painter, ShapeType::Polygon, id)
    {
        if (id < 0)
            setId(getShapeCount());
    }
    Polygon(Polygon&&) = default;
    ~Polygon()
    {
    }

    Polygon& operator=(Polygon&&) = default;

    virtual void draw(const int x, const int y) override;
    virtual void move(const int x, const int y) override;
    virtual double getPerimeter() override;
    virtual double getArea() override;

    void addPoint(const int x, const int y);

private:
    myStd::vector<QPoint> points; // contains the polygon's vertices
    QPolygon polygon;
};
}

#endif // POLYGON_H
