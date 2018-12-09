/********************************************************************************
** Form generated from reading UI file 'viewconc.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWCONC_H
#define UI_VIEWCONC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_viewConc
{
public:
    QTableView *concTable;

    void setupUi(QDialog *viewConc)
    {
        if (viewConc->objectName().isEmpty())
            viewConc->setObjectName(QString::fromUtf8("viewConc"));
        viewConc->resize(1067, 619);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        viewConc->setPalette(palette);
        concTable = new QTableView(viewConc);
        concTable->setObjectName(QString::fromUtf8("concTable"));
        concTable->setGeometry(QRect(30, 100, 981, 431));

        retranslateUi(viewConc);

        QMetaObject::connectSlotsByName(viewConc);
    } // setupUi

    void retranslateUi(QDialog *viewConc)
    {
        viewConc->setWindowTitle(QApplication::translate("viewConc", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewConc: public Ui_viewConc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCONC_H
