#include "addtextbox.h"
#include "ui_addtextbox.h"

addTextBox::addTextBox(QWidget *parent, Canvas* renderarea) :
    QDialog(parent),
    ui(new Ui::addTextBox),
    renderarea{renderarea}
{
    ui->setupUi(this);
}

addTextBox::~addTextBox()
{
    delete ui;
}
