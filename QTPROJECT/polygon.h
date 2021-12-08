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
    Polygon(int id = -1)
        : Shape(ShapeType::Polygon, id)
    {
        setX(0);
        setY(0);
        if (id < 0)
            setId(getShapeCount());
    }
    Polygon(Polygon&&) = default;
    ~Polygon()
    {
    }

    Polygon& operator=(Polygon&&) = default;

    virtual void draw(QPainter* painter) override;
    virtual void move(const int x, const int y) override;
    virtual double getPerimeter() override;
    virtual double getArea() override;

    void addPoint(const int x, const int y);

    myStd::vector<QPoint> getPoints() const;

private:
    myStd::vector<QPoint> points; // contains the polygon's vertices
    QPolygon polygon;
};
}

#endif // POLYGON_H