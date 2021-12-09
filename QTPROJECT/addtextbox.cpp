#include "addtextbox.h"
#include "ui_addtextbox.h"

#include "text.h"

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

    //QFont font(ui->comboBox_3->currentText(), ui->spinBox->value(), 1, false);

    //not done
    QFont font("times", 24);
    myStd::Text *newText = new myStd::Text(ui->lineEdit->text(), font, color, -1);

    //QFont font("times", 24);
    //myStd::Text *newText = new myStd::Text("hello world", font, Qt::red, -1);

    newText->setX(x);
    newText->setY(y);

   renderarea->addShape(newText);

   renderarea->update();




}

