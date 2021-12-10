#ifndef _SHAPE_
#define _SHAPE_

#include <QPainter>

/*
  Author:  Christopher Schrader
  Editors: Ethan Safai
*/

//! Enum representing the ShapeType
/*
  Values: Line (1), PolyLine, Polygon, Rectangle, Square, Ellipse, Circle, Text
*/
enum ShapeType 
{
  Line=1,    /*!< Enum value Line. */
  Polyline,  /*!< Enum value Polyline. */
  Polygon,   /*!< Enum value Polygon. */
  Rectangle, /*!< Enum value Rectangle. */
  Square,    /*!< Enum value Square. */
  Ellipse,   /*!< Enum value Ellipse. */
  Circle,    /*!< Enum value Circle. */
  Text       /*!< Enum value Text. */
};

//! Shape class
/*!
  An abstract base class representing a basic shape that derived classes inherit
  from.
*/
class Shape 
{
public:
  //! Alternate constructor.
  /*!
    \param type as a ShapeType enum (shape type)
    \param id as an integer argument (shape ID)
  */
  Shape(ShapeType type, int id)
    : shapeID{type}
    , id{id} 
  {
    ++shapeCount;
  };
  //! Copy constructor
  /*!
    Deleted
  */
  Shape(const Shape& rhs) = delete;
  //! Copy assignment
  /*!
    Deleted
  */
  Shape& operator=(const Shape& rhs) = delete;
  //! Destructor
  /*!
    Decrements the static shapeCount variable
  */
  virtual ~Shape();

  //! Equality operator
  /*!
    \return true this and the other shapes' id's are equal
  */
  bool operator==(const Shape& rhs);

  //! Less than operator
  /*!
    \return true if this shape's id is less than the other's id
  */
  bool operator<(const Shape& rhs);

  //! Pure virtual method to draw the shape
  /*!
    \param painter as a pointer to a QPainter object
  */
  virtual void draw(QPainter* painter) = 0;

  //! Pure virtual method to move the shape
  /*!
    \param x as a constant integer (x coord for move)
    \param y as a constant integer (y coord for move)
  */
  virtual void move(const int x, const int y) = 0;

  //! Pure virtual method to return the shape's perimeter
  /*!
    \return the shape's perimeter
  */
  virtual double getPerimeter() = 0;

  //! Pure virtual method to return the shape's area
  /*!
    \return the shape's area
  */
  virtual double getArea() = 0;

  //! Method to set the shape's type
  /*!
    \param type as a ShapeType
  */
  void setShapeType(ShapeType type);


  //! Method to set the shape's pen
  /*!
    \param color as a QColor
    \param size as an integer
    \param style as a Qt::PenStyle
    \param capStyle as a Qt::PenCapStyle
    \param joinStyle as a Qt::PenJoinStyle
  */
  void setPen(QColor color, int size, Qt::PenStyle style, Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle);

  //! Method to set the shape's brush
  /*!
    \param color as a QColor
    \param brushStyle as a Qt::BrushStyle
  */
  void setBrush(QColor color, Qt::BrushStyle brushStyle);

  //! Method to set the shape's id
  /*!
    \param id as an integer
  */
  void setId(int id);
  
  //! Method to set the shape's top-left x-coordinate
  /*!
    \param x as a constant integer 
  */
  void setX(int x);

  //! Method to set the shape's top-left y-coordinate
  /*!
    \param y as a constant integer 
  */
  void setY(int y);

  //! Method to return the shape's id
  /*!
    \return the shape's id
  */
  int getId() const { return id; }

  //! Static method to return the number of shapes created
  /*!
    \return the number of shapes created
  */
  static int getShapeCount() { return shapeCount; }

  //! Method to return the shape's pen
  /*!
    \return the shape's pen
  */
  QPen getPen() const { return pen; }

  //! Method to return the shape's brush
  /*!
    \return the shape's brush
  */
  QBrush getBrush() const { return brush; }

  //! Method to return the shape's top-left x-coordinate
  /*!
    \return the shape's top-left x-coordinate
  */
  int getX() const { return x; }

  //! Method to return the shape's top-left y-coordinate
  /*!
    \return the shape's top-left y-coordinate
  */
  int getY() const { return y; }

  //! Method to return the shape's shape type
  /*!
    \return the shape's shape type
  */
  ShapeType getShapeType() const { return shapeID; }

  //! Static method to reset the static shape count
  static void resetShapeCount(){shapeCount = 0;}

private:
  ShapeType shapeID;     //shape type id
  QPen pen;              // shape's pen
  QBrush brush;          // shape's brush
  int x;                 // shape's top-left x-coordinate
  int y;                 // shape's top-left y-coordinate
  int id;                // number ID (not shape type)
  static int shapeCount; // static member - how many shapes have been 
                         // instantiated
};


#endif

