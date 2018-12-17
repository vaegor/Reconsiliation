/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer;
    QLabel *connect_lbl;
    QTabWidget *showTabs;
    QWidget *Conciliation;
    QTableView *tableView;
    QWidget *verticalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *delete_btn;
    QPushButton *importData;
    QPushButton *error_btn;
    QPushButton *void_btn;
    QPushButton *conc_btn;
    QPushButton *concBtn;
    QWidget *Bank;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1730, 610);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(27, 40, 69, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(127, 213, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(63, 191, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 85, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 113, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(255, 255, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8("logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/assets/logo.png"), QSize(), QIcon::Normal, QIcon::On);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"background-color: #1B2845;\n"
"\n"
""));
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        centralWidget->setPalette(palette1);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMaximumSize(QSize(225, 16777215));
        widget->setStyleSheet(QString::fromUtf8("background: #00192B;"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, -1, -1, 0);
        verticalSpacer_2 = new QSpacerItem(138, 9957, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer_2, 4, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush10(QColor(0, 25, 43, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush10);
        QBrush brush11(QColor(255, 255, 255, 128));
        brush11.setStyle(Qt::NoBrush);
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        QBrush brush12(QColor(255, 255, 255, 128));
        brush12.setStyle(Qt::NoBrush);
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        QBrush brush13(QColor(255, 255, 255, 128));
        brush13.setStyle(Qt::NoBrush);
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
        label->setPalette(palette2);
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic,sans-serif"));
        label->setFont(font);
        label->setContextMenuPolicy(Qt::DefaultContextMenu);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	font-size: 25px;\n"
"	font-family: Century Gothic, sans-serif;\n"
"}\n"
"QLabel:hover\n"
"{\n"
"	color: blue;\n"
"}"));
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        progressBar = new QProgressBar(widget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        gridLayout_2->addWidget(progressBar, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 500, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        connect_lbl = new QLabel(centralWidget);
        connect_lbl->setObjectName(QString::fromUtf8("connect_lbl"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        connect_lbl->setPalette(palette3);

        gridLayout->addWidget(connect_lbl, 0, 3, 1, 1);

        showTabs = new QTabWidget(centralWidget);
        showTabs->setObjectName(QString::fromUtf8("showTabs"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(showTabs->sizePolicy().hasHeightForWidth());
        showTabs->setSizePolicy(sizePolicy2);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush14(QColor(0, 25, 255, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        showTabs->setPalette(palette4);
        showTabs->setAcceptDrops(true);
        showTabs->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #0099ff;\n"
"color: white;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background: #2eb8b8;\n"
"\n"
"}\n"
"QTabBar::tab\n"
"{\n"
"	background-color: 	 #00bfff;\n"
"	color: white;\n"
"	font-size: 14px;\n"
"	width: 150px;\n"
"	height: 30px;\n"
"	border-width: 0px;\n"
"	border-left-style: outset;\n"
"	tabb\n"
"}\n"
"QTabBar::tab:selected{\n"
"	background-Color: black;\n"
"}\n"
"QScrollBar:vertical{\n"
"	background: black;\n"
"}"));
        showTabs->setTabPosition(QTabWidget::North);
        showTabs->setTabShape(QTabWidget::Triangular);
        showTabs->setIconSize(QSize(50, 16));
        showTabs->setMovable(true);
        Conciliation = new QWidget();
        Conciliation->setObjectName(QString::fromUtf8("Conciliation"));
        Conciliation->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        tableView = new QTableView(Conciliation);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 60, 1201, 531));
        QPalette palette5;
        QBrush brush15(QColor(0, 74, 112, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush15);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush16(QColor(255, 220, 41, 128));
        brush16.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush16);
        QBrush brush17(QColor(0, 170, 255, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush17);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
        tableView->setPalette(palette5);
        tableView->setAutoFillBackground(true);
        tableView->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{background-color: white;\n"
"}\n"
"\n"
"QScrollBar:vertical{\n"
"	background: white;\n"
"}"));
        tableView->setFrameShape(QFrame::WinPanel);
        tableView->setFrameShadow(QFrame::Raised);
        tableView->setMidLineWidth(1);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableView->setGridStyle(Qt::DashLine);
        tableView->setSortingEnabled(true);
        verticalLayoutWidget = new QWidget(Conciliation);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 1, 1484, 66));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush18(QColor(255, 127, 127, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush18);
        QBrush brush19(QColor(255, 63, 63, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        QBrush brush20(QColor(127, 0, 0, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush20);
        QBrush brush21(QColor(170, 0, 0, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush18);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush18);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush19);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush18);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush18);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush22(QColor(255, 0, 0, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush22);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
        verticalLayoutWidget->setPalette(palette6);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Rockwell"));
        font1.setPointSize(11);
        verticalLayoutWidget->setFont(font1);
        horizontalLayout = new QHBoxLayout(verticalLayoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        delete_btn = new QPushButton(verticalLayoutWidget);
        delete_btn->setObjectName(QString::fromUtf8("delete_btn"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush23(QColor(0, 153, 255, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush23);
        QBrush brush24(QColor(184, 179, 255, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush24);
        QBrush brush25(QColor(124, 115, 255, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush25);
        QBrush brush26(QColor(32, 25, 127, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush26);
        QBrush brush27(QColor(42, 34, 170, 255));
        brush27.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush27);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush23);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush23);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush28(QColor(159, 153, 255, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush28);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush23);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush24);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush25);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush26);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush27);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush23);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush23);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush28);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush23);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush24);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush25);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush26);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush27);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush23);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush23);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush29(QColor(64, 51, 255, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush29);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
        delete_btn->setPalette(palette7);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        delete_btn->setFont(font2);
        delete_btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #0099ff;\n"
"color: white;\n"
"border-style: none;\n"
"padding-bottom: 25px;\n"
"padding-top: 25px;\n"
"padding-right: 25px;\n"
"padding-left: 20px;\n"
"font-size: 12px;\n"
"font-family: \"Verdana\";\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background: #005c99;\n"
"}"));

        horizontalLayout->addWidget(delete_btn);

        importData = new QPushButton(verticalLayoutWidget);
        importData->setObjectName(QString::fromUtf8("importData"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush23);
        QBrush brush30(QColor(179, 195, 255, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush30);
        QBrush brush31(QColor(115, 145, 255, 255));
        brush31.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush31);
        QBrush brush32(QColor(25, 47, 127, 255));
        brush32.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush32);
        QBrush brush33(QColor(34, 63, 170, 255));
        brush33.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush33);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush23);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush23);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush34(QColor(153, 175, 255, 255));
        brush34.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush34);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush23);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush30);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush31);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush32);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush33);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush23);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush23);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush34);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush23);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush30);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush31);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush32);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush33);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush23);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush23);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush35(QColor(51, 95, 255, 255));
        brush35.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush35);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
        importData->setPalette(palette8);
        importData->setFont(font2);
        importData->setAutoFillBackground(false);
        importData->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #0099ff;\n"
"color: white;\n"
"border-style: none;\n"
"padding-bottom: 25px;\n"
"padding-top: 25px;\n"
"padding-right: 25px;\n"
"padding-left: 20px;\n"
"font-size: 12px;\n"
"font-family: \"Verdana\";\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background: #005c99;\n"
"}"));

        horizontalLayout->addWidget(importData);

        error_btn = new QPushButton(verticalLayoutWidget);
        error_btn->setObjectName(QString::fromUtf8("error_btn"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush23);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush18);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush23);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush23);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush18);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush23);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush18);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush19);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush23);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush23);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush18);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush23);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush18);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush23);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush23);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush22);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
        error_btn->setPalette(palette9);
        error_btn->setFont(font2);
        error_btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #0099ff;\n"
"color: white;\n"
"border-style: none;\n"
"padding-bottom: 25px;\n"
"padding-top: 25px;\n"
"padding-right: 25px;\n"
"padding-left: 20px;\n"
"font-size: 12px;\n"
"font-family: \"Verdana\";\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background: #005c99;\n"
"}"));

        horizontalLayout->addWidget(error_btn);

        void_btn = new QPushButton(verticalLayoutWidget);
        void_btn->setObjectName(QString::fromUtf8("void_btn"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush23);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush18);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush23);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush23);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush18);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush23);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush18);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush19);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush23);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush23);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush18);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush23);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush18);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush23);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush23);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush22);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
        void_btn->setPalette(palette10);
        void_btn->setFont(font2);
        void_btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #0099ff;\n"
"color: white;\n"
"border-style: none;\n"
"padding-bottom: 25px;\n"
"padding-top: 25px;\n"
"padding-right: 25px;\n"
"padding-left: 20px;\n"
"font-size: 12px;\n"
"font-family: \"Verdana\";\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background: #005c99;\n"
"}"));

        horizontalLayout->addWidget(void_btn);

        conc_btn = new QPushButton(verticalLayoutWidget);
        conc_btn->setObjectName(QString::fromUtf8("conc_btn"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush23);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush18);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush23);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush23);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush18);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush23);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush18);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush19);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush23);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush23);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush18);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush23);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush18);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush23);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush23);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush22);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
        conc_btn->setPalette(palette11);
        conc_btn->setFont(font2);
        conc_btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #0099ff;\n"
"color: white;\n"
"border-style: none;\n"
"padding-bottom: 25px;\n"
"padding-top: 25px;\n"
"padding-right: 25px;\n"
"padding-left: 20px;\n"
"font-size: 12px;\n"
"font-family: \"Verdana\";\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background: #005c99;\n"
"}"));

        horizontalLayout->addWidget(conc_btn);

        concBtn = new QPushButton(verticalLayoutWidget);
        concBtn->setObjectName(QString::fromUtf8("concBtn"));
        concBtn->setEnabled(true);
        concBtn->setFont(font2);
        concBtn->setAutoFillBackground(false);
        concBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #0099ff;\n"
"color: white;\n"
"border-style: none;\n"
"padding-bottom: 15px;\n"
"padding-top: 15px;\n"
"padding-right: 25px;\n"
"padding-left: 20px;\n"
"font-size: 12px;\n"
"font-family: \"Verdana\";\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background: #005c99;\n"
"}"));

        horizontalLayout->addWidget(concBtn);

        showTabs->addTab(Conciliation, QString());
        Bank = new QWidget();
        Bank->setObjectName(QString::fromUtf8("Bank"));
        showTabs->addTab(Bank, QString());

        gridLayout->addWidget(showTabs, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        showTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Reconciliation", nullptr));
        label->setText(QApplication::translate("MainWindow", "Main Menu", nullptr));
        connect_lbl->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        delete_btn->setText(QApplication::translate("MainWindow", "Delete ALL", nullptr));
        importData->setText(QApplication::translate("MainWindow", "Import Conciliation Data", nullptr));
        error_btn->setText(QApplication::translate("MainWindow", "Find Errors", nullptr));
        void_btn->setText(QApplication::translate("MainWindow", "find voids", nullptr));
        conc_btn->setText(QApplication::translate("MainWindow", "1.1 Agency Sweep", nullptr));
        concBtn->setText(QApplication::translate("MainWindow", "Conciliate", nullptr));
        showTabs->setTabText(showTabs->indexOf(Conciliation), QApplication::translate("MainWindow", "Conciliation", nullptr));
        showTabs->setTabText(showTabs->indexOf(Bank), QApplication::translate("MainWindow", "Bank", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
