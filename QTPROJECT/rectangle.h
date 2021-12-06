#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "shape.h"

/*
 * Author: Ethan Safai
 */

namespace myStd
{
class Rectangle : public Shape
{
public:
  // default/ alt constructor
  Rectangle(QPainter* painter, int id = -1, int x = 0, int y = 0, int width = 0,
            int height = 0)
    : Shape(painter, ShapeType::Rectangle, id)
    , rectangle(0, 0, width, height)
  {
      if (id < 0)
          setId(getShapeCount());
  }
  Rectangle(Rectangle&&) = default;
  ~Rectangle()
  {
  }

  Rectangle& operator=(Rectangle&&) = default;

  virtual void draw(const int x, const int y) override;
  virtual void move(const int x, const int y) override;
  virtual double getPerimeter() override;
  virtual double getArea() override;

private:
  QRect rectangle;
};
}

#endif /* RECTANGLE_H_ */
