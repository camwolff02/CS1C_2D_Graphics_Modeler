#ifndef POLYLINE_H
#define POLYLINE_H

#include "shape.h"
#include <QObject>

namespace myStd{

class Polyline : public Shape {

public:
    Polyline(int id=-1);

    virtual void draw(QPainter* painter) override;
    virtual void move(const int x, const int y) override;
    virtual double getPerimeter() override;
    virtual double getArea() override;

    void addPoint(QPoint point);

    std::vector<QPoint> getPoints();

private:
    std::vector<QPoint> points;
};

}

#endif // POLYLINE_H
