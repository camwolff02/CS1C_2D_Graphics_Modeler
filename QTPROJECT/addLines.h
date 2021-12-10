#ifndef ADDLINES_H
#define ADDLINES_H

#include <QDialog>

#include "canvas.h"
namespace Ui {
class addLines;
}

//! Adds a line object
/*!
    This class represents the creation of a line object and inherits from QDialog.
*/
class addLines : public QDialog
{
    Q_OBJECT

public:

    //! Default / alternate Constructor
    /*!
        \param parent points to the QWidget
        \param renderarea points to where the shape are rendered
    */
    explicit addLines(QWidget *parent = nullptr, Canvas *renderarea=nullptr);

    //! Destructor
    /*!
        Empty
    */
    ~addLines();

private slots:
    //! Called on ui button press
    /*!
        Empty
    */
    void on_buttonBox_accepted();

private:
    //! Points to object creation ui
    Ui::addLines *ui;

    //! Where the object is rendered
    Canvas* renderarea;
};

#endif // ADDLINES_H
