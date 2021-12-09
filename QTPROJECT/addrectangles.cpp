#include "addrectangles.h"
#include "ui_addrectangles.h"

addRectangles::addRectangles(QWidget *parent, Canvas *renderarea) :
    QDialog(parent),
    ui(new Ui::addRectangles),
    renderarea{renderarea}
{
    ui->setupUi(this);
}

addRectangles::~addRectangles()
{
    delete ui;
}
