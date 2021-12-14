/********************************************************************************
** Form generated from reading UI file 'moveshape.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVESHAPE_H
#define UI_MOVESHAPE_H

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

class Ui_moveShape
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *title;
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *moveShape)
    {
        if (moveShape->objectName().isEmpty())
            moveShape->setObjectName(QString::fromUtf8("moveShape"));
        moveShape->resize(400, 300);
        buttonBox = new QDialogButtonBox(moveShape);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        title = new QLabel(moveShape);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(-10, 0, 201, 31));
        groupBox = new QGroupBox(moveShape);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 321, 191));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 50, 301, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 20, 301, 22));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_3 = new QLineEdit(widget1);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_2->addWidget(lineEdit_3);


        retranslateUi(moveShape);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, moveShape, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, moveShape, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(moveShape);
    } // setupUi

    void retranslateUi(QDialog *moveShape)
    {
        moveShape->setWindowTitle(QCoreApplication::translate("moveShape", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("moveShape", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Shape Move Tool</span></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("moveShape", "<html><head/><body><p>Point to move to (x,y)</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("moveShape", "Shape ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class moveShape: public Ui_moveShape {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVESHAPE_H
