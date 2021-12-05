#include "login.h"
#include "ui_login.h"
#include "globals.h"

#include <QMessageBox>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_loginButton_clicked()
{
    QString username = ui->usernameBox->text();
    QString password = ui->passwordBox->text();

    //SAVED ADMIN LOGIN INFO USE FOR ADMIN
    //  USERNAME : admin
    //  PASSWORD : password

    //SAVED GUEST INFO USE FOR GUEST
    //  USERNAME : guest
    //  PASSWORD : holypandas

    // ^^ CASE SENSITIVE LOGIN
    // MAY CREATE A GUEST BUTTON INSTEAD OF A GUEST LOGIN MORE FITTING?

    if (username == "admin" && password == "password")
    {
        QMessageBox::information(this, "Login", "Logging in as admin");

        // set the admin to true here, doesnt need to be set in guest login obviously
        isAdmin = true;

        //hide();

        // ISSUE - having issue closing previous tab, login ui wont hide when i want to only show mainPage

        mainPage = new MainWindow(this);
        mainPage->show();
    }
    else if(username == "guest" && password == "holypandas")
    {
        QMessageBox::information(this, "Login", "Logging in as a guest");

        mainPage = new MainWindow(this);
        mainPage->show();
    }
    else
    {
        QMessageBox::warning(this, "Login", "Username or password is incorrect");

    }
}

