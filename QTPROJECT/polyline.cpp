#include "polyline.h"

namespace myStd{

Polyline::Polyline(QPainter *painter, int id) : Shape{painter, ShapeType::Polyline, id} {


}

void Polyline::draw(const int x, const int y) {

    QPointF pointsTwo[points.size()];
    for(int i = 0; i <= points.size(); i++){
        pointsTwo[i] = points[i];
    }

    getPainter()->drawPolyline(pointsTwo, points.size());

}

double Polyline::getPerimeter(){
    return 0;
}

double Polyline::getArea(){
    return 0;
}

void Polyline::move(const int x, const int y){
    draw(x, y);
}


void Polyline::addPoint(QPoint point){
    points.push_back(point);
}

}
