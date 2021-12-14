/********************************************************************************
** Form generated from reading UI file 'contactus.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTUS_H
#define UI_CONTACTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_contactus
{
public:
    QLabel *logo;
    QLabel *title;
    QLabel *label;

    void setupUi(QDialog *contactus)
    {
        if (contactus->objectName().isEmpty())
            contactus->setObjectName(QString::fromUtf8("contactus"));
        contactus->resize(606, 501);
        logo = new QLabel(contactus);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(20, 110, 391, 361));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/images/logo")));
        title = new QLabel(contactus);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(10, 0, 451, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier New")});
        font.setPointSize(16);
        title->setFont(font);
        label = new QLabel(contactus);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 541, 31));

        retranslateUi(contactus);

        QMetaObject::connectSlotsByName(contactus);
    } // setupUi

    void retranslateUi(QDialog *contactus)
    {
        contactus->setWindowTitle(QCoreApplication::translate("contactus", "Dialog", nullptr));
        logo->setText(QString());
        title->setText(QCoreApplication::translate("contactus", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:600; font-style:italic;\">The Holy Pandas</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("contactus", "<html><head/><body><p><span style=\" font-size:16pt;\">Danny, Chris, Cameron, Riley, Ethan, Merviss, &amp; William</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class contactus: public Ui_contactus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTUS_H
