/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *passwordBox;
    QPushButton *loginButton;
    QLabel *label_2;
    QPushButton *guestButton;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(400, 300);
        layoutWidget = new QWidget(login);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 141, 261, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        usernameLabel = new QLabel(layoutWidget);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));

        horizontalLayout->addWidget(usernameLabel);

        usernameBox = new QLineEdit(layoutWidget);
        usernameBox->setObjectName(QString::fromUtf8("usernameBox"));

        horizontalLayout->addWidget(usernameBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        passwordBox = new QLineEdit(layoutWidget);
        passwordBox->setObjectName(QString::fromUtf8("passwordBox"));
        passwordBox->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordBox);


        verticalLayout->addLayout(horizontalLayout_2);

        loginButton = new QPushButton(layoutWidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));

        verticalLayout->addWidget(loginButton);

        label_2 = new QLabel(login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(-30, 40, 471, 81));
        label_2->setMinimumSize(QSize(171, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS Gothic")});
        label_2->setFont(font);
        label_2->setCursor(QCursor(Qt::ArrowCursor));
        label_2->setAcceptDrops(false);
        guestButton = new QPushButton(login);
        guestButton->setObjectName(QString::fromUtf8("guestButton"));
        guestButton->setGeometry(QRect(240, 270, 151, 23));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        usernameLabel->setText(QCoreApplication::translate("login", "<html><head/><body><p><span style=\" font-weight:600;\">Username</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("login", "<html><head/><body><p><span style=\" font-weight:600;\">Password</span></p></body></html>", nullptr));
        loginButton->setText(QCoreApplication::translate("login", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("login", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">2D Graphics Modeler Inc.</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">Created by: The Holy Pandas</span></p></body></html>", nullptr));
        guestButton->setText(QCoreApplication::translate("login", "Continue as a Guest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
