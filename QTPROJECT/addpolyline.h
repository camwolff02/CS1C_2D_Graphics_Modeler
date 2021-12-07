#ifndef ADDPOLYLINE_H
#define ADDPOLYLINE_H

#include <QDialog>

namespace Ui {
class addPolyline;
}

class addPolyline : public QDialog
{
    Q_OBJECT

public:
    explicit addPolyline(QWidget *parent = nullptr);
    ~addPolyline();

private:
    Ui::addPolyline *ui;
};

#endif // ADDPOLYLINE_H
