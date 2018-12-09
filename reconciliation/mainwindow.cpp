#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "viewconc.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Show logo
    QPixmap pix(":/assets/logo.png");
    ui->logo_pix->setPixmap(pix);

   // viewConc * vC = new viewConc;
   // vC->show();
}

MainWindow::~MainWindow()
{
    delete ui;

}
