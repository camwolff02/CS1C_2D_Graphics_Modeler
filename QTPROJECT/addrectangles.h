#ifndef ADDRECTANGLES_H
#define ADDRECTANGLES_H

#include <QDialog>
#include "canvas.h"

namespace Ui {
class addRectangles;
}

//! Adds a rectangle object
/*!
    This class represents the creation of a rectangle object and inherits from QDialog.
*/
class addRectangles : public QDialog
{
    Q_OBJECT

public:
    //! Default / alternate Constructor
    /*!
        \param parent points to the QWidget
        \param renderarea points to where the shape are rendered
    */
    explicit addRectangles(QWidget *parent = nullptr, Canvas *renderarea=nullptr);

    //! Destructor
    /*!
        Empty
    */
    ~addRectangles();

private slots:
    //! Called on button press
    /*!
        Empty
    */
    void on_buttonBox_accepted();

private:
    //! Points to object creation ui
    Ui::addRectangles *ui;

    //! Where the object is rendered
    Canvas* renderarea;
};

#endif // ADDRECTANGLES_H
