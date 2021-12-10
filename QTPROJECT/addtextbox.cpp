#include "addtextbox.h"
#include "ui_addtextbox.h"

#include "text.h"
#include <QDebug>

addTextBox::addTextBox(QWidget *parent, Canvas* renderarea) :
    QDialog(parent),
    ui(new Ui::addTextBox),
    renderarea{renderarea}
{
    ui->setupUi(this);
}

addTextBox::~addTextBox()
{
    delete ui;
}

void addTextBox::on_buttonBox_accepted()
{
    int x = ui->x->text().toInt();
    int y = ui->y->text().toInt();

    QColor color = ui->comboBox->currentText();

    QFont font(ui->comboBox_3->currentText(), ui->spinBox->value(), 1, false);

    switch (ui->comboBox_4->currentIndex()){
    case 1:
        font.setStyle(QFont::StyleNormal);
        break;
    case 2:
        font.setStyle(QFont::StyleItalic);
        break;
    case 3:
        font.setStyle(QFont::StyleOblique);
        break;
    }

    switch (ui->comboBox_5->currentIndex()){
    case 1:
        font.setWeight(QFont::Thin);
        break;
    case 2:
        font.setWeight(QFont::Light);
        break;
    case 3:
        font.setWeight(QFont::Normal);
        break;
    case 4:
        font.setWeight(QFont::Bold);
        break;
    }

    //not done
    myStd::Text *newText = new myStd::Text(ui->lineEdit->text(), font, color, -1);

    newText->getBrush().setColor(color);
    newText->setX(x);
    newText->setY(y);

   renderarea->addShape(newText);

   renderarea->update();




}

