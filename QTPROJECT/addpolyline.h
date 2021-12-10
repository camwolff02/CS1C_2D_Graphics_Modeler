#ifndef ADDPOLYLINE_H
#define ADDPOLYLINE_H

#include <QDialog>
#include "canvas.h"

namespace Ui {
class addPolyline;
}

//! Adds a polyline object
/*!
    This class represents the creation of a polyline object and inherits from QDialog.
*/

class addPolyline : public QDialog
{
    Q_OBJECT

public:
    //! Default / alternate Constructor
    /*!
        \param parent points to the QWidget
        \param renderarea points to where the shape are rendered
    */
    explicit addPolyline(QWidget *parent = nullptr, Canvas *renderarea=nullptr);

    //! Destructor
    /*!
        Empty
    */
    ~addPolyline();

private slots:
    //! Called on button press
    /*!
        Empty
    */
    void on_pushButton_pressed();

    //! Called on button press
    /*!
        Empty
    */
    void on_pushButton_2_pressed();

private:
    //! Points to object creation ui
    Ui::addPolyline *ui;

    //! Where the object is rendered
    Canvas* renderarea;
};

#endif // ADDPOLYLINE_H
