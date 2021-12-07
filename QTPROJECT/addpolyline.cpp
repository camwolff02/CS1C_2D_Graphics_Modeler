#include "addpolyline.h"
#include "ui_addpolyline.h"

addPolyline::addPolyline(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addPolyline)
{
    ui->setupUi(this);
}

addPolyline::~addPolyline()
{
    delete ui;
}
