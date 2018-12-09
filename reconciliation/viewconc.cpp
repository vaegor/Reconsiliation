#include "viewconc.h"
#include "ui_viewconc.h"
viewConc::viewConc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewConc)
{
    ui->setupUi(this);
    //QTableView * concTable = new QTableView;

}

viewConc::~viewConc()
{
    delete ui;
}
