/********************************************************************************
** Form generated from reading UI file 'addLines.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDLINES_H
#define UI_ADDLINES_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addLines
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *title;
    QGroupBox *shapeDimensions;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *point1;
    QLabel *label;
    QLineEdit *x1;
    QLineEdit *y1;
    QHBoxLayout *point2;
    QLabel *label_2;
    QLineEdit *x2;
    QLineEdit *y2;
    QGroupBox *penProperties;
    QWidget *layoutWidget1;
    QHBoxLayout *color;
    QLabel *penColor;
    QComboBox *penColorBox;
    QWidget *layoutWidget2;
    QHBoxLayout *style;
    QLabel *penStyle;
    QComboBox *penStyleBox;
    QWidget *layoutWidget3;
    QHBoxLayout *capstyle;
    QLabel *penCapStyle;
    QComboBox *penCapStyleBox;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout;
    QLabel *penJoinStyle;
    QComboBox *penJoinStyleBox;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *penWidth;
    QSpinBox *penWidthBox;

    void setupUi(QDialog *addLines)
    {
        if (addLines->objectName().isEmpty())
            addLines->setObjectName(QString::fromUtf8("addLines"));
        addLines->resize(500, 420);
        buttonBox = new QDialogButtonBox(addLines);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(320, 370, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        title = new QLabel(addLines);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(-30, 0, 201, 31));
        shapeDimensions = new QGroupBox(addLines);
        shapeDimensions->setObjectName(QString::fromUtf8("shapeDimensions"));
        shapeDimensions->setGeometry(QRect(20, 30, 371, 92));
        layoutWidget = new QWidget(shapeDimensions);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 354, 58));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        point1 = new QHBoxLayout();
        point1->setObjectName(QString::fromUtf8("point1"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        point1->addWidget(label);

        x1 = new QLineEdit(layoutWidget);
        x1->setObjectName(QString::fromUtf8("x1"));

        point1->addWidget(x1);

        y1 = new QLineEdit(layoutWidget);
        y1->setObjectName(QString::fromUtf8("y1"));

        point1->addWidget(y1);


        verticalLayout->addLayout(point1);

        point2 = new QHBoxLayout();
        point2->setObjectName(QString::fromUtf8("point2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        point2->addWidget(label_2);

        x2 = new QLineEdit(layoutWidget);
        x2->setObjectName(QString::fromUtf8("x2"));

        point2->addWidget(x2);

        y2 = new QLineEdit(layoutWidget);
        y2->setObjectName(QString::fromUtf8("y2"));

        point2->addWidget(y2);


        verticalLayout->addLayout(point2);

        penProperties = new QGroupBox(addLines);
        penProperties->setObjectName(QString::fromUtf8("penProperties"));
        penProperties->setGeometry(QRect(20, 130, 371, 171));
        layoutWidget1 = new QWidget(penProperties);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 170, 32));
        color = new QHBoxLayout(layoutWidget1);
        color->setObjectName(QString::fromUtf8("color"));
        color->setContentsMargins(0, 0, 0, 0);
        penColor = new QLabel(layoutWidget1);
        penColor->setObjectName(QString::fromUtf8("penColor"));

        color->addWidget(penColor);

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

        color->addWidget(penColorBox);

        layoutWidget2 = new QWidget(penProperties);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 80, 213, 32));
        style = new QHBoxLayout(layoutWidget2);
        style->setObjectName(QString::fromUtf8("style"));
        style->setContentsMargins(0, 0, 0, 0);
        penStyle = new QLabel(layoutWidget2);
        penStyle->setObjectName(QString::fromUtf8("penStyle"));

        style->addWidget(penStyle);

        penStyleBox = new QComboBox(layoutWidget2);
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->addItem(QString());
        penStyleBox->setObjectName(QString::fromUtf8("penStyleBox"));

        style->addWidget(penStyleBox);

        layoutWidget3 = new QWidget(penProperties);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 110, 209, 32));
        capstyle = new QHBoxLayout(layoutWidget3);
        capstyle->setObjectName(QString::fromUtf8("capstyle"));
        capstyle->setContentsMargins(0, 0, 0, 0);
        penCapStyle = new QLabel(layoutWidget3);
        penCapStyle->setObjectName(QString::fromUtf8("penCapStyle"));

        capstyle->addWidget(penCapStyle);

        penCapStyleBox = new QComboBox(layoutWidget3);
        penCapStyleBox->addItem(QString());
        penCapStyleBox->addItem(QString());
        penCapStyleBox->addItem(QString());
        penCapStyleBox->addItem(QString());
        penCapStyleBox->setObjectName(QString::fromUtf8("penCapStyleBox"));

        capstyle->addWidget(penCapStyleBox);

        layoutWidget4 = new QWidget(penProperties);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 140, 207, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        penJoinStyle = new QLabel(layoutWidget4);
        penJoinStyle->setObjectName(QString::fromUtf8("penJoinStyle"));

        horizontalLayout->addWidget(penJoinStyle);

        penJoinStyleBox = new QComboBox(layoutWidget4);
        penJoinStyleBox->addItem(QString());
        penJoinStyleBox->addItem(QString());
        penJoinStyleBox->addItem(QString());
        penJoinStyleBox->addItem(QString());
        penJoinStyleBox->setObjectName(QString::fromUtf8("penJoinStyleBox"));

        horizontalLayout->addWidget(penJoinStyleBox);

        layoutWidget5 = new QWidget(penProperties);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 50, 114, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        penWidth = new QLabel(layoutWidget5);
        penWidth->setObjectName(QString::fromUtf8("penWidth"));

        horizontalLayout_2->addWidget(penWidth);

        penWidthBox = new QSpinBox(layoutWidget5);
        penWidthBox->setObjectName(QString::fromUtf8("penWidthBox"));
        penWidthBox->setMinimumSize(QSize(42, 22));
        penWidthBox->setMaximum(20);

        horizontalLayout_2->addWidget(penWidthBox);


        retranslateUi(addLines);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addLines, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addLines, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addLines);
    } // setupUi

    void retranslateUi(QDialog *addLines)
    {
        addLines->setWindowTitle(QCoreApplication::translate("addLines", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("addLines", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Line Creator</span></p></body></html>", nullptr));
        shapeDimensions->setTitle(QCoreApplication::translate("addLines", "Shape Dimensions", nullptr));
        label->setText(QCoreApplication::translate("addLines", "Point 1 (x1,y1)", nullptr));
        label_2->setText(QCoreApplication::translate("addLines", "<html><head/><body><p>Point 2 (x2,y2)</p></body></html>", nullptr));
        penProperties->setTitle(QCoreApplication::translate("addLines", "Pen Properties", nullptr));
        penColor->setText(QCoreApplication::translate("addLines", "Pen Color", nullptr));
        penColorBox->setItemText(0, QCoreApplication::translate("addLines", "---", nullptr));
        penColorBox->setItemText(1, QCoreApplication::translate("addLines", "White", nullptr));
        penColorBox->setItemText(2, QCoreApplication::translate("addLines", "Black", nullptr));
        penColorBox->setItemText(3, QCoreApplication::translate("addLines", "Red", nullptr));
        penColorBox->setItemText(4, QCoreApplication::translate("addLines", "Green", nullptr));
        penColorBox->setItemText(5, QCoreApplication::translate("addLines", "Blue", nullptr));
        penColorBox->setItemText(6, QCoreApplication::translate("addLines", "Cyan", nullptr));
        penColorBox->setItemText(7, QCoreApplication::translate("addLines", "Magenta", nullptr));
        penColorBox->setItemText(8, QCoreApplication::translate("addLines", "Yellow", nullptr));
        penColorBox->setItemText(9, QCoreApplication::translate("addLines", "Gray", nullptr));

        penStyle->setText(QCoreApplication::translate("addLines", "<html><head/><body><p>Pen Style</p></body></html>", nullptr));
        penStyleBox->setItemText(0, QCoreApplication::translate("addLines", "---", nullptr));
        penStyleBox->setItemText(1, QCoreApplication::translate("addLines", "NoPen", nullptr));
        penStyleBox->setItemText(2, QCoreApplication::translate("addLines", "SolidLine", nullptr));
        penStyleBox->setItemText(3, QCoreApplication::translate("addLines", "DashLine", nullptr));
        penStyleBox->setItemText(4, QCoreApplication::translate("addLines", "DotLine", nullptr));
        penStyleBox->setItemText(5, QCoreApplication::translate("addLines", "DashDotLine", nullptr));
        penStyleBox->setItemText(6, QCoreApplication::translate("addLines", "DashDotDotLine", nullptr));

        penCapStyle->setText(QCoreApplication::translate("addLines", "<html><head/><body><p>Pen Cap Style</p></body></html>", nullptr));
        penCapStyleBox->setItemText(0, QCoreApplication::translate("addLines", "---", nullptr));
        penCapStyleBox->setItemText(1, QCoreApplication::translate("addLines", "FlatCap", nullptr));
        penCapStyleBox->setItemText(2, QCoreApplication::translate("addLines", "SquareCap", nullptr));
        penCapStyleBox->setItemText(3, QCoreApplication::translate("addLines", "RoundCap", nullptr));

        penJoinStyle->setText(QCoreApplication::translate("addLines", "<html><head/><body><p>Pen Join Style</p></body></html>", nullptr));
        penJoinStyleBox->setItemText(0, QCoreApplication::translate("addLines", "---", nullptr));
        penJoinStyleBox->setItemText(1, QCoreApplication::translate("addLines", "MiterJoin", nullptr));
        penJoinStyleBox->setItemText(2, QCoreApplication::translate("addLines", "BevelJoin", nullptr));
        penJoinStyleBox->setItemText(3, QCoreApplication::translate("addLines", "RoundJoin", nullptr));

        penWidth->setText(QCoreApplication::translate("addLines", "<html><head/><body><p>Pen Width</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addLines: public Ui_addLines {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDLINES_H
