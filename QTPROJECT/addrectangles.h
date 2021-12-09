#ifndef ADDRECTANGLES_H
#define ADDRECTANGLES_H

#include <QDialog>
#include "canvas.h"

namespace Ui {
class addRectangles;
}

class addRectangles : public QDialog
{
    Q_OBJECT

public:
    explicit addRectangles(QWidget *parent = nullptr, Canvas *renderarea=nullptr);
    ~addRectangles();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::addRectangles *ui;
    Canvas* renderarea;
};

#endif // ADDRECTANGLES_H
