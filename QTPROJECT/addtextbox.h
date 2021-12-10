#ifndef ADDTEXTBOX_H
#define ADDTEXTBOX_H

#include <QDialog>
#include "canvas.h"

namespace Ui {
class addTextBox;
}

//! Adds a textbox object
/*!
    This class represents the creation of a textbox object and inherits from QDialog.
*/
class addTextBox : public QDialog
{
    Q_OBJECT

public:
    //! Default / alternate Constructor
    /*!
        \param parent points to the QWidget
        \param renderarea points to where the shape are rendered
    */
    explicit addTextBox(QWidget *parent = nullptr, Canvas *renderarea=nullptr);

    //! Destructor
    /*!
        Empty
    */
    ~addTextBox();

private slots:
    //! Called on button press
    /*!
        Empty
    */
    void on_buttonBox_accepted();

private:
    //! Points to object creation ui
    Ui::addTextBox *ui;

    //! Where the object is rendered
    Canvas* renderarea;
};

#endif // ADDTEXTBOX_H
