/********************************************************************************
** Form generated from reading UI file 'delshape.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELSHAPE_H
#define UI_DELSHAPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delShape
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *title;
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *delShape)
    {
        if (delShape->objectName().isEmpty())
            delShape->setObjectName(QString::fromUtf8("delShape"));
        delShape->resize(400, 300);
        buttonBox = new QDialogButtonBox(delShape);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        title = new QLabel(delShape);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(-20, 0, 221, 31));
        groupBox = new QGroupBox(delShape);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 311, 191));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 185, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(delShape);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, delShape, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, delShape, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(delShape);
    } // setupUi

    void retranslateUi(QDialog *delShape)
    {
        delShape->setWindowTitle(QCoreApplication::translate("delShape", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("delShape", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Shape Deletion Tool</span></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("delShape", "Shape ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delShape: public Ui_delShape {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELSHAPE_H
