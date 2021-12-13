#include "delshape.h"
#include "ui_delshape.h"

delShape::delShape(QWidget *parent, Canvas *renderarea) :
    QDialog(parent),
    ui(new Ui::delShape),
    renderarea{renderarea}
{
    ui->setupUi(this);
}

delShape::~delShape()
{
    delete ui;
}

void delShape::on_buttonBox_accepted()
{
    int id = ui->lineEdit->text().toInt();
    renderarea->deleteShape(id);

    renderarea->update();

}

