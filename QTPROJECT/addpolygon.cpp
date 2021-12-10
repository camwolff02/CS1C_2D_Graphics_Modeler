#include "addpolygon.h"
#include "ui_addpolygon.h"

#include "polygon.h"

addPolygon::addPolygon(QWidget *parent, Canvas *renderarea) :
    QDialog(parent),
    ui(new Ui::addPolygon),
    renderarea{renderarea}
{
    ui->setupUi(this);
}

addPolygon::~addPolygon()
{
    delete ui;
}

void addPolygon::on_buttonBox_accepted()
{
    QPoint point1(ui->x1_2->text().toInt(), ui->y1_2->text().toInt());
    QPoint point2(ui->x2_2->text().toInt(), ui->y2_2->text().toInt());
    QPoint point3(ui->x3_2->text().toInt(), ui->y3_2->text().toInt());
    QPoint point4(ui->x4_2->text().toInt(), ui->y4_2->text().toInt());
    QPoint point5(ui->x5_2->text().toInt(), ui->y5_2->text().toInt());

    myStd::Polygon *newPolygon = new myStd::Polygon(-1);

    newPolygon->addPoint(point1.x(), point1.y());
    newPolygon->addPoint(point2.x(), point2.y());
    newPolygon->addPoint(point3.x(), point3.y());
    newPolygon->addPoint(point4.x(), point4.y());
    newPolygon->addPoint(point5.x(), point5.y());

    QColor color(ui->penColorBox->currentText());

    int styleIndex = ui->penStyleBox->currentIndex();
    Qt::PenStyle style = renderarea->getPenStyle(styleIndex);

    int capIndex = ui->comboBox->currentIndex();
    Qt::PenCapStyle capStyle = renderarea->getPenCapStyle(capIndex);

    int joinIndex = ui->comboBox_2->currentIndex();
    Qt::PenJoinStyle joinStyle = renderarea->getPenJoinStyle(joinIndex);

    newPolygon->setPen(color, ui->penWidthBox->value(), style, capStyle, joinStyle);

    QColor brush_color(ui->comboBox_3->currentText());

    int brushIndex = ui->comboBox_4->currentIndex();
    Qt::BrushStyle brush_style = renderarea->getBrushStyle(brushIndex);

    newPolygon->setBrush(brush_color, brush_style);

    renderarea->addShape(newPolygon);

    renderarea->update();

}

