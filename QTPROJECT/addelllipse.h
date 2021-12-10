#ifndef ADDELLLIPSE_H
#define ADDELLLIPSE_H

#include <QDialog>
#include "canvas.h"

namespace Ui {
class addElllipse;
}

//! Adds an ellipse object
/*!
    This class represents the creation of an ellipse object and inherits from QDialog.
*/
class addElllipse : public QDialog
{
    Q_OBJECT

public:
    //! Default / alternate Constructor
    /*!
        \param parent points to the QWidget
        \param renderarea points to where the shape are rendered
    */
    explicit addElllipse(QWidget *parent = nullptr, Canvas *renderarea=nullptr);

    //! Destructor
    /*!
        Empty
    */
    ~addElllipse();

private slots:
    //! Called on button press
    /*!
        Empty
    */
    void on_buttonBox_accepted();

private:
    //! Points to object creation ui
    Ui::addElllipse *ui;

    //! Where the object is rendered
    Canvas* renderarea;
};

#endif // ADDELLLIPSE_H
