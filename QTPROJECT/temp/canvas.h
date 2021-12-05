#ifndef _CANVAS_
#define _CANVAS_

#include <QWidget>
#include <QPaintEvent>

#include "shape.h"
#include "Vector.h"

//This is the class for our actual canvas where shapes are rendered
//it contains our vector of Shapes
//later: initialize vector of Shapes (private data member) in consructor using parser reading in from shapes.txt

class Canvas : public QWidget {
  Q_OBJECT
public:

  //default constructor
  Canvas(QWidget *parent = 0);

  void paintEvent(QPaintEvent);

  //ask prof: should we use destructor to save stuff to shapes.txt?
  ~Canvas();


private:
myStd::vector<Shape> shapes;

};


#endif
