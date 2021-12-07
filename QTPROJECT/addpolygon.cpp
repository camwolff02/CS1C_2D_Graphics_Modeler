#include "addpolygon.h"
#include "ui_addpolygon.h"

addPolygon::addPolygon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addPolygon)
{
    ui->setupUi(this);
}

addPolygon::~addPolygon()
{
    delete ui;
}
