#include "polygon.h"
#include <cmath>

// use the first coordinates of the polygon for x & y for correct rendering!
void myStd::Polygon::draw(const int x, const int y)
{
    // call Polygon::move function
    move(x, y);
    getPainter()->drawPolygon(polygon);
    getPainter()->drawText(points[0], QString::number(getId()));
}

void myStd::Polygon::move(const int x, const int y)
{
    // using x & y as offsets for moving the polygon
    polygon.translate(x, y);
    for (int i = 0, n = points.size(); i < n; ++i)
        points[i] = QPoint(points[i].x() + x, points[i].y() + y);
}

double myStd::Polygon::getPerimeter()
{
    double distance, perimeter = 0;

    for (int i = 0, n = points.size(); i < n; ++i)
    {
        // if the last coordinate pair has not yet been reached, calculate the
        // distance between the current and next coordinate pair for the
        // polygon and add it to the total perimeter
        if (i < n - 1)
        {
            distance =
            sqrt
            (
                pow(points[i + 1].x() - points[i].x(), 2) +
                pow(points[i + 1].y() - points[i].y(), 2)
            );
        }
        // if the last coordinate pair has been reached, calculate the distance
        // between the last and first points and add it to the total perimeter
        else
        {
            distance =
            sqrt
            (
                pow(points[0].x() - points[i].x(), 2) +
                pow(points[0].y() - points[i].y(), 2)
            );
        }
        // add the calculated distance to the perimeter
        perimeter += distance;
    }
    return perimeter;
}

double myStd::Polygon::getArea()
{
    double area = 0;

    int j = points.size() - 1;
    // using shoelace formula to calculate polygon area
    for (int i = 0, n = points.size(); i < n; ++i)
    {
        area += (points[j].x() + points[i].x()) *
                (points[j].y() - points[i].y());
        j = i;
    }
    area /= 2.0;

    return abs(area);
}

void myStd::Polygon::addPoint(const int x, const int y)
{
    points.push_back(QPoint(x, y));
    polygon << QPoint(x, y);
}
