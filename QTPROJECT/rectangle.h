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
  Rectangle(int id = -1, int x = 0, int y = 0, int width = 0,
            int height = 0)
    : Shape(ShapeType::Rectangle, id)
    , rectangle(x, y, width, height)
  {
      setX(x);
      setY(y);
      if (id < 0)
          setId(getShapeCount());
  }
  Rectangle(Rectangle&&) = default;
  ~Rectangle()
  {
  }

  Rectangle& operator=(Rectangle&&) = default;

  void draw(QPainter* painter) override;
  void move(const int x, const int y) override;
  double getPerimeter() override;
  double getArea() override;

private:
  QRect rectangle;
};
}

#endif /* RECTANGLE_H_ */
