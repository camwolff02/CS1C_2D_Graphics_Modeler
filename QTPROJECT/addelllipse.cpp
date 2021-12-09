#include "addelllipse.h"
#include "ui_addelllipse.h"
#include "ellipse.h"
#include "canvas.h"

addElllipse::addElllipse(QWidget *parent, Canvas *renderarea) :
    QDialog(parent),
    ui(new Ui::addElllipse),
    renderarea{renderarea}
{
    ui->setupUi(this);
}

addElllipse::~addElllipse()
{
    delete ui;
}

void addElllipse::on_buttonBox_accepted()
{
    // ellipse stuff
    QPoint point1(ui->x->text().toInt(), ui->y->text().toInt());

    int width = (ui->lengthBox->text().toInt());
    int height = (ui->widthBox->text().toInt());

    myStd::Ellipse *newEllipse = new myStd::Ellipse(-1,width,height);

    newEllipse->setX(point1.x());
    newEllipse->setY(point1.y());

    //pen properties
    QColor color(ui->penColorBox->currentText());

    int styleIndex = ui->penStyleBox->currentIndex();
    Qt::PenStyle style = renderarea->getPenStyle(styleIndex);

    int capIndex = ui->penCapStyleBox->currentIndex();
    Qt::PenCapStyle capStyle = renderarea->getPenCapStyle(capIndex);

    int joinIndex = ui->penJoinStyleBox->currentIndex();
    Qt::PenJoinStyle joinStyle = renderarea->getPenJoinStyle(joinIndex);

    newEllipse->setPen(color, ui->penWidthBox->value(), style, capStyle, joinStyle);

    // brush properties
    QColor brush_color(ui->brushColorBox->currentText());

    int brushIndex = ui->brushStyleBox->currentIndex();
    Qt::BrushStyle brush_style = renderarea->getBrushStyle(brushIndex);

    newEllipse->setBrush(brush_color, brush_style);

    // rendering
    renderarea->addShape(newEllipse);

    renderarea->update();
}

