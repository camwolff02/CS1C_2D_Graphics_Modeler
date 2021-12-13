#ifndef MOVESHAPE_H
#define MOVESHAPE_H

#include <QDialog>
#include "canvas.h"

namespace Ui {
class moveShape;
}

class moveShape : public QDialog
{
    Q_OBJECT

public:
    explicit moveShape(QWidget *parent = nullptr, Canvas *renderarea=nullptr);
    ~moveShape();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::moveShape *ui;
    Canvas* renderarea;
};

#endif // MOVESHAPE_H
