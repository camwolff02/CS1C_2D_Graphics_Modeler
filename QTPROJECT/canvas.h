#ifndef CANVAS_H
#define CANVAS_H

#include <QObject>
#include <QWidget>
#include <QPixmap>

#include "shape.h"
#include "Vector.h"
#include "shape.h"
#include "ellipse.h"

//This is the class for our actual canvas where shapes are rendered
//it contains our vector of Shapes
//later: initialize vector of Shapes (private data member) in consructor using parser reading in from shapes.txt

class Canvas : public QWidget {
  Q_OBJECT
public:

  //default constructor
  Canvas(QWidget *parent = 0);

  //virtual function override
  void paintEvent(QPaintEvent *event) override;

  //ask prof: should we use destructor to save stuff to shapes.txt?
  //~Canvas();


private:
myStd::vector<Shape*> shapes;

//our global QPainter:
QPainter painter;


};

#endif // CANVAS_H