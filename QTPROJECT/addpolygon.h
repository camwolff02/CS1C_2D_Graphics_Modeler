#ifndef ADDPOLYGON_H
#define ADDPOLYGON_H

#include <QDialog>

namespace Ui {
class addPolygon;
}

class addPolygon : public QDialog
{
    Q_OBJECT

public:
    explicit addPolygon(QWidget *parent = nullptr);
    ~addPolygon();

private:
    Ui::addPolygon *ui;
};

#endif // ADDPOLYGON_H