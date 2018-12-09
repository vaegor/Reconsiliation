#ifndef VIEWCONC_H
#define VIEWCONC_H

#include <QDialog>

namespace Ui {
class viewConc;
}

class viewConc : public QDialog
{
    Q_OBJECT

public:
    explicit viewConc(QWidget *parent = nullptr);
    ~viewConc();

private:
    Ui::viewConc *ui;
};

#endif // VIEWCONC_H
