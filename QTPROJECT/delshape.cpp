#include "delshape.h"
#include "ui_delshape.h"

delShape::delShape(QWidget *parent, Canvas *renderarea) :
    QDialog(parent),
    ui(new Ui::delShape)
{
    ui->setupUi(this);
}

delShape::~delShape()
{
    delete ui;
}
