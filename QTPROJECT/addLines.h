#ifndef ADDLINES_H
#define ADDLINES_H

#include <QDialog>

namespace Ui {
class addLines;
}

class addLines : public QDialog
{
    Q_OBJECT

public:
    explicit addLines(QWidget *parent = nullptr);
    ~addLines();

private:
    Ui::addLines *ui;
};

#endif // ADDLINES_H
