/********************************************************************************
** Form generated from reading UI file 'addelllipse.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDELLLIPSE_H
#define UI_ADDELLLIPSE_H

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

class Ui_addElllipse
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
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *length;
    QLineEdit *lengthBox;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *width;
    QLineEdit *widthBox;
    QGroupBox *brushProperties;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *brushColor;
    QComboBox *brushColorBox;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *brushStyle;
    QComboBox *brushStyleBox;
    QGroupBox *penProperties;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *penColor;
    QComboBox *penColorBox;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *penWidth;
    QSpinBox *penWidthBox;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *penStyle;
    QComboBox *penStyleBox;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_7;
    QLabel *penCapStyle;
    QComboBox *penCapStyleBox;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout_8;
    QLabel *penJoinStyle;
    QComboBox *penJoinStyleBox;

    void setupUi(QDialog *addElllipse)
    {
        if (addElllipse->objectName().isEmpty())
            addElllipse->setObjectName(QString::fromUtf8("addElllipse"));
        addElllipse->resize(500, 420);
        buttonBox = new QDialogButtonBox(addElllipse);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(150, 380, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        title = new QLabel(addElllipse);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(0, 0, 201, 31));
        shapeDimensions = new QGroupBox(addElllipse);
        shapeDimensions->setObjectName(QString::fromUtf8("shapeDimensions"));
        shapeDimensions->setGeometry(QRect(30, 30, 351, 121));
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

        brushProperties = new QGroupBox(addElllipse);
        brushProperties->setObjectName(QString::fromUtf8("brushProperties"));
        brushProperties->setGeometry(QRect(30, 320, 301, 80));
        layoutWidget_4 = new QWidget(brushProperties);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 20, 132, 22));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        brushColor = new QLabel(layoutWidget_4);
        brushColor->setObjectName(QString::fromUtf8("brushColor"));

        horizontalLayout_9->addWidget(brushColor);

        brushColorBox = new QComboBox(layoutWidget_4);
        brushColorBox->addItem(QString());
        brushColorBox->addItem(QString());
        brushColorBox->addItem(QString());
        brushColorBox->addItem(QString());
        brushColorBox->addItem(QString());
        brushColorBox->addItem(QString());
        brushColorBox->addItem(QString());
        brushColorBox->addItem(QString());
        brushColorBox->addItem(QString());
        brushColorBox->addItem(QString());
        brushColorBox->setObjectName(QString::fromUtf8("brushColorBox"));

        horizontalLayout_9->addWidget(brushColorBox);

        layoutWidget_5 = new QWidget(brushProperties);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 50, 146, 22));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        brushStyle = new QLabel(layoutWidget_5);
        brushStyle->setObjectName(QString::fromUtf8("brushStyle"));

        horizontalLayout_10->addWidget(brushStyle);

        brushStyleBox = new QComboBox(layoutWidget_5);
        brushStyleBox->addItem(QString());
        brushStyleBox->addItem(QString());
        brushStyleBox->addItem(QString());
        brushStyleBox->addItem(QString());
        brushStyleBox->addItem(QString());
        brushStyleBox->setObjectName(QString::fromUtf8("brushStyleBox"));

        horizontalLayout_10->addWidget(brushStyleBox);

        penProperties = new QGroupBox(addElllipse);
        penProperties->setObjectName(QString::fromUtf8("penProperties"));
        penProperties->setGeometry(QRect(30, 150, 351, 171));
        layoutWidget_6 = new QWidget(penProperties);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(10, 20, 123, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        penColor = new QLabel(layoutWidget_6);
        penColor->setObjectName(QString::fromUtf8("penColor"));

        horizontalLayout_4->addWidget(penColor);

        penColorBox = new QComboBox(layoutWidget_6);
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

        layoutWidget_7 = new QWidget(penProperties);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(10, 50, 90, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        penWidth = new QLabel(layoutWidget_7);
        penWidth->setObjectName(QString::fromUtf8("penWidth"));

        horizontalLayout_5->addWidget(penWidth);

        penWidthBox = new QSpinBox(layoutWidget_7);
        penWidthBox->setObjectName(QString::fromUtf8("penWidthBox"));
        penWidthBox->setMaximum(20);

        horizontalLayout_5->addWidget(penWidthBox);

        layoutWidget_8 = new QWidget(penProperties);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(10, 80, 156, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        penStyle = new QLabel(layoutWidget_8);
        penStyle->setObjectName(QString::fromUtf8("penStyle"));

        horizontalLayout_6->addWidget(penStyle);

        penStyleBox = new QComboBox(layoutWidget_8);
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->setObjectName(QString::fromUtf8("penStyleBox"));

        horizontalLayout_6->addWidget(penStyleBox);

        layoutWidget_9 = new QWidget(penProperties);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(10, 110, 154, 22));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        penCapStyle = new QLabel(layoutWidget_9);
        penCapStyle->setObjectName(QString::fromUtf8("penCapStyle"));

        horizontalLayout_7->addWidget(penCapStyle);

        penCapStyleBox = new QComboBox(layoutWidget_9);
        penCapStyleBox->addItem(QString());
        penCapStyleBox->addItem(QString());
        penCapStyleBox->addItem(QString());
        penCapStyleBox->addItem(QString());
        penCapStyleBox->setObjectName(QString::fromUtf8("penCapStyleBox"));

        horizontalLayout_7->addWidget(penCapStyleBox);

        layoutWidget_10 = new QWidget(penProperties);
        layoutWidget_10->setObjectName(QString::fromUtf8("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(10, 140, 151, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_10);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        penJoinStyle = new QLabel(layoutWidget_10);
        penJoinStyle->setObjectName(QString::fromUtf8("penJoinStyle"));

        horizontalLayout_8->addWidget(penJoinStyle);

        penJoinStyleBox = new QComboBox(layoutWidget_10);
        penJoinStyleBox->addItem(QString());
        penJoinStyleBox->addItem(QString());
        penJoinStyleBox->addItem(QString());
        penJoinStyleBox->addItem(QString());
        penJoinStyleBox->setObjectName(QString::fromUtf8("penJoinStyleBox"));

        horizontalLayout_8->addWidget(penJoinStyleBox);


        retranslateUi(addElllipse);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addElllipse, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addElllipse, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addElllipse);
    } // setupUi

    void retranslateUi(QDialog *addElllipse)
    {
        addElllipse->setWindowTitle(QCoreApplication::translate("addElllipse", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("addElllipse", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Ellipse Creator</span></p></body></html>", nullptr));
        shapeDimensions->setTitle(QCoreApplication::translate("addElllipse", "Shape Dimensions", nullptr));
        point->setText(QCoreApplication::translate("addElllipse", "Point(x,y)", nullptr));
        length->setText(QCoreApplication::translate("addElllipse", "Semi Major Axis", nullptr));
        width->setText(QCoreApplication::translate("addElllipse", "Semi Minor Axis", nullptr));
        brushProperties->setTitle(QCoreApplication::translate("addElllipse", "Brush Properties", nullptr));
        brushColor->setText(QCoreApplication::translate("addElllipse", "Brush Color", nullptr));
        brushColorBox->setItemText(0, QCoreApplication::translate("addElllipse", "---", nullptr));
        brushColorBox->setItemText(1, QCoreApplication::translate("addElllipse", "White", nullptr));
        brushColorBox->setItemText(2, QCoreApplication::translate("addElllipse", "Black", nullptr));
        brushColorBox->setItemText(3, QCoreApplication::translate("addElllipse", "Red", nullptr));
        brushColorBox->setItemText(4, QCoreApplication::translate("addElllipse", "Green", nullptr));
        brushColorBox->setItemText(5, QCoreApplication::translate("addElllipse", "Blue", nullptr));
        brushColorBox->setItemText(6, QCoreApplication::translate("addElllipse", "Cyan", nullptr));
        brushColorBox->setItemText(7, QCoreApplication::translate("addElllipse", "Magenta", nullptr));
        brushColorBox->setItemText(8, QCoreApplication::translate("addElllipse", "Yellow", nullptr));
        brushColorBox->setItemText(9, QCoreApplication::translate("addElllipse", "Gray", nullptr));

        brushStyle->setText(QCoreApplication::translate("addElllipse", "Brush Style", nullptr));
        brushStyleBox->setItemText(0, QCoreApplication::translate("addElllipse", "---", nullptr));
        brushStyleBox->setItemText(1, QCoreApplication::translate("addElllipse", "SolidPattern", nullptr));
        brushStyleBox->setItemText(2, QCoreApplication::translate("addElllipse", "HorPattern", nullptr));
        brushStyleBox->setItemText(3, QCoreApplication::translate("addElllipse", "VerPattern", nullptr));
        brushStyleBox->setItemText(4, QCoreApplication::translate("addElllipse", "NoBrush", nullptr));

        penProperties->setTitle(QCoreApplication::translate("addElllipse", "Pen Properties", nullptr));
        penColor->setText(QCoreApplication::translate("addElllipse", "Pen Color", nullptr));
        penColorBox->setItemText(0, QCoreApplication::translate("addElllipse", "---", nullptr));
        penColorBox->setItemText(1, QCoreApplication::translate("addElllipse", "White", nullptr));
        penColorBox->setItemText(2, QCoreApplication::translate("addElllipse", "Black", nullptr));
        penColorBox->setItemText(3, QCoreApplication::translate("addElllipse", "Red", nullptr));
        penColorBox->setItemText(4, QCoreApplication::translate("addElllipse", "Green", nullptr));
        penColorBox->setItemText(5, QCoreApplication::translate("addElllipse", "Blue", nullptr));
        penColorBox->setItemText(6, QCoreApplication::translate("addElllipse", "Cyan", nullptr));
        penColorBox->setItemText(7, QCoreApplication::translate("addElllipse", "Magenta", nullptr));
        penColorBox->setItemText(8, QCoreApplication::translate("addElllipse", "Yellow", nullptr));
        penColorBox->setItemText(9, QCoreApplication::translate("addElllipse", "Gray", nullptr));

        penWidth->setText(QCoreApplication::translate("addElllipse", "Pen Width", nullptr));
        penStyle->setText(QCoreApplication::translate("addElllipse", "Pen Style", nullptr));
        penStyleBox->setItemText(0, QCoreApplication::translate("addElllipse", "---", nullptr));
        penStyleBox->setItemText(1, QCoreApplication::translate("addElllipse", "NoPen", nullptr));
        penStyleBox->setItemText(2, QCoreApplication::translate("addElllipse", "SolidLine", nullptr));
        penStyleBox->setItemText(3, QCoreApplication::translate("addElllipse", "DashLine", nullptr));
        penStyleBox->setItemText(4, QCoreApplication::translate("addElllipse", "DotLine", nullptr));
        penStyleBox->setItemText(5, QCoreApplication::translate("addElllipse", "DashDotLine", nullptr));
        penStyleBox->setItemText(6, QCoreApplication::translate("addElllipse", "DashDotDotLine", nullptr));

        penCapStyle->setText(QCoreApplication::translate("addElllipse", "Pen Cap Style", nullptr));
        penCapStyleBox->setItemText(0, QCoreApplication::translate("addElllipse", "---", nullptr));
        penCapStyleBox->setItemText(1, QCoreApplication::translate("addElllipse", "FlatCap", nullptr));
        penCapStyleBox->setItemText(2, QCoreApplication::translate("addElllipse", "SquareCap", nullptr));
        penCapStyleBox->setItemText(3, QCoreApplication::translate("addElllipse", "RoundCap", nullptr));

        penJoinStyle->setText(QCoreApplication::translate("addElllipse", "Pen Join Style", nullptr));
        penJoinStyleBox->setItemText(0, QCoreApplication::translate("addElllipse", "---", nullptr));
        penJoinStyleBox->setItemText(1, QCoreApplication::translate("addElllipse", "MiterJoin", nullptr));
        penJoinStyleBox->setItemText(2, QCoreApplication::translate("addElllipse", "BevelJoin", nullptr));
        penJoinStyleBox->setItemText(3, QCoreApplication::translate("addElllipse", "RoundJoin", nullptr));

    } // retranslateUi

};

namespace Ui {
    class addElllipse: public Ui_addElllipse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDELLLIPSE_H
