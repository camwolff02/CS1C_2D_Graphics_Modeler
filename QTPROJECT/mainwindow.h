#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    //void on_actionLine_triggered();

    //void on_actionOpen_toggled(bool arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H