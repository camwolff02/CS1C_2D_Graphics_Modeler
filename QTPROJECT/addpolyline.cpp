#include "addpolyline.h"
#include "ui_addpolyline.h"
#include "polyline.h"
#include "canvas.h"

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

void addPolyline::on_buttonBox_accepted()
{
    myStd::Polyline *newPolyLine = new myStd::Polyline(-1);
    newPolyLine->addPoint(ui->x_1->text().toInt(), ui->y_1->text().toInt());
    newPolyLine->addPoint(ui->x_2->text().toInt(), ui->y_2->text().toInt());
    newPolyLine->addPoint(ui->x_3->text().toInt(), ui->y_3->text().toInt());
    newPolyLine->addPoint(ui->x_4->text().toInt(), ui->y_4->text().toInt());
    newPolyLine->addPoint(ui->x_5->text().toInt(), ui->y_5->text().toInt());

    //pen properties
    QColor color(ui->penColorBox->currentText());

    int styleIndex = ui->penStyleBox->currentIndex();
    Qt::PenStyle style = renderarea->getPenStyle(styleIndex);

    int capIndex = ui->penCapStyleBox->currentIndex();
    Qt::PenCapStyle capStyle = renderarea->getPenCapStyle(capIndex);

    int joinIndex = ui->penJoinStyleBox->currentIndex();
    Qt::PenJoinStyle joinStyle = renderarea->getPenJoinStyle(joinIndex);

    newPolyLine->setPen(color, ui->penWidthBox->value(), style, capStyle, joinStyle);

    // rendering
    renderarea->addShape(newPolyLine);

    renderarea->update();
}

