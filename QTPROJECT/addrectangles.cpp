#include "addrectangles.h"
#include "ui_addrectangles.h"

#include "rectangle.h"

addRectangles::addRectangles(QWidget *parent, Canvas *renderarea) :
    QDialog(parent),
    ui(new Ui::addRectangles),
    renderarea{renderarea}
{
    ui->setupUi(this);
}

addRectangles::~addRectangles()
{
    delete ui;
}

void addRectangles::on_buttonBox_accepted()
{
    int x = ui->x->text().toInt();
    int y = ui->y->text().toInt();
    int width = ui->widthBox->text().toInt();
    int height = ui->lengthBox->text().toInt();

    myStd::Rectangle *newRectangle = new myStd::Rectangle(-1, x, y, width, height);

    QColor color(ui->penColorBox->currentText());

    int styleIndex = ui->penStyleBox->currentIndex();
    Qt::PenStyle style = renderarea->getPenStyle(styleIndex);

    int capIndex = ui->comboBox->currentIndex();
    Qt::PenCapStyle capStyle = renderarea->getPenCapStyle(capIndex);

    int joinIndex = ui->comboBox_2->currentIndex();
    Qt::PenJoinStyle joinStyle = renderarea->getPenJoinStyle(joinIndex);

    newRectangle->setPen(color, ui->penWidthBox->value(), style, capStyle, joinStyle);

    QColor brush_color(ui->comboBox_3->currentText());

    int brushIndex = ui->comboBox_4->currentIndex();
    Qt::BrushStyle brush_style = renderarea->getBrushStyle(brushIndex);

    newRectangle->setBrush(brush_color, brush_style);

    renderarea->addShape(newRectangle);;

    renderarea->update();
}

