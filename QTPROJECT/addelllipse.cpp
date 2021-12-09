#include "addelllipse.h"
#include "ui_addelllipse.h"

addElllipse::addElllipse(QWidget *parent, Canvas *renderarea) :
    QDialog(parent),
    ui(new Ui::addElllipse),
    renderarea{renderarea}
{
    ui->setupUi(this);
}

addElllipse::~addElllipse()
{
    delete ui;
}
