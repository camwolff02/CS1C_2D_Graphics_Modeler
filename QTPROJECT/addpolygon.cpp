#include "addpolygon.h"
#include "ui_addpolygon.h"

addPolygon::addPolygon(QWidget *parent, Canvas *renderarea) :
    QDialog(parent),
    ui(new Ui::addPolygon),
    renderarea{renderarea}
{
    ui->setupUi(this);
}

addPolygon::~addPolygon()
{
    delete ui;
}
