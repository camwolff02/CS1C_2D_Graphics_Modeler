#ifndef ADDPOLYGON_H
#define ADDPOLYGON_H

#include <QDialog>
#include "canvas.h"

namespace Ui {
class addPolygon;
}

//! Adds a polygon object
/*!
    This class represents the creation of a polygon object and inherits from QDialog.
*/

class addPolygon : public QDialog
{
    Q_OBJECT

public:
    //! Default / alternate Constructor
    /*!
        \param parent points to the QWidget
        \param renderarea points to where the shape are rendered
    */
    explicit addPolygon(QWidget *parent = nullptr, Canvas *renderarea=nullptr);
    
    //! Destructor
    /*!
        Empty
    */
    ~addPolygon();


private slots:
    //! Called on button press
    /*!
        Empty
    */
    void on_buttonBox_accepted();

private:
    //! Points to object creation ui
    Ui::addPolygon *ui;

    //! Where the object is rendered
    Canvas* renderarea;
};

#endif // ADDPOLYGON_H
