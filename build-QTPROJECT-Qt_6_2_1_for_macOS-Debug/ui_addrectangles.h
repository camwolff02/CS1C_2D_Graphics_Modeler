/********************************************************************************
** Form generated from reading UI file 'addrectangles.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRECTANGLES_H
#define UI_ADDRECTANGLES_H

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

class Ui_addRectangles
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *title;
    QGroupBox *shapeDimensions;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *point;
    QLineEdit *x;
    QLineEdit *y;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *length;
    QLineEdit *lengthBox;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *width;
    QLineEdit *widthBox;
    QGroupBox *penProperties;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *penColor;
    QComboBox *penColorBox;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *penWidth;
    QSpinBox *penWidthBox;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *penStyle;
    QComboBox *penStyleBox;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *penCapStyle;
    QComboBox *comboBox;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *penJoinStyle;
    QComboBox *comboBox_2;
    QGroupBox *brushProperties;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *brushColor;
    QComboBox *comboBox_3;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *brushStyle;
    QComboBox *comboBox_4;

    void setupUi(QDialog *addRectangles)
    {
        if (addRectangles->objectName().isEmpty())
            addRectangles->setObjectName(QString::fromUtf8("addRectangles"));
        addRectangles->resize(500, 420);
        buttonBox = new QDialogButtonBox(addRectangles);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(150, 380, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        title = new QLabel(addRectangles);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(-10, 0, 201, 31));
        shapeDimensions = new QGroupBox(addRectangles);
        shapeDimensions->setObjectName(QString::fromUtf8("shapeDimensions"));
        shapeDimensions->setGeometry(QRect(20, 30, 351, 121));
        layoutWidget = new QWidget(shapeDimensions);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 328, 23));
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

        layoutWidget1 = new QWidget(shapeDimensions);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 60, 174, 23));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        length = new QLabel(layoutWidget1);
        length->setObjectName(QString::fromUtf8("length"));

        horizontalLayout_2->addWidget(length);

        lengthBox = new QLineEdit(layoutWidget1);
        lengthBox->setObjectName(QString::fromUtf8("lengthBox"));

        horizontalLayout_2->addWidget(lengthBox);

        layoutWidget2 = new QWidget(shapeDimensions);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 90, 188, 23));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        width = new QLabel(layoutWidget2);
        width->setObjectName(QString::fromUtf8("width"));

        horizontalLayout_3->addWidget(width);

        widthBox = new QLineEdit(layoutWidget2);
        widthBox->setObjectName(QString::fromUtf8("widthBox"));

        horizontalLayout_3->addWidget(widthBox);

        penProperties = new QGroupBox(addRectangles);
        penProperties->setObjectName(QString::fromUtf8("penProperties"));
        penProperties->setGeometry(QRect(20, 150, 351, 171));
        layoutWidget3 = new QWidget(penProperties);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 20, 170, 32));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        penColor = new QLabel(layoutWidget3);
        penColor->setObjectName(QString::fromUtf8("penColor"));

        horizontalLayout_4->addWidget(penColor);

        penColorBox = new QComboBox(layoutWidget3);
        penColorBox->addItem(QString());
        penColorBox->addItem(QString());
        penColorBox->addItem(QString());
        penColorBox->addItem(QString());
        penColorBox->addItem(QString());
        penColorBox->addItem(QString());
        penColorBox->addItem(QString());
        penColorBox->addItem(QString());
        penColorBox->addItem(QString());
        penColorBox->addItem(QString());
        penColorBox->setObjectName(QString::fromUtf8("penColorBox"));

        horizontalLayout_4->addWidget(penColorBox);

        layoutWidget4 = new QWidget(penProperties);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 50, 107, 23));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        penWidth = new QLabel(layoutWidget4);
        penWidth->setObjectName(QString::fromUtf8("penWidth"));

        horizontalLayout_5->addWidget(penWidth);

        penWidthBox = new QSpinBox(layoutWidget4);
        penWidthBox->setObjectName(QString::fromUtf8("penWidthBox"));
        penWidthBox->setMaximum(20);

        horizontalLayout_5->addWidget(penWidthBox);

        layoutWidget5 = new QWidget(penProperties);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 80, 213, 32));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        penStyle = new QLabel(layoutWidget5);
        penStyle->setObjectName(QString::fromUtf8("penStyle"));

        horizontalLayout_6->addWidget(penStyle);

        penStyleBox = new QComboBox(layoutWidget5);
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->setObjectName(QString::fromUtf8("penStyleBox"));

        horizontalLayout_6->addWidget(penStyleBox);

        layoutWidget6 = new QWidget(penProperties);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 110, 209, 32));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        penCapStyle = new QLabel(layoutWidget6);
        penCapStyle->setObjectName(QString::fromUtf8("penCapStyle"));

        horizontalLayout_7->addWidget(penCapStyle);

        comboBox = new QComboBox(layoutWidget6);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_7->addWidget(comboBox);

        layoutWidget7 = new QWidget(penProperties);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(10, 140, 207, 32));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        penJoinStyle = new QLabel(layoutWidget7);
        penJoinStyle->setObjectName(QString::fromUtf8("penJoinStyle"));

        horizontalLayout_8->addWidget(penJoinStyle);

        comboBox_2 = new QComboBox(layoutWidget7);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_8->addWidget(comboBox_2);

        brushProperties = new QGroupBox(addRectangles);
        brushProperties->setObjectName(QString::fromUtf8("brushProperties"));
        brushProperties->setGeometry(QRect(20, 320, 311, 80));
        layoutWidget8 = new QWidget(brushProperties);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(10, 20, 182, 32));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        brushColor = new QLabel(layoutWidget8);
        brushColor->setObjectName(QString::fromUtf8("brushColor"));

        horizontalLayout_9->addWidget(brushColor);

        comboBox_3 = new QComboBox(layoutWidget8);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout_9->addWidget(comboBox_3);

        layoutWidget9 = new QWidget(brushProperties);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(10, 50, 201, 32));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        brushStyle = new QLabel(layoutWidget9);
        brushStyle->setObjectName(QString::fromUtf8("brushStyle"));

        horizontalLayout_10->addWidget(brushStyle);

        comboBox_4 = new QComboBox(layoutWidget9);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        horizontalLayout_10->addWidget(comboBox_4);


        retranslateUi(addRectangles);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addRectangles, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addRectangles, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addRectangles);
    } // setupUi

    void retranslateUi(QDialog *addRectangles)
    {
        addRectangles->setWindowTitle(QCoreApplication::translate("addRectangles", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("addRectangles", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Rectangle Creator</span></p></body></html>", nullptr));
        shapeDimensions->setTitle(QCoreApplication::translate("addRectangles", "Shape Dimensions", nullptr));
        point->setText(QCoreApplication::translate("addRectangles", "Point(x,y)", nullptr));
        length->setText(QCoreApplication::translate("addRectangles", "Length", nullptr));
        width->setText(QCoreApplication::translate("addRectangles", "Width", nullptr));
        penProperties->setTitle(QCoreApplication::translate("addRectangles", "Pen Properties", nullptr));
        penColor->setText(QCoreApplication::translate("addRectangles", "Pen Color", nullptr));
        penColorBox->setItemText(0, QCoreApplication::translate("addRectangles", "---", nullptr));
        penColorBox->setItemText(1, QCoreApplication::translate("addRectangles", "White", nullptr));
        penColorBox->setItemText(2, QCoreApplication::translate("addRectangles", "Black", nullptr));
        penColorBox->setItemText(3, QCoreApplication::translate("addRectangles", "Red", nullptr));
        penColorBox->setItemText(4, QCoreApplication::translate("addRectangles", "Green", nullptr));
        penColorBox->setItemText(5, QCoreApplication::translate("addRectangles", "Blue", nullptr));
        penColorBox->setItemText(6, QCoreApplication::translate("addRectangles", "Cyan", nullptr));
        penColorBox->setItemText(7, QCoreApplication::translate("addRectangles", "Magenta", nullptr));
        penColorBox->setItemText(8, QCoreApplication::translate("addRectangles", "Yellow", nullptr));
        penColorBox->setItemText(9, QCoreApplication::translate("addRectangles", "Gray", nullptr));

        penWidth->setText(QCoreApplication::translate("addRectangles", "Pen Width", nullptr));
        penStyle->setText(QCoreApplication::translate("addRectangles", "Pen Style", nullptr));
        penStyleBox->setItemText(0, QCoreApplication::translate("addRectangles", "---", nullptr));
        penStyleBox->setItemText(1, QCoreApplication::translate("addRectangles", "NoPen", nullptr));
        penStyleBox->setItemText(2, QCoreApplication::translate("addRectangles", "SolidLine", nullptr));
        penStyleBox->setItemText(3, QCoreApplication::translate("addRectangles", "DashLine", nullptr));
        penStyleBox->setItemText(4, QCoreApplication::translate("addRectangles", "DotLine", nullptr));
        penStyleBox->setItemText(5, QCoreApplication::translate("addRectangles", "DashDotLine", nullptr));
        penStyleBox->setItemText(6, QCoreApplication::translate("addRectangles", "DashDotDotLine", nullptr));

        penCapStyle->setText(QCoreApplication::translate("addRectangles", "Pen Cap Style", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("addRectangles", "---", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("addRectangles", "FlatCap", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("addRectangles", "SquareCap", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("addRectangles", "RoundCap", nullptr));

        penJoinStyle->setText(QCoreApplication::translate("addRectangles", "Pen Join Style", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("addRectangles", "---", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("addRectangles", "MiterJoin", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("addRectangles", "BevelJoin", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("addRectangles", "RoundJoin", nullptr));

        brushProperties->setTitle(QCoreApplication::translate("addRectangles", "Brush Properties", nullptr));
        brushColor->setText(QCoreApplication::translate("addRectangles", "Brush Color", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("addRectangles", "---", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("addRectangles", "White", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("addRectangles", "Black", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("addRectangles", "Red", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("addRectangles", "Green", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("addRectangles", "Blue", nullptr));
        comboBox_3->setItemText(6, QCoreApplication::translate("addRectangles", "Cyan", nullptr));
        comboBox_3->setItemText(7, QCoreApplication::translate("addRectangles", "Magenta", nullptr));
        comboBox_3->setItemText(8, QCoreApplication::translate("addRectangles", "Yellow", nullptr));
        comboBox_3->setItemText(9, QCoreApplication::translate("addRectangles", "Gray", nullptr));

        brushStyle->setText(QCoreApplication::translate("addRectangles", "Brush Style", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("addRectangles", "---", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("addRectangles", "SolidPattern", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("addRectangles", "HorPattern", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("addRectangles", "VerPattern", nullptr));
        comboBox_4->setItemText(4, QCoreApplication::translate("addRectangles", "NoBrush", nullptr));

    } // retranslateUi

};

namespace Ui {
    class addRectangles: public Ui_addRectangles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRECTANGLES_H
