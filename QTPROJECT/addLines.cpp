#include "addLines.h"
#include "ui_addLines.h"

addLines::addLines(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addLines)
{
    ui->setupUi(this);
}

addLines::~addLines()
{
    delete ui;
}
