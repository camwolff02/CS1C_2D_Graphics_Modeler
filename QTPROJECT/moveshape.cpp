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

void moveShape::on_buttonBox_accepted()
{
    int id = ui->lineEdit_3->text().toInt();

    int x = ui->lineEdit->text().toInt();
    int y = ui->lineEdit_2->text().toUInt();

    renderarea->moveShape(id, x, y);

    renderarea->update();
}

