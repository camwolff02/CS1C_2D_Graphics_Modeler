/********************************************************************************
** Form generated from reading UI file 'addpolyline.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPOLYLINE_H
#define UI_ADDPOLYLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addPolyline
{
public:
    QLabel *title;
    QGroupBox *shapeDimensions;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *point;
    QLineEdit *x_1;
    QLineEdit *y_1;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *point_2;
    QLineEdit *x_2;
    QLineEdit *y_2;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *point_3;
    QLineEdit *x_3;
    QLineEdit *y_3;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *point_4;
    QLineEdit *x_4;
    QLineEdit *y_4;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *point_5;
    QLineEdit *x_5;
    QLineEdit *y_5;
    QGroupBox *penProperties;
    QWidget *layoutWidget;
    QHBoxLayout *color;
    QLabel *penColor;
    QComboBox *penColorBox;
    QWidget *layoutWidget1;
    QHBoxLayout *style;
    QLabel *penStyle;
    QComboBox *penStyleBox;
    QWidget *layoutWidget2;
    QHBoxLayout *capstyle;
    QLabel *penCapStyle;
    QComboBox *penCapStyleBox;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLabel *penJoinStyle;
    QComboBox *penJoinStyleBox;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *penWidth;
    QSpinBox *penWidthBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *addPolyline)
    {
        if (addPolyline->objectName().isEmpty())
            addPolyline->setObjectName(QString::fromUtf8("addPolyline"));
        addPolyline->resize(500, 420);
        title = new QLabel(addPolyline);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(-30, 0, 201, 31));
        shapeDimensions = new QGroupBox(addPolyline);
        shapeDimensions->setObjectName(QString::fromUtf8("shapeDimensions"));
        shapeDimensions->setGeometry(QRect(20, 30, 371, 181));
        layoutWidget_2 = new QWidget(shapeDimensions);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 30, 328, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        point = new QLabel(layoutWidget_2);
        point->setObjectName(QString::fromUtf8("point"));

        horizontalLayout_3->addWidget(point);

        x_1 = new QLineEdit(layoutWidget_2);
        x_1->setObjectName(QString::fromUtf8("x_1"));

        horizontalLayout_3->addWidget(x_1);

        y_1 = new QLineEdit(layoutWidget_2);
        y_1->setObjectName(QString::fromUtf8("y_1"));

        horizontalLayout_3->addWidget(y_1);

        layoutWidget_3 = new QWidget(shapeDimensions);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 60, 328, 26));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        point_2 = new QLabel(layoutWidget_3);
        point_2->setObjectName(QString::fromUtf8("point_2"));

        horizontalLayout_4->addWidget(point_2);

        x_2 = new QLineEdit(layoutWidget_3);
        x_2->setObjectName(QString::fromUtf8("x_2"));

        horizontalLayout_4->addWidget(x_2);

        y_2 = new QLineEdit(layoutWidget_3);
        y_2->setObjectName(QString::fromUtf8("y_2"));

        horizontalLayout_4->addWidget(y_2);

        layoutWidget_4 = new QWidget(shapeDimensions);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 90, 328, 26));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        point_3 = new QLabel(layoutWidget_4);
        point_3->setObjectName(QString::fromUtf8("point_3"));

        horizontalLayout_5->addWidget(point_3);

        x_3 = new QLineEdit(layoutWidget_4);
        x_3->setObjectName(QString::fromUtf8("x_3"));

        horizontalLayout_5->addWidget(x_3);

        y_3 = new QLineEdit(layoutWidget_4);
        y_3->setObjectName(QString::fromUtf8("y_3"));

        horizontalLayout_5->addWidget(y_3);

        layoutWidget_5 = new QWidget(shapeDimensions);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 120, 328, 26));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        point_4 = new QLabel(layoutWidget_5);
        point_4->setObjectName(QString::fromUtf8("point_4"));

        horizontalLayout_6->addWidget(point_4);

        x_4 = new QLineEdit(layoutWidget_5);
        x_4->setObjectName(QString::fromUtf8("x_4"));

        horizontalLayout_6->addWidget(x_4);

        y_4 = new QLineEdit(layoutWidget_5);
        y_4->setObjectName(QString::fromUtf8("y_4"));

        horizontalLayout_6->addWidget(y_4);

        layoutWidget_6 = new QWidget(shapeDimensions);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(10, 150, 328, 26));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        point_5 = new QLabel(layoutWidget_6);
        point_5->setObjectName(QString::fromUtf8("point_5"));

        horizontalLayout_7->addWidget(point_5);

        x_5 = new QLineEdit(layoutWidget_6);
        x_5->setObjectName(QString::fromUtf8("x_5"));

        horizontalLayout_7->addWidget(x_5);

        y_5 = new QLineEdit(layoutWidget_6);
        y_5->setObjectName(QString::fromUtf8("y_5"));

        horizontalLayout_7->addWidget(y_5);

        penProperties = new QGroupBox(addPolyline);
        penProperties->setObjectName(QString::fromUtf8("penProperties"));
        penProperties->setGeometry(QRect(20, 230, 291, 171));
        layoutWidget = new QWidget(penProperties);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 136, 26));
        color = new QHBoxLayout(layoutWidget);
        color->setObjectName(QString::fromUtf8("color"));
        color->setContentsMargins(0, 0, 0, 0);
        penColor = new QLabel(layoutWidget);
        penColor->setObjectName(QString::fromUtf8("penColor"));

        color->addWidget(penColor);

        penColorBox = new QComboBox(layoutWidget);
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

        color->addWidget(penColorBox);

        layoutWidget1 = new QWidget(penProperties);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 80, 171, 26));
        style = new QHBoxLayout(layoutWidget1);
        style->setObjectName(QString::fromUtf8("style"));
        style->setContentsMargins(0, 0, 0, 0);
        penStyle = new QLabel(layoutWidget1);
        penStyle->setObjectName(QString::fromUtf8("penStyle"));

        style->addWidget(penStyle);

        penStyleBox = new QComboBox(layoutWidget1);
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->setObjectName(QString::fromUtf8("penStyleBox"));

        style->addWidget(penStyleBox);

        layoutWidget2 = new QWidget(penProperties);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 110, 166, 26));
        capstyle = new QHBoxLayout(layoutWidget2);
        capstyle->setObjectName(QString::fromUtf8("capstyle"));
        capstyle->setContentsMargins(0, 0, 0, 0);
        penCapStyle = new QLabel(layoutWidget2);
        penCapStyle->setObjectName(QString::fromUtf8("penCapStyle"));

        capstyle->addWidget(penCapStyle);

        penCapStyleBox = new QComboBox(layoutWidget2);
        penCapStyleBox->addItem(QString());
        penCapStyleBox->addItem(QString());
        penCapStyleBox->addItem(QString());
        penCapStyleBox->addItem(QString());
        penCapStyleBox->setObjectName(QString::fromUtf8("penCapStyleBox"));

        capstyle->addWidget(penCapStyleBox);

        layoutWidget3 = new QWidget(penProperties);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 140, 165, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        penJoinStyle = new QLabel(layoutWidget3);
        penJoinStyle->setObjectName(QString::fromUtf8("penJoinStyle"));

        horizontalLayout->addWidget(penJoinStyle);

        penJoinStyleBox = new QComboBox(layoutWidget3);
        penJoinStyleBox->addItem(QString());
        penJoinStyleBox->addItem(QString());
        penJoinStyleBox->addItem(QString());
        penJoinStyleBox->addItem(QString());
        penJoinStyleBox->setObjectName(QString::fromUtf8("penJoinStyleBox"));

        horizontalLayout->addWidget(penJoinStyleBox);

        layoutWidget4 = new QWidget(penProperties);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 50, 105, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        penWidth = new QLabel(layoutWidget4);
        penWidth->setObjectName(QString::fromUtf8("penWidth"));

        horizontalLayout_2->addWidget(penWidth);

        penWidthBox = new QSpinBox(layoutWidget4);
        penWidthBox->setObjectName(QString::fromUtf8("penWidthBox"));
        penWidthBox->setMinimumSize(QSize(42, 22));
        penWidthBox->setMaximum(20);

        horizontalLayout_2->addWidget(penWidthBox);

        widget = new QWidget(addPolyline);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(330, 390, 158, 25));
        horizontalLayout_8 = new QHBoxLayout(widget);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_8->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_8->addWidget(pushButton_2);


        retranslateUi(addPolyline);

        QMetaObject::connectSlotsByName(addPolyline);
    } // setupUi

    void retranslateUi(QDialog *addPolyline)
    {
        addPolyline->setWindowTitle(QCoreApplication::translate("addPolyline", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("addPolyline", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Polyline Creator</span></p></body></html>", nullptr));
        shapeDimensions->setTitle(QCoreApplication::translate("addPolyline", "Shape Dimensions", nullptr));
        point->setText(QCoreApplication::translate("addPolyline", "Point 1 (x1,y1)", nullptr));
        point_2->setText(QCoreApplication::translate("addPolyline", "Point 2 (x2,y2)", nullptr));
        point_3->setText(QCoreApplication::translate("addPolyline", "Point 3 (x3,y3)", nullptr));
        point_4->setText(QCoreApplication::translate("addPolyline", "Point 4 (x4,y4)", nullptr));
        point_5->setText(QCoreApplication::translate("addPolyline", "Point 5 (x5,y5)", nullptr));
        penProperties->setTitle(QCoreApplication::translate("addPolyline", "Pen Properties", nullptr));
        penColor->setText(QCoreApplication::translate("addPolyline", "Pen Color", nullptr));
        penColorBox->setItemText(0, QCoreApplication::translate("addPolyline", "---", nullptr));
        penColorBox->setItemText(1, QCoreApplication::translate("addPolyline", "White", nullptr));
        penColorBox->setItemText(2, QCoreApplication::translate("addPolyline", "Black", nullptr));
        penColorBox->setItemText(3, QCoreApplication::translate("addPolyline", "Red", nullptr));
        penColorBox->setItemText(4, QCoreApplication::translate("addPolyline", "Green", nullptr));
        penColorBox->setItemText(5, QCoreApplication::translate("addPolyline", "Blue", nullptr));
        penColorBox->setItemText(6, QCoreApplication::translate("addPolyline", "Cyan", nullptr));
        penColorBox->setItemText(7, QCoreApplication::translate("addPolyline", "Magenta", nullptr));
        penColorBox->setItemText(8, QCoreApplication::translate("addPolyline", "Yellow", nullptr));
        penColorBox->setItemText(9, QCoreApplication::translate("addPolyline", "Gray", nullptr));

        penStyle->setText(QCoreApplication::translate("addPolyline", "<html><head/><body><p>Pen Style</p></body></html>", nullptr));
        penStyleBox->setItemText(0, QCoreApplication::translate("addPolyline", "---", nullptr));
        penStyleBox->setItemText(1, QCoreApplication::translate("addPolyline", "NoPen", nullptr));
        penStyleBox->setItemText(2, QCoreApplication::translate("addPolyline", "SolidLine", nullptr));
        penStyleBox->setItemText(3, QCoreApplication::translate("addPolyline", "DashLine", nullptr));
        penStyleBox->setItemText(4, QCoreApplication::translate("addPolyline", "DotLine", nullptr));
        penStyleBox->setItemText(5, QCoreApplication::translate("addPolyline", "DashDotLine", nullptr));
        penStyleBox->setItemText(6, QCoreApplication::translate("addPolyline", "DashDotDotLine", nullptr));

        penCapStyle->setText(QCoreApplication::translate("addPolyline", "<html><head/><body><p>Pen Cap Style</p></body></html>", nullptr));
        penCapStyleBox->setItemText(0, QCoreApplication::translate("addPolyline", "---", nullptr));
        penCapStyleBox->setItemText(1, QCoreApplication::translate("addPolyline", "FlatCap", nullptr));
        penCapStyleBox->setItemText(2, QCoreApplication::translate("addPolyline", "SquareCap", nullptr));
        penCapStyleBox->setItemText(3, QCoreApplication::translate("addPolyline", "RoundCap", nullptr));

        penJoinStyle->setText(QCoreApplication::translate("addPolyline", "<html><head/><body><p>Pen Join Style</p></body></html>", nullptr));
        penJoinStyleBox->setItemText(0, QCoreApplication::translate("addPolyline", "---", nullptr));
        penJoinStyleBox->setItemText(1, QCoreApplication::translate("addPolyline", "MiterJoin", nullptr));
        penJoinStyleBox->setItemText(2, QCoreApplication::translate("addPolyline", "BevelJoin", nullptr));
        penJoinStyleBox->setItemText(3, QCoreApplication::translate("addPolyline", "RoundJoin", nullptr));

        penWidth->setText(QCoreApplication::translate("addPolyline", "<html><head/><body><p>Pen Width</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("addPolyline", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addPolyline", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addPolyline: public Ui_addPolyline {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPOLYLINE_H
