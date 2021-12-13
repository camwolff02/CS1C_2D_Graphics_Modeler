#include "moveshape.h"
#include "ui_moveshape.h"

moveShape::moveShape(QWidget *parent, Canvas *renderarea) :
    QDialog(parent),
    ui(new Ui::moveShape),
    renderarea{renderarea}
{
    ui->setupUi(this);
}

moveShape::~moveShape()
{
    delete ui;
}
