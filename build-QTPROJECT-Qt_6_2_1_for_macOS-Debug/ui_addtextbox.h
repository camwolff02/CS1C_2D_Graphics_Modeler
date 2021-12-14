/********************************************************************************
** Form generated from reading UI file 'addtextbox.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTEXTBOX_H
#define UI_ADDTEXTBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addTextBox
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *shapeDimensions;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *point;
    QLineEdit *x;
    QLineEdit *y;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *length;
    QLineEdit *lengthBox;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *width;
    QLineEdit *widthBox;
    QLabel *title;
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QComboBox *comboBox;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QSpinBox *spinBox;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QComboBox *comboBox_3;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QComboBox *comboBox_4;
    QWidget *widget6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QComboBox *comboBox_5;

    void setupUi(QDialog *addTextBox)
    {
        if (addTextBox->objectName().isEmpty())
            addTextBox->setObjectName(QString::fromUtf8("addTextBox"));
        addTextBox->resize(500, 420);
        buttonBox = new QDialogButtonBox(addTextBox);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(150, 380, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        shapeDimensions = new QGroupBox(addTextBox);
        shapeDimensions->setObjectName(QString::fromUtf8("shapeDimensions"));
        shapeDimensions->setGeometry(QRect(20, 30, 351, 121));
        layoutWidget = new QWidget(shapeDimensions);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 328, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        point = new QLabel(layoutWidget);
        point->setObjectName(QString::fromUtf8("point"));

        horizontalLayout->addWidget(point);

        x = new QLineEdit(layoutWidget);
        x->setObjectName(QString::fromUtf8("x"));

        horizontalLayout->addWidget(x);

        y = new QLineEdit(layoutWidget);
        y->setObjectName(QString::fromUtf8("y"));

        horizontalLayout->addWidget(y);

        layoutWidget_2 = new QWidget(shapeDimensions);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 60, 174, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        length = new QLabel(layoutWidget_2);
        length->setObjectName(QString::fromUtf8("length"));

        horizontalLayout_2->addWidget(length);

        lengthBox = new QLineEdit(layoutWidget_2);
        lengthBox->setObjectName(QString::fromUtf8("lengthBox"));

        horizontalLayout_2->addWidget(lengthBox);

        layoutWidget_3 = new QWidget(shapeDimensions);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 90, 188, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        width = new QLabel(layoutWidget_3);
        width->setObjectName(QString::fromUtf8("width"));

        horizontalLayout_3->addWidget(width);

        widthBox = new QLineEdit(layoutWidget_3);
        widthBox->setObjectName(QString::fromUtf8("widthBox"));

        horizontalLayout_3->addWidget(widthBox);

        title = new QLabel(addTextBox);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(-20, 0, 201, 31));
        groupBox = new QGroupBox(addTextBox);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 150, 431, 231));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 371, 22));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_4->addWidget(lineEdit);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 50, 127, 22));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        comboBox = new QComboBox(widget1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_5->addWidget(comboBox);

        widget2 = new QWidget(groupBox);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 80, 149, 22));
        horizontalLayout_6 = new QHBoxLayout(widget2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        comboBox_2 = new QComboBox(widget2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_6->addWidget(comboBox_2);

        widget3 = new QWidget(groupBox);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(10, 110, 114, 22));
        horizontalLayout_7 = new QHBoxLayout(widget3);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);

        spinBox = new QSpinBox(widget3);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(-1);
        spinBox->setMaximum(50);

        horizontalLayout_7->addWidget(spinBox);

        widget4 = new QWidget(groupBox);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(10, 140, 157, 22));
        horizontalLayout_8 = new QHBoxLayout(widget4);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_8->addWidget(label_5);

        comboBox_3 = new QComboBox(widget4);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout_8->addWidget(comboBox_3);

        widget5 = new QWidget(groupBox);
        widget5->setObjectName(QString::fromUtf8("widget5"));
        widget5->setGeometry(QRect(10, 170, 151, 22));
        horizontalLayout_9 = new QHBoxLayout(widget5);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_9->addWidget(label_6);

        comboBox_4 = new QComboBox(widget5);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        horizontalLayout_9->addWidget(comboBox_4);

        widget6 = new QWidget(groupBox);
        widget6->setObjectName(QString::fromUtf8("widget6"));
        widget6->setGeometry(QRect(10, 200, 161, 22));
        horizontalLayout_10 = new QHBoxLayout(widget6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_10->addWidget(label_7);

        comboBox_5 = new QComboBox(widget6);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        horizontalLayout_10->addWidget(comboBox_5);


        retranslateUi(addTextBox);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addTextBox, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addTextBox, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addTextBox);
    } // setupUi

    void retranslateUi(QDialog *addTextBox)
    {
        addTextBox->setWindowTitle(QCoreApplication::translate("addTextBox", "Dialog", nullptr));
        shapeDimensions->setTitle(QCoreApplication::translate("addTextBox", "Shape Dimensions", nullptr));
        point->setText(QCoreApplication::translate("addTextBox", "Point(x,y)", nullptr));
        length->setText(QCoreApplication::translate("addTextBox", "Length", nullptr));
        width->setText(QCoreApplication::translate("addTextBox", "Width", nullptr));
        title->setText(QCoreApplication::translate("addTextBox", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Text Box Creator</span></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("addTextBox", "Text Properties", nullptr));
        label->setText(QCoreApplication::translate("addTextBox", "Text String", nullptr));
        lineEdit->setText(QString());
        label_2->setText(QCoreApplication::translate("addTextBox", "Text Color", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("addTextBox", "---", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("addTextBox", "White", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("addTextBox", "Black", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("addTextBox", "Red", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("addTextBox", "Green", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("addTextBox", "Blue", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("addTextBox", "Cyan", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("addTextBox", "Magenta", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("addTextBox", "Yellow", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("addTextBox", "Gray", nullptr));

        label_3->setText(QCoreApplication::translate("addTextBox", "Text Alignment", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("addTextBox", "---", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("addTextBox", "AlignLeft", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("addTextBox", "AlignRight", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("addTextBox", "AlignTop", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("addTextBox", "AlignBottom", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("addTextBox", "AlignCenter", nullptr));

        label_4->setText(QCoreApplication::translate("addTextBox", "Text Point Size", nullptr));
        label_5->setText(QCoreApplication::translate("addTextBox", "Text Font Family", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("addTextBox", "---", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("addTextBox", "Comic Sans MS", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("addTextBox", "Courier", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("addTextBox", "Helvetica", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("addTextBox", "Times", nullptr));

        label_6->setText(QCoreApplication::translate("addTextBox", "Text Font Style", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("addTextBox", "---", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("addTextBox", "StyleNormal", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("addTextBox", "StyleItalic", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("addTextBox", "StyleOblique", nullptr));

        label_7->setText(QCoreApplication::translate("addTextBox", "Text Font Weight", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("addTextBox", "---", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("addTextBox", "Thin", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("addTextBox", "Light", nullptr));
        comboBox_5->setItemText(3, QCoreApplication::translate("addTextBox", "Normal", nullptr));
        comboBox_5->setItemText(4, QCoreApplication::translate("addTextBox", "Bold", nullptr));

    } // retranslateUi

};

namespace Ui {
    class addTextBox: public Ui_addTextBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTEXTBOX_H
