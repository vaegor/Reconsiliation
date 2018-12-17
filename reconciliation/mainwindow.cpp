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
#include <string>
#include <QPushButton>
using std::string;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //====================================================================
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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_importData_clicked()
{
    //Upload New Data to vector.
    vector<conc> * conciliationV = new vector<conc>("C:/Users/calix/Documents/Programs/reconciliation/data/conciliation.txt");

    //Insert data from vector into database.
    int rows = 0;
            rows = conciliationV->getLines();
    for(int i = 0; i < rows; i++)
    {
        conc  thisConc = conciliationV->getRecord(i);
      //  QSqlQueryModel * modal = new QSqlQueryModel();
        QSqlQuery * ConciliationData = new QSqlQuery(reconciliationDb);
        int concID = thisConc.getConcID();
        int reciptID = thisConc.getReciptID();
        string name = thisConc.getName();
        string code = thisConc.getCode();
        string company = thisConc.getCompany();
        string policy = thisConc.getPolicy();
        double amount = 0;
        amount = thisConc.getPrice();
        string agent = thisConc.getUser();
        string thisDate = thisConc.getDateS();
       // qDebug() << QString::fromStdString(name) << concID << QString::fromStdString( thisDate) << amount << QString::fromStdString(company);
//=================================================================
        if (company.find('\'') != std::string::npos)
        {
            size_t s = company.find('\'');
            company.insert(s,"\'");
        }
//==================================================================

        string sqlEntry ="INSERT INTO conciliation ( concID,reciptID, reciptDate, name , code , company, policy, amount, agent, bankID) values("+ std::to_string(concID)+" , " + std::to_string(reciptID) + " , '"+thisDate+"' , '"+ name +"' ,'"+ code +"', '" + company +"', '"+ policy +"', "+ std::to_string(amount) +", '"+ agent +"' , 0 )";

        ConciliationData->prepare(QString::fromStdString(sqlEntry));
        ConciliationData->exec();
        delete ConciliationData;
        ui->progressBar->valueChanged(i);

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

void MainWindow::on_delete_btn_clicked()
{
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery * qry = new QSqlQuery(reconciliationDb);
    qry->prepare("delete from conciliation");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
}

void MainWindow::on_concBtn_clicked()
{
    vector<conc> * conciliationV = new vector<conc>("C:/Users/calix/Documents/Programs/reconciliation/data/conciliation.txt");
    vector<bank>  bankV("C:/Users/calix/Documents/Programs/reconciliation/data/bank.txt");
    conciliationV->concilidiate(bankV);
    ui->progressBar->valueChanged(01);
    int r = conciliationV->getLines();
    for(int i = 0; i < r; i++)
    {
     qDebug() << i;
    QSqlQuery * qry = new QSqlQuery(reconciliationDb);
    conc myConc = conciliationV->getRecord(i);
    int bankID = myConc.getBankID();
    qDebug() << bankID;

    string sqlEntry ="UPDATE conciliation SET bankID = " + std::to_string(bankID) + " WHERE concID = " +  std::to_string(i+1) + ";";

    qry->prepare(QString::fromStdString(sqlEntry));
    qry->exec();

    }
    ui->progressBar->valueChanged(50);

    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery * qry = new QSqlQuery(reconciliationDb);
    qry->prepare("select * from conciliation");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    ui->progressBar->valueChanged(100);
}

void MainWindow::on_progressBar_valueChanged(int value)
{
    ui->progressBar->setValue(value);
}

void MainWindow::on_error_btn_clicked()
{
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery * qry = new QSqlQuery(reconciliationDb);
    qry->prepare("select * from conciliation where bankID = 0 AND code = '1.1 - Agency Sweep'; ");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
}
