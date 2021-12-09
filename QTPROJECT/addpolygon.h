#ifndef ADDPOLYGON_H
#define ADDPOLYGON_H

#include <QDialog>
#include "canvas.h"

namespace Ui {
class addPolygon;
}

class addPolygon : public QDialog
{
    Q_OBJECT

public:
    explicit addPolygon(QWidget *parent = nullptr, Canvas *renderarea=nullptr);
    ~addPolygon();

private:
    Ui::addPolygon *ui;
    Canvas* renderarea;
};

#endif // ADDPOLYGON_H
