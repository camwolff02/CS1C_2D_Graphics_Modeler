#ifndef ADDELLLIPSE_H
#define ADDELLLIPSE_H

#include <QDialog>
#include "canvas.h"

namespace Ui {
class addElllipse;
}

class addElllipse : public QDialog
{
    Q_OBJECT

public:
    explicit addElllipse(QWidget *parent = nullptr, Canvas *renderarea=nullptr);
    ~addElllipse();

private:
    Ui::addElllipse *ui;
    Canvas* renderarea;
};

#endif // ADDELLLIPSE_H
