#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "globals.h"
#include "addLines.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionLogout_triggered()
{
    // set the admin to false, because we don't yet know what the next login will be
    isAdmin = false;

    hide();    // will hide the mainpage and reopen the login screen
}

void MainWindow::on_actionLine_triggered()
{
    if (isAdmin)
    {
        addLines addLine;
        addLine.setModal(true);
        addLine.setWindowTitle("Add Line");
        addLine.exec();
        // this is an admin only command, will add the code for adding line here
        // currently displays line ui
    }
    else
    {
        QMessageBox::warning(this, "Error", "Insufficient permissions");
    }
}

void MainWindow::on_actionPolyline_triggered()
{
    if (isAdmin)
    {
        // this is an admin only command, will add the code for adding polyline here
    }
    else
    {
        QMessageBox::warning(this, "Error", "Insufficient permissions");
    }
}

void MainWindow::on_actionPolygon_triggered()
{
    if (isAdmin)
    {
        // this is an admin only command, will add the code for adding polygon here
    }
    else
    {
        QMessageBox::warning(this, "Error", "Insufficient permissions");
    }
}

void MainWindow::on_actionRectangle_triggered()
{
    if (isAdmin)
    {
        // this is an admin only command, will add the code for adding rectangle here
    }
    else
    {
        QMessageBox::warning(this, "Error", "Insufficient permissions");
    }
}

void MainWindow::on_actionEllipse_triggered()
{
    if (isAdmin)
    {
        // this is an admin only command, will add the code for adding ellipse here
    }
    else
    {
        QMessageBox::warning(this, "Error", "Insufficient permissions");
    }
}

void MainWindow::on_actionText_triggered()
{
    if (isAdmin)
    {
        // this is an admin only command, will add the code for adding text box here
    }
    else
    {
        QMessageBox::warning(this, "Error", "Insufficient permissions");
    }
}

