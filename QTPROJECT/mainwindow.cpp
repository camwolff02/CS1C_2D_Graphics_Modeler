#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "globals.h"
#include "addLines.h"
#include "contactus.h"
#include "addrectangles.h"
#include "addelllipse.h"
#include "addtextbox.h"
#include "addpolyline.h"
#include "addpolygon.h"
#include "moveshape.h"
#include "delshape.h"

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

    Shape::resetShapeCount();

    close();    // will close the mainpage and reopen the login screen
}

void MainWindow::on_actionLine_triggered()
{
    if (isAdmin)
    {
        //ui->widget->getPainter() returns our global QPainter object!

        addLines addLine(ui->widget, ui->widget);
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
        addPolyline polyline(ui->widget, ui->widget);
        polyline.setModal(true);
        polyline.setWindowTitle("Add Polyline");
        polyline.exec();
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
        addPolygon polygon(ui->widget, ui->widget);
        polygon.setModal(true);
        polygon.setWindowTitle("Add Polygon");
        polygon.exec();
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
        addRectangles addRect(ui->widget, ui->widget);
        addRect.setModal(true);
        addRect.setWindowTitle("Add Rectangle");
        addRect.exec();
        // this is an admin only command, will add the code for adding rectangle here
        // currently displays rectangle ui
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
        addElllipse addellipse(ui->widget, ui->widget);
        addellipse.setModal(true);
        addellipse.setWindowTitle("Add Ellipse");
        addellipse.exec();
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
        addTextBox textbox(ui->widget, ui->widget);
        textbox.setModal(true);
        textbox.setWindowTitle("Add Text Box");
        textbox.exec();
        // this is an admin only command, will add the code for adding text box here
    }
    else
    {
        QMessageBox::warning(this, "Error", "Insufficient permissions");
    }
}

void MainWindow::on_actionTeam_Info_triggered()
{
    contactus contact;
    contact.setModal(true);
    contact.setWindowTitle("Team Info");
    contact.exec();
}


void MainWindow::on_actionOpen_triggered()
{
    QMessageBox::information(this, "Open File", "Opening file");
    // will add logic for opening .txt file or other file to the program to parse
}


void MainWindow::on_actionSave_triggered()
{
    QMessageBox::information(this, "Save File", "File has been saved");
    // will add logic for saving files for other runs
}


void MainWindow::on_actionQuit_triggered()
{
    qApp->exit();
}


void MainWindow::on_actionMove_Shape_triggered()
{
    if (isAdmin)
    {
        moveShape moveShape(this, ui->widget);
        moveShape.setModal(true);
        moveShape.setWindowTitle("Move Shape");
        moveShape.exec();
    }
    else
    {
        QMessageBox::warning(this, "Error", "Insufficient permissions");

    }

}


void MainWindow::on_actionDelete_Shape_triggered()
{
    if (isAdmin)
    {
        delShape delShape(this, ui->widget);
        delShape.setModal(true);
        delShape.setWindowTitle("Delete Shape");
        delShape.exec();
    }
    else
    {
        QMessageBox::warning(this, "Error", "Insufficient permissions");

    }

}

