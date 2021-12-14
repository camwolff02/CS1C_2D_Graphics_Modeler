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
    QString getText() const;

    //! Returns font of text
    /*!
      \return 0;
     */
    QFont   getFont() const;

    //! Returns integer that represents text allignment
    /*!
      \return 0;
     */
    int     getFlag() const ;

    //! Returns width of text box
    /*!
      \return 0;
     */
    int getWidth() const ;

    //! Returns height of text box
    /*!
      \return 0;
     */
    int getHeight() const;

private:
    QString text; /*!< QString which contains text content being displayed */
    int height; /*!< Vertical size of text box */
    int width; /*!< Horizontal size of text box */
    QFont font; /*!< Font of text being rendered inside text box */
    int flag; /*!< Flag used for text alignment within text box */
};


}
#endif // TEXT_H
