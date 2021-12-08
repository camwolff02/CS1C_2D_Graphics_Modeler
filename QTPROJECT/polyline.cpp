#include "polyline.h"

namespace myStd{

Polyline::Polyline(int id) : Shape{ShapeType::Polyline, id} {


}

void Polyline::draw(QPainter* painter) {


    QPointF pointsTwo[points.size()];
    for(int i = 0; i <= points.size(); i++){
        pointsTwo[i] = points[i];
    }

    painter->setPen(this->getPen());
    painter->setBrush(this->getBrush());
    painter->drawPolyline(pointsTwo, points.size());

}

double Polyline::getPerimeter(){
    return 0;
}

double Polyline::getArea(){
    return 0;
}

void Polyline::move(const int x, const int y){
    //draw(x, y);
}


void Polyline::addPoint(QPoint point){
    points.push_back(point);
}

std::vector<QPoint> Polyline::getPoints(){
    return this->points;
}

}
