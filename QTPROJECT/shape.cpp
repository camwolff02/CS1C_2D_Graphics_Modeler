#include "shape.h"

bool Shape::operator==(const Shape& rhs)
{
    return id == rhs.id;
}

bool Shape::operator<(const Shape& rhs)
{
    return id < rhs.id;
}

void Shape::setPen(QColor color, int size, Qt::PenStyle style, Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle){
  pen.setColor(color);
  pen.setWidth(size);
  pen.setStyle(style);
  pen.setCapStyle(capStyle);
  pen.setJoinStyle(joinStyle);

}

void Shape::setBrush(QColor color, Qt::BrushStyle brushStyle){
  brush.setColor(color);
  brush.setStyle(brushStyle);

}

void Shape::setShapeType(ShapeType type){
  shapeID = type;
}

QPainter* Shape::getPainter(){
    return qpainterPTR;
}

QPen Shape::getPen(){
    return this->pen;
}

QBrush Shape::getBrush(){
    return this->brush;
}

int Shape::getX(){
    return x;
}

int Shape::getY(){
    return y;
}

ShapeType Shape::getShapeType(){
    return shapeID;
}

//destructor
Shape::~Shape(){
    --shapeCount;
}

//initialize static shapeCount member to 0
int Shape::shapeCount = 0;
