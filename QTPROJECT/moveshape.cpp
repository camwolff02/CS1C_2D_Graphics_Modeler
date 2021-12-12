#include "moveshape.h"
#include "ui_moveshape.h"

moveShape::moveShape(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::moveShape)
{
    ui->setupUi(this);
}

moveShape::~moveShape()
{
    delete ui;
}
