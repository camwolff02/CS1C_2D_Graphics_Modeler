#ifndef TEXT_H
#define TEXT_H

#include "shape.h"
#include <QObject>
#include <QFont>

//! Text class
/*!
 This class represents a text which derives from the Shape abstract base class
 */

namespace myStd{

class Text : public Shape {
public:

    //! Default/alternate constructor - calls base Shape constructor
    /*!
      \param msg as an QString argument (text representation)
      \param font as an QFont argument (font representation)
      \param color as an QColor argument (color)
      \param height as an int argument (height)
      \param width as an int argument (width)
      \param x as an int argument (top left x coordinate)
      \param y as an int argument (top left x coordinate)
      \param flag as an int argument (allignment)
      \param id as an int argument (Shape ID)
     */
    Text(QString msg, QFont font, QColor color, int height, int width, int x, int y, int flag, int id=-1);

    //! Virtual method to draw text
    /*!
      \param painter as a pointer to q QPainter object
     */
    virtual void draw(QPainter* painter) override;

    //! Virtual method to move text
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

    //! Returns message stored in text box
    /*!
      \return 0;
     */
    QString getText();

private:
    QString text;
    int height;
    int width;
    QFont font;

    int flag;
};


}
#endif // TEXT_H
