#include "text.h"

namespace myStd {

Text::Text(QString msg, QFont font, QColor color, int id) : Shape{ShapeType::Text, id} , text{msg} {
    getPainter()->setFont(font);
    QPen pen = getPainter()->pen();
    pen.setColor(color);
    getPainter()->setPen(pen);

    if (id < 0){
        setId(getShapeCount());
    }

}

void Text::draw(QPainter* painter) {
    painter->setPen(this->getPen());
    painter->setBrush(this->getBrush());

    painter->drawText(this->getX(), this->getY(), text);

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
