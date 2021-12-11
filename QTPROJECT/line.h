#ifndef LINE_H
#define LINE_H

#include "shape.h"

/*
 * Author: Ethan Safai
 */

namespace myStd
{
//! Line class
/*!
  This class represents a line that inherits from the Shape abstract base class.
*/
class Line : public Shape
{
public:
    //! Default/ alternate constructor.
    /*!
      \param id as an integer argument (shape ID)
      \param x1 as an integer argument (begin x coord)
      \param y1 as an integer argument (begin y coord)
      \param x2 as an integer argument (end x coord)
      \param y2 as an integer argument (end y coord)
    */
    Line(int id = -1, int x1 = 0, int y1 = 0, int x2 = 0,
         int y2 = 0)
        : Shape(ShapeType::Line, id)
        , begin(QPoint(x1, y1))
        , end(QPoint(x2, y2))
    {
        if (id < 0)
            setId(getShapeCount());
    }
    //! Move constructor
    /*!
      Default
    */
    Line(Line&&) = default;
    //! Destructor
    /*!
      Empty
    */
    ~Line()
    {
    }

    //! Move assignment
    /*! 
      Default
    */
    Line& operator=(Line&&) = default;

    //! Virtual method to draw the line
    /*!
      \param painter as a pointer to a QPainter object
    */
    virtual void draw(QPainter* painter) override;

    //! Virtual method to move the line
    /*!
      \param x as a constant integer (x coord for move)
      \param y as a constant integer (y coord for move)
    */
    virtual void move(const int x, const int y) override;

    //! Virtual method to return the line's perimeter
    /*!
      \return 0
    */
    virtual double getPerimeter() override;

    //! Virtual method to return the line's area
    /*!
      \return 0
    */
    virtual double getArea() override;

    //! Method to return the line's length
    /*!
      \return the length of the line
    */
    double getLength() const;

    //! Method to return the line's beginning point
    /*!
      \return QPoint of beginning coordinates
    */
    QPoint getBegin() const;

    //! Method to return the line's ending point
    /*!
      \return QPoint of end coordinates
    */
    QPoint getEnd() const;

private:
    QPoint begin; /*!< coordinates of beginning of line */
    QPoint end; /*!< coordinates of end of line */
};
}

#endif // LINE_H