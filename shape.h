#ifndef _SHAPE_
#define _SHAPE_

#include "project.h"

//our abstract class
//Finish and implement later, just getting the basics started
class Shape {
public:

  //default constructor
  Shape();

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

  //destructor
  virtual ~Shape();

private:

//include a pointer to a QPainter class (from qt library), this is our aggregation - ADD LATER
//shape id:
int id;
//create an Enum type here for the Shape's type

};


#endif
