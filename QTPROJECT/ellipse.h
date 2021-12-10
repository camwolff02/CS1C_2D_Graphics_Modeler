#ifndef _ELLIPSE_
#define _ELLIPSE_

#include "shape.h"

//! Ellipse class
/*!
 This class represents an ellipse which derives from the Shape abstract base class
 */

namespace myStd{

class Ellipse : public Shape {
public:
    //! Default/alternate constructor - calls base Shape constructor
    /*!
      \param id as an integer argument (shape ID)
      \param width as an integer argument (ellipse width)
      \param height as an integer argument (ellipse height)
     */
    Ellipse(int id = -1, int width=0, int height=0) : Shape{ShapeType::Ellipse, id} , shape{0, 0, width, height} {
        if (id < 0){
            setId(getShapeCount());
    }};

    //! Virtual method to draw ellipse
    /*!
      \param painter as a pointer to q QPainter object
     */
    virtual void draw(QPainter* painter) override;

    //! Virtual method to move ellipse
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


private:
  QRect shape;

};

}


#endif
