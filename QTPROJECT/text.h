#ifndef TEXT_H
#define TEXT_H

#include "shape.h"
#include <QObject>
#include <QFont>

namespace myStd{

class Text : public Shape {
public:

    Text(QString msg, QFont font, QColor color, int id=-1);

    void draw(QPainter* painter) override;
    void move(const int x, const int y) override;
    double getPerimeter() override;
    double getArea() override;

    QString getText();

private:
    QString text;
    int height;
    int width;
    QFont font;
};


}
#endif // TEXT_H
