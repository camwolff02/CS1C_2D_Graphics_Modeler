#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"
#include "Vector.h"

/*
 * Author: Ethan Safai
 */

namespace myStd
{
//! Polygon class
/*!
  This class represents a polygon that inherits from the Shape abstract base 
  class.
*/
class Polygon : public Shape
{
public:
    //! Default/ alternate constructor.
    /*!
      \param id as an integer argument (shape ID)
    */
    Polygon(int id = -1)
        : Shape(ShapeType::Polygon, id)
    {
        setX(0);
        setY(0);
        if (id < 0)
            setId(getShapeCount());
    }
    //! Move constructor
    /*!
      Default
    */
    Polygon(Polygon&&) = default;
    //! Destructor
    /*!
      Empty
    */
    ~Polygon()
    {
    }

    //! Move assignment
    /*! 
      Default
    */
    Polygon& operator=(Polygon&&) = default;

    //! Virtual method to draw the polygon
    /*!
      \param painter as a pointer to a QPainter object
    */
    virtual void draw(QPainter* painter) override;

    //! Virtual method to move the polygon
    /*!
      \param x as a constant integer (x coord for move)
      \param y as a constant integer (y coord for move)
    */
    virtual void move(const int x, const int y) override;

    //! Virtual method to return the polygon's perimeter
    /*!
      \return the polygon's perimeter
    */
    virtual double getPerimeter() override;

    //! Virtual method to return the polygon's area
    /*!
      \return the polygon's area
    */
    virtual double getArea() override;

    //! Method to add a point to the polygon
    /*!
      \param x as a constant integer (x coord)
      \param y as a constant integer (y coord)
    */
    void addPoint(const int x, const int y);

    //! Method to return a vector of the polygon's points in order
    /*!
      \return a vector of the polygon's points in order of creation
    */
    myStd::vector<QPoint> getPoints() const;

private:
    myStd::vector<QPoint> points; // contains the polygon's vertices
    QPolygon polygon; // contains vertices - used for drawing with QPainter
};
}

#endif // POLYGON_H