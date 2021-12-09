#ifndef ADDTEXTBOX_H
#define ADDTEXTBOX_H

#include <QDialog>
#include "canvas.h"

namespace Ui {
class addTextBox;
}

class addTextBox : public QDialog
{
    Q_OBJECT

public:
    explicit addTextBox(QWidget *parent = nullptr, Canvas *renderarea=nullptr);
    ~addTextBox();

private:
    Ui::addTextBox *ui;
    Canvas* renderarea;
};

#endif // ADDTEXTBOX_H
