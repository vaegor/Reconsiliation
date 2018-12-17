#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
#include <QMovie>
#include <QLabel>
#include <QMediaPlayer>
#include <QFontDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //font
    QFontDatabase::addApplicationFont(":/fonts/SpaceAge-Regular.ttf");



    QMovie *movie = new QMovie("C:/Users/MTS-01/Documents/Reconciliation/reconciliation/asstes/cats.gif");
    //QMovie *movie = new QMovie("C:/Users/calix/Documents/Programs/reconciliation/asstes/cats.gif");
    /*QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("C:/Users/calix/Music/a.mp3"));
    player->setVolume(50);
    player->play();*/
    QLabel intro;
    intro.setMovie(movie);
    movie->start();
    intro.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    QTimer t;

    intro.show();

    QTimer::singleShot(1000,&intro,SLOT(close()));

    QTimer::singleShot(1000,&w,SLOT(show()));
  w.setWindowState(Qt::WindowMaximized);


    return a.exec();
}
