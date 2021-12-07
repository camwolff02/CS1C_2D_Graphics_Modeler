#include "addLines.h"
#include "ui_addLines.h"

#include "line.h"

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

void addLines::on_buttonBox_accepted()
{
    //Line is ready to be made
    QPoint point1(ui->x1->text().toInt(), ui->y1->text().toInt());
    QPoint point2(ui->x2->text().toInt(), ui->y2->text().toInt());
}

