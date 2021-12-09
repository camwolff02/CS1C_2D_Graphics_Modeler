#include "text.h"

namespace myStd {

Text::Text(QString msg, QFont font, QColor color, int id) : Shape{ShapeType::Text, id} , text{msg} {
    this->font = font;
    if (id < 0){
        setId(getShapeCount());
    }

}

void Text::draw(QPainter* painter) {
    painter->setPen(this->getPen());
    painter->setBrush(this->getBrush());
    painter->setFont(this->font);

    painter->drawText(this->getX(), this->getY(), text);
    painter->drawText(QPoint(getX() - 10, getY() - 10), QString::number(getId()));

}

double Text::getPerimeter(){
    return 0;
}

double Text::getArea(){
    return 0;
}

void Text::move(const int x, const int y){
    //draw(x, y);
}

QString Text::getText(){
    return this->text;
}

}
