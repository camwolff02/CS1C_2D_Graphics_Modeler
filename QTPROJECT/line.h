#ifndef LINE_H
#define LINE_H

#include "shape.h"

/*
 * Author: Ethan Safai
 */

namespace myStd
{
class Line : public Shape
{
public:
    // default/ alt constructor
    Line(int id = -1, int x1 = 0, int y1 = 0, int x2 = 0,
         int y2 = 0)
        : Shape(ShapeType::Line, id)
        , begin(QPoint(x1, y1))
        , end(QPoint(x2, y2))
    {
        if (id < 0)
            setId(getShapeCount());
    }
    Line(Line&&) = default;
    ~Line()
    {
    }

    Line& operator=(Line&&) = default;

    void draw(QPainter* painter) override;
    void move(const int x, const int y) override;
    double getPerimeter() override;
    double getArea() override;

    double getLength() const;
    QPoint getBegin() const;
    QPoint getEnd() const;

private:
    QPoint begin; // coordinates of beginning of line
    QPoint end; // coordinates of end of line
};
}

#endif // LINE_H
