#ifndef TEXT_H
#define TEXT_H

#include "shape.h"
#include <QObject>
#include <QFont>

namespace myStd{

class Text : public Shape {
public:

    Text(QString msg, QFont font, Qt::GlobalColor color, int id=-1);

    virtual void draw(QPainter* painter) override;
    virtual void move(const int x, const int y) override;
    virtual double getPerimeter() override;
    virtual double getArea() override;

private:
    QString text;
};


}
#endif // TEXT_H
