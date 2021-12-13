#include "polyline.h"

namespace myStd{

Polyline::Polyline(int id) : Shape{ShapeType::Polyline, id} {
    if (id < 0){
        setId(getShapeCount());
    }
}

void Polyline::draw(QPainter* painter) {


    QPointF pointsTwo[points.size()];
    for(int i = 0; i <= points.size(); i++){
        pointsTwo[i] = points[i];
    }

    painter->setPen(this->getPen());
    painter->setBrush(this->getBrush());
    painter->drawPolyline(pointsTwo, points.size());
    painter->drawText(QPoint(points[0].x(), points[0].y()), QString::number(getId()));

}

double Polyline::getPerimeter(){
    return 0;
}

double Polyline::getArea(){
    return 0;
}

void Polyline::move(const int x, const int y){
    for (int i = 0, n = points.size(); i < n; ++i)
        points[i] = QPoint(points[i].x() + x, points[i].y() + y);
}


void Polyline::addPoint(const int x, const int y){
    QPoint point(x, y);
    points.push_back(point);
}

std::vector<QPoint> Polyline::getPoints(){
    return this->points;
}

}
