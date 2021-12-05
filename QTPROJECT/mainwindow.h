#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "login.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    virtual ~MainWindow();

private slots:
    void on_actionLogout_triggered();

    void on_actionLine_triggered();

    void on_actionPolyline_triggered();

    void on_actionPolygon_triggered();

    void on_actionRectangle_triggered();

    void on_actionEllipse_triggered();

    void on_actionText_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
