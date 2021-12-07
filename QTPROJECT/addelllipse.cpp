#include "addelllipse.h"
#include "ui_addelllipse.h"

addElllipse::addElllipse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addElllipse)
{
    ui->setupUi(this);
}

addElllipse::~addElllipse()
{
    delete ui;
}
