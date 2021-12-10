#ifndef _SHAPE_
#define _SHAPE_

#include <QPainter>

/*Author: Christopher Schrader
 Editors: Ethan Safai
*/

enum ShapeType {Line=1, Polyline, Polygon, Rectangle, Square,  Ellipse, Circle, Text};

//our abstract class
class Shape {
public:

  //alt constructor
  Shape(ShapeType type, int id)
    : shapeID{type}
    , id{id} 
  {
    ++shapeCount;
  };

  /*We were told to disable these*/
  //copy constructor
  Shape(const Shape& rhs) = delete;
  //copy assignment
  Shape& operator=(const Shape& rhs) = delete;

  //overload comparison operators

  //equality operator, returns true if they have the same id
  bool operator==(const Shape& rhs);

  bool operator<(const Shape& rhs);

  //pure virtual functions, override in derived classes
  virtual void draw(QPainter* painter) = 0;
  virtual void move(const int x, const int y) = 0;
  virtual double getPerimeter() = 0;
  virtual double getArea() = 0;

  //public methods to change shape proerties - these will invoke our qpainterPTR
  void setShapeType(ShapeType type);
  //invoke qpainterPTR.setPen(pen) with pen being the QPen pen we make using these parameters
  void setPen(QColor color, int size, Qt::PenStyle style, Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle);
  //invoke qpainterPTR.setBrush(brush) with brush being the QBrush brush we make using these parameters
  void setBrush(QColor color, Qt::BrushStyle brushStyle);
  //set id member
  void setId(int id);
  //set x coord
  void setX(int x);
  //set y coord
  void setY(int y);

  //return our qpainter
  QPainter* getPainter();
  //return id
  int getId() const { return id; }
  //return number of shapes created 
  static int getShapeCount() { return shapeCount; }

  QPen getPen() const { return pen; }
  QBrush getBrush() const { return brush; }

  int getX() const { return x; } ;
  int getY() const { return y;} ;

  ShapeType getShapeType() const { return shapeID; };

  static void resetShapeCount(){shapeCount = 0;}

  //destructor
  virtual ~Shape();

private:
//aggregation
QPainter* qpainterPTR;
//shape type id:
ShapeType shapeID;
QPen pen;
QBrush brush;

int x;
int y;

//Number ID, not shape type
int id;

//static member - how many shapes have been instantiated
static int shapeCount;
};


#endif
