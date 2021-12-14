#include "text.h"

namespace myStd {

Text::Text(QString msg, QFont font, QColor color, int height, int width, int x, int y, int flag, int id) : Shape{ShapeType::Text, id} , text{msg} {
    this->font = font;
    this->height = height;
    this->width = width;
    this->setX(x);
    this->setY(y);
    this->flag = flag;

    this->getBrush().setColor(color);
    if (id < 0){
        setId(getShapeCount());
    }

}

void Text::draw(QPainter* painter) {
    painter->setPen(this->getPen());
    painter->setBrush(this->getBrush());
    painter->setFont(this->font);

    painter->drawText(QPoint(getX() - 10, getY() - 10), QString::number(getId()));
    painter->drawText(getX(), getY(), this->width, this->height, flag, text);
}

double Text::getPerimeter(){
    return 0;
}

double Text::getArea(){
    return 0;
}

void Text::move(const int x, const int y){
    this->setX(x);
    this->setY(y);
}

QString Text::getText(){
    return this->text;
}


QFont Text::getFont(){
     return this->font;
}

int Text::getFlag(){
    return this->flag;
}

} // End of namespace
