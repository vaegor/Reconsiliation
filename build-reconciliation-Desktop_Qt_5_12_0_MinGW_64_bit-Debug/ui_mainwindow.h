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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QTabWidget *showTabs;
    QWidget *Conciliation;
    QTableView *tableView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *concBtn;
    QPushButton *conc_btn;
    QPushButton *void_btn;
    QPushButton *error_btn;
    QPushButton *importData;
    QPushButton *delete_btn;
    QWidget *Bank;
    QLabel *connect_lbl;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1730, 923);
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
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        centralWidget->setPalette(palette1);
        centralWidget->setStyleSheet(QString::fromUtf8("QWidget#centralWidget\n"
"{\n"
"background-color: white;\n"
"border-top: 30px solid black;\n"
"\n"
"}"));
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
        widget->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"background-color: #204060;\n"
"border-style: none;\n"
"}"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, -1, -1, 0);
        verticalSpacer = new QSpacerItem(20, 500, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(138, 9957, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer_2, 4, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush10(QColor(32, 64, 96, 255));
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
"	color: cyan;\n"
"}"));
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        progressBar = new QProgressBar(widget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        gridLayout_2->addWidget(progressBar, 2, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        showTabs = new QTabWidget(centralWidget);
        showTabs->setObjectName(QString::fromUtf8("showTabs"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(showTabs->sizePolicy().hasHeightForWidth());
        showTabs->setSizePolicy(sizePolicy2);
        showTabs->setMaximumSize(QSize(2000, 16777215));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush14(QColor(0, 25, 255, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        showTabs->setPalette(palette3);
        showTabs->setContextMenuPolicy(Qt::DefaultContextMenu);
        showTabs->setAcceptDrops(true);
        showTabs->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #0099ff;\n"
"color: white;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background: #2eb8b8;\n"
"	border-style: none;\n"
"\n"
"}\n"
"\n"
"QTabBar::tab\n"
"{\n"
"	background-color: #00bfff;\n"
"	color: white;\n"
"	font-size: 14px;\n"
"	width: 150px;\n"
"	height: 30px;\n"
"	border-style: none;\n"
"border-color: white;\n"
"}\n"
"QTabBar::tab:selected{\n"
"	background-Color: white;\n"
"	color: black;\n"
"	border-right-style: solid;\n"
"	border-color: gray;\n"
"	border-width: 5px;\n"
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
        Conciliation->setMinimumSize(QSize(1000, 0));
        Conciliation->setMaximumSize(QSize(1250, 16777215));
        Conciliation->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"border-width: 0px;\n"
"}"));
        tableView = new QTableView(Conciliation);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 40, 720, 800));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy3);
        tableView->setMinimumSize(QSize(20, 600));
        tableView->setMaximumSize(QSize(750, 10000));
        QPalette palette4;
        QBrush brush15(QColor(51, 102, 153, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush15);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush15);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush15);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush16(QColor(255, 220, 41, 128));
        brush16.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush16);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush15);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush15);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush15);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
        tableView->setPalette(palette4);
        tableView->setAutoFillBackground(true);
        tableView->setStyleSheet(QString::fromUtf8("\n"
"QTableView\n"
"{\n"
"background-color: white;\n"
"color: #336699;\n"
"border-style: none;\n"
"}\n"
"\n"
"QScrollBar:vertical{\n"
"	background: #336699;\n"
"	border-style: solid;\n"
"	border: 1px;	\n"
"}\n"
"QScrollBar::handle:vertical{\n"
"	background: #336699;\n"
"	min-height: 5px;\n"
"	\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: white;\n"
"	border-style: solid;\n"
"	height: 0px;\n"
"}\n"
"QHeaderView::section\n"
"{\n"
"	background-color: #336699;\n"
"	color: white;\n"
"	border-style: none;\n"
"}\n"
""));
        tableView->setFrameShape(QFrame::WinPanel);
        tableView->setFrameShadow(QFrame::Raised);
        tableView->setMidLineWidth(1);
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableView->setGridStyle(Qt::DashLine);
        tableView->setSortingEnabled(true);
        verticalLayoutWidget = new QWidget(Conciliation);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(800, 40, 202, 236));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush17(QColor(255, 127, 127, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush17);
        QBrush brush18(QColor(255, 63, 63, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush18);
        QBrush brush19(QColor(127, 0, 0, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush19);
        QBrush brush20(QColor(170, 0, 0, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush17);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush17);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush18);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush17);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush17);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush18);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush19);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush19);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush21(QColor(255, 0, 0, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush21);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
        verticalLayoutWidget->setPalette(palette5);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Rockwell"));
        font1.setPointSize(11);
        verticalLayoutWidget->setFont(font1);
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        concBtn = new QPushButton(verticalLayoutWidget);
        concBtn->setObjectName(QString::fromUtf8("concBtn"));
        concBtn->setEnabled(true);
        concBtn->setMinimumSize(QSize(200, 0));
        concBtn->setMaximumSize(QSize(300, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        concBtn->setFont(font2);
        concBtn->setAutoFillBackground(false);
        concBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: white;\n"
"color: black;\n"
"border-style: none;\n"
"padding-bottom: 10px;\n"
"padding-top: 10px;\n"
"padding-right: 20px;\n"
"padding-left: 20px;\n"
"font-size: 12px;\n"
"font-family: \"Verdana\";\n"
"text-align: left;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background: #005c99;\n"
"	color: white;\n"
"}"));

        verticalLayout->addWidget(concBtn);

        conc_btn = new QPushButton(verticalLayoutWidget);
        conc_btn->setObjectName(QString::fromUtf8("conc_btn"));
        conc_btn->setMinimumSize(QSize(200, 0));
        conc_btn->setMaximumSize(QSize(300, 16777215));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush17);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush18);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush19);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush17);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush17);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush18);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush17);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush17);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush18);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush21);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
        conc_btn->setPalette(palette6);
        conc_btn->setFont(font2);
        conc_btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: white;\n"
"color: black;\n"
"border-style: none;\n"
"padding-bottom: 10px;\n"
"padding-top: 10px;\n"
"padding-right: 20px;\n"
"padding-left: 20px;\n"
"font-size: 12px;\n"
"font-family: \"Verdana\";\n"
"text-align: left;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background: #005c99;\n"
"	color: white;\n"
"}"));

        verticalLayout->addWidget(conc_btn);

        void_btn = new QPushButton(verticalLayoutWidget);
        void_btn->setObjectName(QString::fromUtf8("void_btn"));
        void_btn->setMinimumSize(QSize(200, 0));
        void_btn->setMaximumSize(QSize(300, 16777215));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush17);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush18);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush19);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush17);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush17);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush18);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush17);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush17);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush18);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush21);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
        void_btn->setPalette(palette7);
        void_btn->setFont(font2);
        void_btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: white;\n"
"color: black;\n"
"border-style: none;\n"
"padding-bottom: 10px;\n"
"padding-top: 10px;\n"
"padding-right: 20px;\n"
"padding-left: 20px;\n"
"font-size: 12px;\n"
"font-family: \"Verdana\";\n"
"text-align: left;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background: #005c99;\n"
"	color: white;\n"
"}"));

        verticalLayout->addWidget(void_btn);

        error_btn = new QPushButton(verticalLayoutWidget);
        error_btn->setObjectName(QString::fromUtf8("error_btn"));
        error_btn->setMinimumSize(QSize(200, 0));
        error_btn->setMaximumSize(QSize(300, 16777215));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush17);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush18);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush19);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush17);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush17);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush18);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush17);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush17);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush18);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush21);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
        error_btn->setPalette(palette8);
        error_btn->setFont(font2);
        error_btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: white;\n"
"color: black;\n"
"border-style: none;\n"
"padding-bottom: 10px;\n"
"padding-top: 10px;\n"
"padding-right: 20px;\n"
"padding-left: 20px;\n"
"font-size: 12px;\n"
"font-family: \"Verdana\";\n"
"text-align: left;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background: #005c99;\n"
"	color: white;\n"
"}"));

        verticalLayout->addWidget(error_btn);

        importData = new QPushButton(verticalLayoutWidget);
        importData->setObjectName(QString::fromUtf8("importData"));
        importData->setMinimumSize(QSize(200, 0));
        importData->setMaximumSize(QSize(300, 16777215));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush6);
        QBrush brush22(QColor(179, 195, 255, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush22);
        QBrush brush23(QColor(115, 145, 255, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush23);
        QBrush brush24(QColor(25, 47, 127, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush24);
        QBrush brush25(QColor(34, 63, 170, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush25);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush26(QColor(153, 175, 255, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush26);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush22);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush23);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush24);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush25);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush26);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush22);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush23);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush25);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush27(QColor(51, 95, 255, 255));
        brush27.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush27);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
        importData->setPalette(palette9);
        importData->setFont(font2);
        importData->setAutoFillBackground(false);
        importData->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: white;\n"
"color: black;\n"
"border-style: none;\n"
"padding-bottom: 10px;\n"
"padding-top: 10px;\n"
"padding-right: 20px;\n"
"padding-left: 20px;\n"
"font-size: 12px;\n"
"font-family: \"Verdana\";\n"
"text-align: left;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background: #005c99;\n"
"	color: white;\n"
"}"));

        verticalLayout->addWidget(importData);

        delete_btn = new QPushButton(verticalLayoutWidget);
        delete_btn->setObjectName(QString::fromUtf8("delete_btn"));
        delete_btn->setMinimumSize(QSize(200, 0));
        delete_btn->setMaximumSize(QSize(300, 16777215));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush6);
        QBrush brush28(QColor(184, 179, 255, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush28);
        QBrush brush29(QColor(124, 115, 255, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush29);
        QBrush brush30(QColor(32, 25, 127, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush30);
        QBrush brush31(QColor(42, 34, 170, 255));
        brush31.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush31);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush32(QColor(159, 153, 255, 255));
        brush32.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush32);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush28);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush29);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush30);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush31);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush32);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush28);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush29);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush30);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush31);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush33(QColor(64, 51, 255, 255));
        brush33.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush33);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
        delete_btn->setPalette(palette10);
        delete_btn->setFont(font2);
        delete_btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: white;\n"
"color: black;\n"
"border-style: none;\n"
"padding-bottom: 10px;\n"
"padding-top: 10px;\n"
"padding-right: 20px;\n"
"padding-left: 20px;\n"
"font-size: 12px;\n"
"font-family: \"Verdana\";\n"
"text-align: left;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background: #005c99;\n"
"	color: white;\n"
"}"));

        verticalLayout->addWidget(delete_btn);

        showTabs->addTab(Conciliation, QString());
        Bank = new QWidget();
        Bank->setObjectName(QString::fromUtf8("Bank"));
        showTabs->addTab(Bank, QString());

        horizontalLayout->addWidget(showTabs);

        connect_lbl = new QLabel(centralWidget);
        connect_lbl->setObjectName(QString::fromUtf8("connect_lbl"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        connect_lbl->setPalette(palette11);

        horizontalLayout->addWidget(connect_lbl, 0, Qt::AlignLeft|Qt::AlignTop);


        gridLayout->addLayout(horizontalLayout, 0, 3, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        showTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Reconciliation", nullptr));
        label->setText(QApplication::translate("MainWindow", "Dasboard", nullptr));
        concBtn->setText(QApplication::translate("MainWindow", "Conciliate", nullptr));
        conc_btn->setText(QApplication::translate("MainWindow", "1.1 Agency Sweep", nullptr));
        void_btn->setText(QApplication::translate("MainWindow", "find voids", nullptr));
        error_btn->setText(QApplication::translate("MainWindow", "Find Errors", nullptr));
        importData->setText(QApplication::translate("MainWindow", "Import Conciliation Data", nullptr));
        delete_btn->setText(QApplication::translate("MainWindow", "Delete ALL", nullptr));
        showTabs->setTabText(showTabs->indexOf(Conciliation), QApplication::translate("MainWindow", "Conciliation", nullptr));
        showTabs->setTabText(showTabs->indexOf(Bank), QApplication::translate("MainWindow", "Bank", nullptr));
        connect_lbl->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
