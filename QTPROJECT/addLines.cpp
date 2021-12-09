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

    QColor color(ui->penColorBox->currentText());

    int styleIndex = ui->penCapStyleBox->currentIndex();
    Qt::PenStyle style = renderarea->getPenStyle(styleIndex);

    int capIndex = ui->penCapStyleBox->currentIndex();
    Qt::PenCapStyle capStyle = renderarea->getPenCapStyle(capIndex);

    int joinIndex = ui->penJoinStyleBox->currentIndex();
    Qt::PenJoinStyle joinStyle = renderarea->getPenJoinStyle(joinIndex);

    newLine->setPen(color, ui->penWidthBox->value(), style, capStyle, joinStyle);

    renderarea->addShape(newLine);

    renderarea->update();

}

