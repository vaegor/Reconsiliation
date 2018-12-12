#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "viewconc.h"
#include "QLabel"

//Import data
#include "conc.h"
#include "bank.h"
#include "date.h"
#include "vector.h"
#include <QPixmap>
#include <QDebug>
using std::string;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//Start Database ---------------------------------------
    reconciliationDb = QSqlDatabase::addDatabase("QSQLITE");
    reconciliationDb.setDatabaseName("C:/Users/calix/Documents/Programs/reconciliation/data/reconciliationDb");
    if(!reconciliationDb.open())
        ui->connect_lbl->setText("fail");
    else {
        ui->connect_lbl->setText("Connection to database succesfull.");
    }
//--------------------------------------------------------------
//Show Database Conciliation
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery * qry = new QSqlQuery(reconciliationDb);
    qry->prepare("select * from conciliation");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
//---------------------------------------------------------------
   // viewConc * vC = new viewConc;
   // vC->show();
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_importData_clicked()
{
    vector<conc> * conciliationV = new vector<conc>("C:/Users/calix/Documents/Programs/reconciliation/data/conciliation.txt");


    int rows = conciliationV->getLines();
    for(int i = 0; i < rows; i++)
    {
        conc thisConc = conciliationV->getRecord(i);
        QSqlQueryModel * modal = new QSqlQueryModel();
        QSqlQuery * ConciliationData = new QSqlQuery(reconciliationDb);

        int concID = thisConc.getConcID();
        int ID = thisConc.getReciptID();
        string name = thisConc.getName();
        string code = thisConc.getCode();
        string company = thisConc.getCompany();
        string policy = thisConc.getPolicy();
        float amount = thisConc.getPrice();
        string user = thisConc.getUser();
        string thisDate = thisConc.getDateS();

        if(concID == 0)
            concID = 66666;


        string h ="INSERT INTO conciliation ( concID, reciptDate, name , code , company, policyN, amount, agent, bankID) values("+ std::to_string(concID)+" , '"+thisDate+"' ,'"+ name +"' ,'"+ code +"', '"+ company +"', '"+ policy +"', "+ std::to_string(amount) +", '"+ user +"',  3 )";
        ConciliationData->prepare(QString::fromStdString(h));
        ConciliationData->exec();
        modal->setQuery(*ConciliationData);

    }
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery * qry = new QSqlQuery(reconciliationDb);
    qry->prepare("select * from conciliation");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

}



void MainWindow::on_void_btn_clicked()
{
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery * qry = new QSqlQuery(reconciliationDb);
    qry->prepare("select * from conciliation WHERE amount = 0");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
}

void MainWindow::on_conc_btn_clicked()
{
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery * qry = new QSqlQuery(reconciliationDb);
    qry->prepare("select * from conciliation WHERE code = '1.1 - Agency Sweep'");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
}
