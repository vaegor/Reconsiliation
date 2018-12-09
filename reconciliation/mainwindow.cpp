#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/assets/logo.png");
    ui->logo_pix->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;

}
