#ifndef ADDTEXTBOX_H
#define ADDTEXTBOX_H

#include <QDialog>

namespace Ui {
class addTextBox;
}

class addTextBox : public QDialog
{
    Q_OBJECT

public:
    explicit addTextBox(QWidget *parent = nullptr);
    ~addTextBox();

private:
    Ui::addTextBox *ui;
};

#endif // ADDTEXTBOX_H
