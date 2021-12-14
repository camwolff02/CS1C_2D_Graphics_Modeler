/********************************************************************************
** Form generated from reading UI file 'addpolygon.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPOLYGON_H
#define UI_ADDPOLYGON_H

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

class Ui_addPolygon
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *title;
    QGroupBox *shapeDimensions;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *point;
    QLineEdit *x1_2;
    QLineEdit *y1_2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *point_2;
    QLineEdit *x2_2;
    QLineEdit *y2_2;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_13;
    QLabel *point_6;
    QLineEdit *x3_2;
    QLineEdit *y3_2;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_14;
    QLabel *point_7;
    QLineEdit *x4_2;
    QLineEdit *y4_2;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_15;
    QLabel *point_8;
    QLineEdit *x5_2;
    QLineEdit *y5_2;
    QGroupBox *penProperties;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *penColor;
    QComboBox *penColorBox;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *penWidth;
    QSpinBox *penWidthBox;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *penStyle;
    QComboBox *penStyleBox;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *penCapStyle;
    QComboBox *comboBox;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *penJoinStyle;
    QComboBox *comboBox_2;
    QGroupBox *brushProperties;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *brushColor;
    QComboBox *comboBox_3;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *brushStyle;
    QComboBox *comboBox_4;

    void setupUi(QDialog *addPolygon)
    {
        if (addPolygon->objectName().isEmpty())
            addPolygon->setObjectName(QString::fromUtf8("addPolygon"));
        addPolygon->resize(500, 488);
        buttonBox = new QDialogButtonBox(addPolygon);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(150, 450, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        title = new QLabel(addPolygon);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(-10, 0, 201, 31));
        shapeDimensions = new QGroupBox(addPolygon);
        shapeDimensions->setObjectName(QString::fromUtf8("shapeDimensions"));
        shapeDimensions->setGeometry(QRect(20, 30, 351, 191));
        layoutWidget = new QWidget(shapeDimensions);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 328, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        point = new QLabel(layoutWidget);
        point->setObjectName(QString::fromUtf8("point"));

        horizontalLayout->addWidget(point);

        x1_2 = new QLineEdit(layoutWidget);
        x1_2->setObjectName(QString::fromUtf8("x1_2"));

        horizontalLayout->addWidget(x1_2);

        y1_2 = new QLineEdit(layoutWidget);
        y1_2->setObjectName(QString::fromUtf8("y1_2"));

        horizontalLayout->addWidget(y1_2);

        layoutWidget_3 = new QWidget(shapeDimensions);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 60, 328, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        point_2 = new QLabel(layoutWidget_3);
        point_2->setObjectName(QString::fromUtf8("point_2"));

        horizontalLayout_2->addWidget(point_2);

        x2_2 = new QLineEdit(layoutWidget_3);
        x2_2->setObjectName(QString::fromUtf8("x2_2"));

        horizontalLayout_2->addWidget(x2_2);

        y2_2 = new QLineEdit(layoutWidget_3);
        y2_2->setObjectName(QString::fromUtf8("y2_2"));

        horizontalLayout_2->addWidget(y2_2);

        layoutWidget_4 = new QWidget(shapeDimensions);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 90, 328, 26));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        point_6 = new QLabel(layoutWidget_4);
        point_6->setObjectName(QString::fromUtf8("point_6"));

        horizontalLayout_13->addWidget(point_6);

        x3_2 = new QLineEdit(layoutWidget_4);
        x3_2->setObjectName(QString::fromUtf8("x3_2"));

        horizontalLayout_13->addWidget(x3_2);

        y3_2 = new QLineEdit(layoutWidget_4);
        y3_2->setObjectName(QString::fromUtf8("y3_2"));

        horizontalLayout_13->addWidget(y3_2);

        layoutWidget_5 = new QWidget(shapeDimensions);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 120, 328, 26));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        point_7 = new QLabel(layoutWidget_5);
        point_7->setObjectName(QString::fromUtf8("point_7"));

        horizontalLayout_14->addWidget(point_7);

        x4_2 = new QLineEdit(layoutWidget_5);
        x4_2->setObjectName(QString::fromUtf8("x4_2"));

        horizontalLayout_14->addWidget(x4_2);

        y4_2 = new QLineEdit(layoutWidget_5);
        y4_2->setObjectName(QString::fromUtf8("y4_2"));

        horizontalLayout_14->addWidget(y4_2);

        layoutWidget_6 = new QWidget(shapeDimensions);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(10, 150, 328, 26));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        point_8 = new QLabel(layoutWidget_6);
        point_8->setObjectName(QString::fromUtf8("point_8"));

        horizontalLayout_15->addWidget(point_8);

        x5_2 = new QLineEdit(layoutWidget_6);
        x5_2->setObjectName(QString::fromUtf8("x5_2"));

        horizontalLayout_15->addWidget(x5_2);

        y5_2 = new QLineEdit(layoutWidget_6);
        y5_2->setObjectName(QString::fromUtf8("y5_2"));

        horizontalLayout_15->addWidget(y5_2);

        penProperties = new QGroupBox(addPolygon);
        penProperties->setObjectName(QString::fromUtf8("penProperties"));
        penProperties->setGeometry(QRect(20, 220, 351, 171));
        layoutWidget1 = new QWidget(penProperties);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 136, 26));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        penColor = new QLabel(layoutWidget1);
        penColor->setObjectName(QString::fromUtf8("penColor"));

        horizontalLayout_4->addWidget(penColor);

        penColorBox = new QComboBox(layoutWidget1);
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

        layoutWidget2 = new QWidget(penProperties);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 50, 102, 27));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        penWidth = new QLabel(layoutWidget2);
        penWidth->setObjectName(QString::fromUtf8("penWidth"));

        horizontalLayout_5->addWidget(penWidth);

        penWidthBox = new QSpinBox(layoutWidget2);
        penWidthBox->setObjectName(QString::fromUtf8("penWidthBox"));
        penWidthBox->setMaximum(20);

        horizontalLayout_5->addWidget(penWidthBox);

        layoutWidget3 = new QWidget(penProperties);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 80, 171, 26));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        penStyle = new QLabel(layoutWidget3);
        penStyle->setObjectName(QString::fromUtf8("penStyle"));

        horizontalLayout_6->addWidget(penStyle);

        penStyleBox = new QComboBox(layoutWidget3);
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->setObjectName(QString::fromUtf8("penStyleBox"));

        horizontalLayout_6->addWidget(penStyleBox);

        layoutWidget4 = new QWidget(penProperties);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 110, 166, 26));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        penCapStyle = new QLabel(layoutWidget4);
        penCapStyle->setObjectName(QString::fromUtf8("penCapStyle"));

        horizontalLayout_7->addWidget(penCapStyle);

        comboBox = new QComboBox(layoutWidget4);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_7->addWidget(comboBox);

        layoutWidget5 = new QWidget(penProperties);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 140, 165, 26));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        penJoinStyle = new QLabel(layoutWidget5);
        penJoinStyle->setObjectName(QString::fromUtf8("penJoinStyle"));

        horizontalLayout_8->addWidget(penJoinStyle);

        comboBox_2 = new QComboBox(layoutWidget5);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_8->addWidget(comboBox_2);

        brushProperties = new QGroupBox(addPolygon);
        brushProperties->setObjectName(QString::fromUtf8("brushProperties"));
        brushProperties->setGeometry(QRect(20, 400, 271, 80));
        layoutWidget6 = new QWidget(brushProperties);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 20, 146, 26));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        brushColor = new QLabel(layoutWidget6);
        brushColor->setObjectName(QString::fromUtf8("brushColor"));

        horizontalLayout_9->addWidget(brushColor);

        comboBox_3 = new QComboBox(layoutWidget6);
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

        layoutWidget7 = new QWidget(brushProperties);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(10, 50, 159, 26));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        brushStyle = new QLabel(layoutWidget7);
        brushStyle->setObjectName(QString::fromUtf8("brushStyle"));

        horizontalLayout_10->addWidget(brushStyle);

        comboBox_4 = new QComboBox(layoutWidget7);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        horizontalLayout_10->addWidget(comboBox_4);


        retranslateUi(addPolygon);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addPolygon, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addPolygon, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addPolygon);
    } // setupUi

    void retranslateUi(QDialog *addPolygon)
    {
        addPolygon->setWindowTitle(QCoreApplication::translate("addPolygon", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("addPolygon", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Polygon Creator</span></p></body></html>", nullptr));
        shapeDimensions->setTitle(QCoreApplication::translate("addPolygon", "Shape Dimensions", nullptr));
        point->setText(QCoreApplication::translate("addPolygon", "Point 1 (x1,y1)", nullptr));
        point_2->setText(QCoreApplication::translate("addPolygon", "Point 2 (x2,y2)", nullptr));
        point_6->setText(QCoreApplication::translate("addPolygon", "Point 3 (x3,y3)", nullptr));
        point_7->setText(QCoreApplication::translate("addPolygon", "Point 4 (x4,y4)", nullptr));
        point_8->setText(QCoreApplication::translate("addPolygon", "Point 5 (x5,y5)", nullptr));
        penProperties->setTitle(QCoreApplication::translate("addPolygon", "Pen Properties", nullptr));
        penColor->setText(QCoreApplication::translate("addPolygon", "Pen Color", nullptr));
        penColorBox->setItemText(0, QCoreApplication::translate("addPolygon", "---", nullptr));
        penColorBox->setItemText(1, QCoreApplication::translate("addPolygon", "White", nullptr));
        penColorBox->setItemText(2, QCoreApplication::translate("addPolygon", "Black", nullptr));
        penColorBox->setItemText(3, QCoreApplication::translate("addPolygon", "Red", nullptr));
        penColorBox->setItemText(4, QCoreApplication::translate("addPolygon", "Green", nullptr));
        penColorBox->setItemText(5, QCoreApplication::translate("addPolygon", "Blue", nullptr));
        penColorBox->setItemText(6, QCoreApplication::translate("addPolygon", "Cyan", nullptr));
        penColorBox->setItemText(7, QCoreApplication::translate("addPolygon", "Magenta", nullptr));
        penColorBox->setItemText(8, QCoreApplication::translate("addPolygon", "Yellow", nullptr));
        penColorBox->setItemText(9, QCoreApplication::translate("addPolygon", "Gray", nullptr));

        penWidth->setText(QCoreApplication::translate("addPolygon", "Pen Width", nullptr));
        penStyle->setText(QCoreApplication::translate("addPolygon", "Pen Style", nullptr));
        penStyleBox->setItemText(0, QCoreApplication::translate("addPolygon", "---", nullptr));
        penStyleBox->setItemText(1, QCoreApplication::translate("addPolygon", "NoPen", nullptr));
        penStyleBox->setItemText(2, QCoreApplication::translate("addPolygon", "SolidLine", nullptr));
        penStyleBox->setItemText(3, QCoreApplication::translate("addPolygon", "DashLine", nullptr));
        penStyleBox->setItemText(4, QCoreApplication::translate("addPolygon", "DotLine", nullptr));
        penStyleBox->setItemText(5, QCoreApplication::translate("addPolygon", "DashDotLine", nullptr));
        penStyleBox->setItemText(6, QCoreApplication::translate("addPolygon", "DashDotDotLine", nullptr));

        penCapStyle->setText(QCoreApplication::translate("addPolygon", "Pen Cap Style", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("addPolygon", "---", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("addPolygon", "FlatCap", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("addPolygon", "SquareCap", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("addPolygon", "RoundCap", nullptr));

        penJoinStyle->setText(QCoreApplication::translate("addPolygon", "Pen Join Style", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("addPolygon", "---", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("addPolygon", "MiterJoin", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("addPolygon", "BevelJoin", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("addPolygon", "RoundJoin", nullptr));

        brushProperties->setTitle(QCoreApplication::translate("addPolygon", "Brush Properties", nullptr));
        brushColor->setText(QCoreApplication::translate("addPolygon", "Brush Color", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("addPolygon", "---", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("addPolygon", "White", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("addPolygon", "Black", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("addPolygon", "Red", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("addPolygon", "Green", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("addPolygon", "Blue", nullptr));
        comboBox_3->setItemText(6, QCoreApplication::translate("addPolygon", "Cyan", nullptr));
        comboBox_3->setItemText(7, QCoreApplication::translate("addPolygon", "Magenta", nullptr));
        comboBox_3->setItemText(8, QCoreApplication::translate("addPolygon", "Yellow", nullptr));
        comboBox_3->setItemText(9, QCoreApplication::translate("addPolygon", "Gray", nullptr));

        brushStyle->setText(QCoreApplication::translate("addPolygon", "Brush Style", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("addPolygon", "---", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("addPolygon", "SolidPattern", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("addPolygon", "HorPattern", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("addPolygon", "VerPattern", nullptr));
        comboBox_4->setItemText(4, QCoreApplication::translate("addPolygon", "NoBrush", nullptr));

    } // retranslateUi

};

namespace Ui {
    class addPolygon: public Ui_addPolygon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPOLYGON_H
