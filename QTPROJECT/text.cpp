#include "text.h"

namespace myStd {

Text::Text(QPainter *painter, QString msg, QFont font, Qt::GlobalColor color, int id) : Shape{painter, ShapeType::Ellipse, id} , text{msg} {
    getPainter()->setFont(font);
    QPen pen = getPainter()->pen();
    pen.setColor(color);
    getPainter()->setPen(pen);

}

void Text::draw(const int x, const int y) {

    getPainter()->drawText(x, y, text);

}

double Text::getPerimeter(){
    return 0;
}

double Text::getArea(){
    return 0;
}

void Text::move(const int x, const int y){
    draw(x, y);
}

}
