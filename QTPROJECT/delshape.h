#ifndef DELSHAPE_H
#define DELSHAPE_H

#include <QDialog>
#include "canvas.h"

namespace Ui {
class delShape;
}

class delShape : public QDialog
{
    Q_OBJECT

public:
    explicit delShape(QWidget *parent = nullptr, Canvas *renderarea=nullptr);
    ~delShape();

private slots:
    void on_buttonBox_accepted();

private:
    Canvas* renderarea;
    Ui::delShape *ui;
};

#endif // DELSHAPE_H
