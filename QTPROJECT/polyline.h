#ifndef POLYLINE_H
#define POLYLINE_H

#include "shape.h"
#include <QObject>

namespace myStd{

//! Polyline class
/*!
 This class represents a polyline which derives from the Shape abstract base class
 */

class Polyline : public Shape {

public:
    //! Default/alternate constructor - calls base Shape constructor
    /*!
      \param id as an integer argument (shape ID)
     */
    Polyline(int id=-1);

    //! Virtual method to draw polyline
    /*!
      \param painter as a pointer to a QPainter object
     */
    virtual void draw(QPainter* painter) override;

    //! Virtual method to move polyline
    /*!
      \param x as a constant integer (shift x units)
      \param y as a constant integer (shift y units)
     */
    virtual void move(const int x, const int y) override;

    //! Virtual method to get perimeter
    /*!
      \return 0;
     */
    virtual double getPerimeter() override;

    //! Virtual method to get area
    /*!
      \return 0;
     */
    virtual double getArea() override;

    void addPoint(const int x, const int y);

    //! Virtual method to get vector of all points on polyline
    /*!
      \return 0;
     */
    std::vector<QPoint> getPoints();

private:
    std::vector<QPoint> points; /*!< Vector of points that connect pollyline */

};

}

#endif // POLYLINE_H
