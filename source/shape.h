#ifndef _SHAPE_
#define _SHAPE_

/*Author: Christopher Schrader
 Editors: <list your names here>
*/

enum ShapeType {Line=1, Polyline, Polygon, Rectangle, Square,  Ellipse, Circle, Text};

//our abstract class
class Shape {
public:
  //default constructor
  //change nullptr after we make a qpainter in main or window
  Shape() : qpainterPTR{nullptr}, shapeID{1}, id{0} {};

  //change nullptr after we make a qpainter in main or window
  //alt constructor - might need to add more params for setPen and setBrush.
  Shape(ShapeType type, int id) : qpainterPTR{nullptr}, shapeID{type} , id{id} {};

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
  virtual void draw() = 0;
  virtual void move(const int x, const int y) = 0;
  virtual double getPerimeter() = 0;
  virtual double getArea() = 0;

  //public methods to change shape proerties - these will invoke our qpainterPTR
  void setShapeType(ShapeType type);
  //invoke qpainterPTR.setPen(pen) with pen being the QPen pen we make using these parameters
  void setPen(Qt::GlobalColor color, int size, Qt::PenStyle style, Qt::PenCapStyle capStyle, Qt::PenJoinStyle joinStyle);
  //invoke qpainterPTR.setBrush(brush) with brush being the QBrush brush we make using these parameters
  void setBrush(Qt::GlobalColor color, Qt::BrushStyle brushStyle);

  //destructor
  virtual ~Shape();

private:
//aggregation
QPainter* qpainterPTR;
//shape type id:
ShapeType shapeID;

//Number ID, not shape type
int id;

};


#endif
