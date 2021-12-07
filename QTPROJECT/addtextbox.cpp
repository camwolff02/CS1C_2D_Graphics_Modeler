#include "addtextbox.h"
#include "ui_addtextbox.h"

addTextBox::addTextBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addTextBox)
{
    ui->setupUi(this);
}

addTextBox::~addTextBox()
{
    delete ui;
}
