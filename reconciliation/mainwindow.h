#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//Database Files
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
//------------------
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_importData_clicked();

    void on_void_btn_clicked();

    void on_conc_btn_clicked();

    void on_delete_btn_clicked();

    void on_concBtn_clicked();

    void on_progressBar_valueChanged(int value);

    void on_error_btn_clicked();


private:
    Ui::MainWindow *ui;
    QSqlDatabase reconciliationDb;
};

#endif // MAINWINDOW_H
