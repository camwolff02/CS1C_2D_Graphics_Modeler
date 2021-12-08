#include "addLines.h"
#include "ui_addLines.h"
#include "canvas.h"

#include <iostream>

#include "line.h"
#include "ellipse.h"

addLines::addLines(QWidget *parent, Canvas *renderarea) :
    QDialog(parent),
    ui(new Ui::addLines),
    renderarea{renderarea}
{
    ui->setupUi(this);
}

addLines::~addLines()
{
    delete ui;
}

void addLines::on_buttonBox_accepted()
{
    qInfo() << "test";
    //Line is ready to be made

    QPoint point1(ui->x1->text().toInt(), ui->y1->text().toInt());
    QPoint point2(ui->x2->text().toInt(), ui->y2->text().toInt());

    myStd::Line *newLine = new myStd::Line(-1, point1.x(), point1.y(), point2.x(), point2.y());

    //newLine->setPen(Qt::GlobalColor(ui->penColorBox->currentText()), ui->penWidthBox, ui->penStyleBox, ui->penCapStyleBox, ui->comboBox);
    newLine->setPen(Qt::red, 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin);

    //set pen stuff here
    //add our shape to our vector in parent using a new method i will create tonight

    renderarea->addShape(newLine);

    renderarea->update();

}

