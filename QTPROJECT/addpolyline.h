#ifndef ADDPOLYLINE_H
#define ADDPOLYLINE_H

#include <QDialog>
#include "canvas.h"

namespace Ui {
class addPolyline;
}

class addPolyline : public QDialog
{
    Q_OBJECT

public:
    explicit addPolyline(QWidget *parent = nullptr, Canvas *renderarea=nullptr);
    ~addPolyline();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::addPolyline *ui;
    Canvas* renderarea;
};

#endif // ADDPOLYLINE_H
