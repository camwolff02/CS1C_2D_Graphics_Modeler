#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "shape.h"

/*
 * Author: Ethan Safai
 */

namespace myStd
{
//! Rectangle class
/*!
  This class represents a rectangle that inherits from the Shape abstract base 
  class.
*/
class Rectangle : public Shape
{
public:
  //! Default/ alternate constructor.
  /*!
    \param id as an integer argument (shape ID)
    \param x as an integer argument (top-left x coord)
    \param y as an integer argument (top-left y coord)
    \param width as an integer argument (rectangle width)
    \param height as an integer argument (rectangle height)
  */
  Rectangle(int id = -1, int x = 0, int y = 0, int width = 0,
            int height = 0)
    : Shape(ShapeType::Rectangle, id)
    , rectangle(x, y, width, height)
  {
      setX(x);
      setY(y);
      if (id < 0)
          setId(getShapeCount());
  }
  //! Move constructor
  /*!
    Default
  */
  Rectangle(Rectangle&&) = default;
  //! Destructor
  /*!
    Empty
  */
  ~Rectangle()
  {
  }

  //! Move assignment
  /*! 
    Default
  */
  Rectangle& operator=(Rectangle&&) = default;

  //! Virtual method to draw the rectangle
  /*!
    \param painter as a pointer to a QPainter object
  */
  virtual void draw(QPainter* painter) override;

  //! Virtual method to move the rectangle
  /*!
    \param x as a constant integer (x coord for move)
    \param y as a constant integer (y coord for move)
  */
  virtual void move(const int x, const int y) override;

  //! Virtual method to return the rectangle's perimeter
  /*!
    \return the rectangle's perimeter
  */
  virtual double getPerimeter() override;

  //! Virtual method to return the rectangle's area
  /*!
    \return the rectangle's area
  */
  virtual double getArea() override;

private:
  QRect rectangle; /*!< defines top-left point, width, and height */
};
}

#endif /* RECTANGLE_H_ */