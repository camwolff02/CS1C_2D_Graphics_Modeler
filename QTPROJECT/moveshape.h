#ifndef MOVESHAPE_H
#define MOVESHAPE_H

#include <QDialog>

namespace Ui {
class moveShape;
}

class moveShape : public QDialog
{
    Q_OBJECT

public:
    explicit moveShape(QWidget *parent = nullptr);
    ~moveShape();

private:
    Ui::moveShape *ui;
};

#endif // MOVESHAPE_H
