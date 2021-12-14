#ifndef CANVAS_H
#define CANVAS_H

#include <QObject>
#include <QWidget>
#include <QPixmap>

#include "shape.h"
#include "Vector.h"
#include "shape.h"
#include "ellipse.h"

//This is the class for our actual canvas where shapes are rendered
//it contains our vector of Shapes

//later: initialize vector of Shapes (private data member) in consructor using parser reading in from shapes.txt

//! Canvas
/*!
    This class represents the canvas on which shapes will render and inherits from QDWidget.
*/
class Canvas : public QWidget {
  Q_OBJECT
public:

  //CALL CAMERONS FUNCTION TO READ IN TO shapes. shapes = hisFunction();

  //! Default constructor
  /*!
        \param parent points to the QWidget
    */
  Canvas(QWidget *parent = 0);

  //! Passes pointer to QPaintEvent
  /*!
    \param event points to QPaintEvent
  */
  void paintEvent(QPaintEvent *event) override;

  //CALL RILEYS FUNCTION TO WRITE

  //! Destructor
  /*!
    Empty
  */
  ~Canvas();

  //! Returns painter
  /*!
    \return painter
  */
  QPainter* getPainter();

  //! Returns brush style
  /*!
    \param index index location of shape
    \return brush_style
  */
  Qt::BrushStyle getBrushStyle(int index);

  //! Adds a shape
  /*!
    \param shape shape to be added
    \return brush_style
  */
  void addShape(Shape* shape);

  //! Returns pen style
  /*!
    \param index index location of shape
    \return style
  */
  Qt::PenStyle getPenStyle(int index);

  //! Returns pen cap style
  /*!
    \param index index location of shape
    \return capStyle
  */
  Qt::PenCapStyle getPenCapStyle(int index);

  //! Returns pen join style
  /*!
    \param index index location of shape
    \return pen_join_style
  */
  Qt::PenJoinStyle getPenJoinStyle(int index);

  void deleteShape(int id);
  void moveShape(int id, int x, int y);

private:
//! shape container
myStd::vector<Shape*> shapes;

//! global QPainter:
QPainter painter;
};

#endif // CANVAS_H
