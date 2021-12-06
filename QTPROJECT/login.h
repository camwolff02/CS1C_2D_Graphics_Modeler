#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QString>
#include "mainwindow.h"

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_loginButton_clicked();

    void on_guestButton_pressed();

private:
    Ui::login *ui;
    QMainWindow *mainPage;
};

#endif // LOGIN_H
