#ifndef ADDRECTANGLES_H
#define ADDRECTANGLES_H

#include <QDialog>

namespace Ui {
class addRectangles;
}

class addRectangles : public QDialog
{
    Q_OBJECT

public:
    explicit addRectangles(QWidget *parent = nullptr);
    ~addRectangles();

private:
    Ui::addRectangles *ui;
};

#endif // ADDRECTANGLES_H
