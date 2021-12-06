#include "addrectangles.h"
#include "ui_addrectangles.h"

addRectangles::addRectangles(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addRectangles)
{
    ui->setupUi(this);
}

addRectangles::~addRectangles()
{
    delete ui;
}
