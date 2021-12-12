#ifndef DELSHAPE_H
#define DELSHAPE_H

#include <QDialog>

namespace Ui {
class delShape;
}

class delShape : public QDialog
{
    Q_OBJECT

public:
    explicit delShape(QWidget *parent = nullptr);
    ~delShape();

private:
    Ui::delShape *ui;
};

#endif // DELSHAPE_H
