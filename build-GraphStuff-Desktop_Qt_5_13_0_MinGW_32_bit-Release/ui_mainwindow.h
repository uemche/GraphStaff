/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCustomPlot *widget;
    QPushButton *Line;
    QPushButton *Parabola;
    QPushButton *Cube;
    QPushButton *Giperbola;
    QPushButton *Exp;
    QPushButton *Cos;
    QPushButton *Sin;
    QPushButton *Tan;
    QPushButton *Sigmoida;
    QPushButton *Clear;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QCustomPlot(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 611, 541));
        Line = new QPushButton(centralWidget);
        Line->setObjectName(QString::fromUtf8("Line"));
        Line->setGeometry(QRect(630, 10, 160, 30));
        Parabola = new QPushButton(centralWidget);
        Parabola->setObjectName(QString::fromUtf8("Parabola"));
        Parabola->setGeometry(QRect(630, 50, 160, 30));
        Cube = new QPushButton(centralWidget);
        Cube->setObjectName(QString::fromUtf8("Cube"));
        Cube->setGeometry(QRect(630, 90, 160, 30));
        Giperbola = new QPushButton(centralWidget);
        Giperbola->setObjectName(QString::fromUtf8("Giperbola"));
        Giperbola->setGeometry(QRect(630, 130, 160, 30));
        Exp = new QPushButton(centralWidget);
        Exp->setObjectName(QString::fromUtf8("Exp"));
        Exp->setGeometry(QRect(630, 170, 160, 30));
        Cos = new QPushButton(centralWidget);
        Cos->setObjectName(QString::fromUtf8("Cos"));
        Cos->setGeometry(QRect(630, 210, 160, 30));
        Sin = new QPushButton(centralWidget);
        Sin->setObjectName(QString::fromUtf8("Sin"));
        Sin->setGeometry(QRect(630, 250, 160, 30));
        Tan = new QPushButton(centralWidget);
        Tan->setObjectName(QString::fromUtf8("Tan"));
        Tan->setGeometry(QRect(630, 290, 160, 30));
        Sigmoida = new QPushButton(centralWidget);
        Sigmoida->setObjectName(QString::fromUtf8("Sigmoida"));
        Sigmoida->setGeometry(QRect(630, 330, 160, 30));
        Clear = new QPushButton(centralWidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setGeometry(QRect(630, 520, 160, 30));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "GraphStuff", nullptr));
        Line->setText(QCoreApplication::translate("MainWindow", "y = x", nullptr));
        Parabola->setText(QCoreApplication::translate("MainWindow", "y = x^2", nullptr));
        Cube->setText(QCoreApplication::translate("MainWindow", "y = x^3", nullptr));
        Giperbola->setText(QCoreApplication::translate("MainWindow", "y = 1/x", nullptr));
        Exp->setText(QCoreApplication::translate("MainWindow", "y = e^x", nullptr));
        Cos->setText(QCoreApplication::translate("MainWindow", "y = cos(x)", nullptr));
        Sin->setText(QCoreApplication::translate("MainWindow", "y = sin(x)", nullptr));
        Tan->setText(QCoreApplication::translate("MainWindow", "y = tg(x)", nullptr));
        Sigmoida->setText(QCoreApplication::translate("MainWindow", "y = 1/(1+e^x)", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\200\320\260\320\261\320\276\321\207\321\203\321\216 \320\276\320\261\320\273\320\260\321\201\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
