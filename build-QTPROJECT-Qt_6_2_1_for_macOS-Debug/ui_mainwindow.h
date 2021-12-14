/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "canvas.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionLogin;
    QAction *actionLogout;
    QAction *actionLine;
    QAction *actionPolyline;
    QAction *actionPolygon;
    QAction *actionRectangle;
    QAction *actionEllipse;
    QAction *actionText;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionTeam_Info;
    QAction *actionMove_Shape;
    QAction *actionDelete_Shape;
    QWidget *centralwidget;
    Canvas *widget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuLogin;
    QMenu *menuAdd_Shape;
    QMenu *menuContact_Us;
    QMenu *menuShape_Options;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1050, 700);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/output-onlinepngtools.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionLogin = new QAction(MainWindow);
        actionLogin->setObjectName(QString::fromUtf8("actionLogin"));
        actionLogout = new QAction(MainWindow);
        actionLogout->setObjectName(QString::fromUtf8("actionLogout"));
        actionLine = new QAction(MainWindow);
        actionLine->setObjectName(QString::fromUtf8("actionLine"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/output-onlinepngtools (3).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLine->setIcon(icon1);
        actionPolyline = new QAction(MainWindow);
        actionPolyline->setObjectName(QString::fromUtf8("actionPolyline"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/output-onlinepngtools (4).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPolyline->setIcon(icon2);
        actionPolygon = new QAction(MainWindow);
        actionPolygon->setObjectName(QString::fromUtf8("actionPolygon"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/output-onlinepngtools (14).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPolygon->setIcon(icon3);
        actionRectangle = new QAction(MainWindow);
        actionRectangle->setObjectName(QString::fromUtf8("actionRectangle"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/output-onlinepngtools (12).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRectangle->setIcon(icon4);
        actionEllipse = new QAction(MainWindow);
        actionEllipse->setObjectName(QString::fromUtf8("actionEllipse"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/output-onlinepngtools (9).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEllipse->setIcon(icon5);
        actionText = new QAction(MainWindow);
        actionText->setObjectName(QString::fromUtf8("actionText"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/output-onlinepngtools (11).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionText->setIcon(icon6);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/output-onlinepngtools (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon7);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionTeam_Info = new QAction(MainWindow);
        actionTeam_Info->setObjectName(QString::fromUtf8("actionTeam_Info"));
        actionMove_Shape = new QAction(MainWindow);
        actionMove_Shape->setObjectName(QString::fromUtf8("actionMove_Shape"));
        actionDelete_Shape = new QAction(MainWindow);
        actionDelete_Shape->setObjectName(QString::fromUtf8("actionDelete_Shape"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new Canvas(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 1000, 500));
        widget->setMinimumSize(QSize(1000, 0));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1050, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuLogin = new QMenu(menubar);
        menuLogin->setObjectName(QString::fromUtf8("menuLogin"));
        menuAdd_Shape = new QMenu(menubar);
        menuAdd_Shape->setObjectName(QString::fromUtf8("menuAdd_Shape"));
        menuContact_Us = new QMenu(menubar);
        menuContact_Us->setObjectName(QString::fromUtf8("menuContact_Us"));
        menuShape_Options = new QMenu(menubar);
        menuShape_Options->setObjectName(QString::fromUtf8("menuShape_Options"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuLogin->menuAction());
        menubar->addAction(menuAdd_Shape->menuAction());
        menubar->addAction(menuShape_Options->menuAction());
        menubar->addAction(menuContact_Us->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuLogin->addAction(actionLogout);
        menuAdd_Shape->addAction(actionLine);
        menuAdd_Shape->addAction(actionPolyline);
        menuAdd_Shape->addAction(actionPolygon);
        menuAdd_Shape->addAction(actionRectangle);
        menuAdd_Shape->addAction(actionEllipse);
        menuAdd_Shape->addAction(actionText);
        menuContact_Us->addAction(actionTeam_Info);
        menuShape_Options->addAction(actionMove_Shape);
        menuShape_Options->addAction(actionDelete_Shape);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addSeparator();
        toolBar->addAction(actionLine);
        toolBar->addAction(actionPolyline);
        toolBar->addAction(actionPolygon);
        toolBar->addAction(actionRectangle);
        toolBar->addAction(actionEllipse);
        toolBar->addAction(actionText);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        actionLogout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        actionLine->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
        actionPolyline->setText(QCoreApplication::translate("MainWindow", "Polyline", nullptr));
        actionPolygon->setText(QCoreApplication::translate("MainWindow", "Polygon", nullptr));
        actionRectangle->setText(QCoreApplication::translate("MainWindow", "Rectangle", nullptr));
        actionEllipse->setText(QCoreApplication::translate("MainWindow", "Ellipse", nullptr));
        actionText->setText(QCoreApplication::translate("MainWindow", "Text", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionTeam_Info->setText(QCoreApplication::translate("MainWindow", "Team Info", nullptr));
        actionMove_Shape->setText(QCoreApplication::translate("MainWindow", "Move Shape", nullptr));
        actionDelete_Shape->setText(QCoreApplication::translate("MainWindow", "Delete Shape", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuLogin->setTitle(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        menuAdd_Shape->setTitle(QCoreApplication::translate("MainWindow", "Add Shape", nullptr));
        menuContact_Us->setTitle(QCoreApplication::translate("MainWindow", "Contact Us", nullptr));
        menuShape_Options->setTitle(QCoreApplication::translate("MainWindow", "Shape Options", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
