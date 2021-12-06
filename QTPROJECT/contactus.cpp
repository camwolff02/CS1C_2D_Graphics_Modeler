#include "contactus.h"
#include "ui_contactus.h"

contactus::contactus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::contactus)
{
    ui->setupUi(this);
}

contactus::~contactus()
{
    delete ui;
}
