#include "addpolyline.h"
#include "ui_addpolyline.h"

addPolyline::addPolyline(QWidget *parent, Canvas *renderarea) :
    QDialog(parent),
    ui(new Ui::addPolyline),
    renderarea{renderarea}
{
    ui->setupUi(this);
}

addPolyline::~addPolyline()
{
    delete ui;
}
