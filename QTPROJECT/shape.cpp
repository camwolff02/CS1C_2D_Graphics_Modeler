#include "shape.h"



void Shape::setPen(Qt::GlobalColor color, int size, Qt::PenStyle style, Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle){
  QPen pen;
  pen.setColor(color);
  pen.setWidth(size);
  pen.setStyle(style);
  pen.setCapStyle(capStyle);
  pen.setJoinStyle(joinStyle);

  qpainterPTR->setPen(pen);

}

void Shape::setBrush(Qt::GlobalColor color, Qt::BrushStyle brushStyle){
  QBrush brush;
  brush.setColor(color);
  brush.setStyle(brushStyle);

  qpainterPTR->setBrush(brush);

}

void Shape::setShapeType(ShapeType type){
  shapeID = type;
}

QPainter* Shape::getPainter(){
    return qpainterPTR;
}

//destructor
Shape::~Shape(){
    //unused so far
}