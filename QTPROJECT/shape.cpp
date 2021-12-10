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

void Shape::setId(int id){ 
    this->id = id; 
}

void Shape::setX(int x){
    this->x = x;
}

void Shape::setY(int y){
    this->y = y;
}

//destructor
Shape::~Shape(){
    --shapeCount;
}

//initialize static shapeCount member to 0
int Shape::shapeCount = 0;
