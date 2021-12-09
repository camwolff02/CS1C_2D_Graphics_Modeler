#ifndef ADDLINES_H
#define ADDLINES_H

#include <QDialog>

#include "canvas.h"
namespace Ui {
class addLines;
}

class addLines : public QDialog
{
    Q_OBJECT

public:
    explicit addLines(QWidget *parent = nullptr, Canvas *renderarea=nullptr);
    ~addLines();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::addLines *ui;
    Canvas* renderarea;
};

#endif // ADDLINES_H
