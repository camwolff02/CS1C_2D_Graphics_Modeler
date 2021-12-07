#ifndef ADDELLLIPSE_H
#define ADDELLLIPSE_H

#include <QDialog>

namespace Ui {
class addElllipse;
}

class addElllipse : public QDialog
{
    Q_OBJECT

public:
    explicit addElllipse(QWidget *parent = nullptr);
    ~addElllipse();

private:
    Ui::addElllipse *ui;
};

#endif // ADDELLLIPSE_H
