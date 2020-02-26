#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qcustomplot.h"
#include "math.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->widget->xAxis->setLabel("x");
    ui->widget->yAxis->setLabel("y");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Line_clicked()
{
    double a = -10;
    double b = 10;
    double h = 0.01;
    int N = int((b-a)/h + 2);
    QVector<double> x(N), y(N);

    int i = 0;
    for(double X = a; X <= b; X += h)
    {
        x[i] = X;
        y[i] = X;
        i++;
    }

    ui -> widget -> clearGraphs();
    ui -> widget -> addGraph();
    ui -> widget -> graph(0) -> setData(x,y);


    double minY = y[0], maxY = y[0];
        for (int i=1; i<N; i++)
        {
            if (y[i]<minY) minY = y[i];
            if (y[i]>maxY) maxY = y[i];
        }
    ui->widget->xAxis->setRange(a, b);
    ui->widget->yAxis->setRange(minY, maxY);
    ui->widget->replot();
}

void MainWindow::on_Clear_clicked()
{
    ui -> widget -> clearGraphs();
    ui->widget->replot();
}

void MainWindow::on_Parabola_clicked()
{
    double a = -10;
    double b = 10;
    double h = 0.01;
    int N = int((b-a)/h + 2);
    QVector<double> x(N), y(N);

    int i = 0;
    for(double X = a; X <= b; X += h)
    {
        x[i] = X;
        y[i] = X*X;
        i++;
    }

    ui -> widget -> clearGraphs();
    ui -> widget -> addGraph();
    ui -> widget -> graph(0) -> setData(x,y);


    double minY = y[0], maxY = y[0];
        for (int i=1; i<N; i++)
        {
            if (y[i]<minY) minY = y[i];
            if (y[i]>maxY) maxY = y[i];
        }
    ui->widget->xAxis->setRange(a, b);
    ui->widget->yAxis->setRange(minY, maxY);
    ui->widget->replot();
}

void MainWindow::on_Cube_clicked()
{
    double a = -10;
    double b = 10;
    double h = 0.01;
    int N = int((b-a)/h + 2);
    QVector<double> x(N), y(N);

    int i = 0;
    for(double X = a; X <= b; X += h)
    {
        x[i] = X;
        y[i] = X*X*X;
        i++;
    }

    ui -> widget -> clearGraphs();
    ui -> widget -> addGraph();
    ui -> widget -> graph(0) -> setData(x,y);


    double minY = y[0], maxY = y[0];
        for (int i=1; i<N; i++)
        {
            if (y[i]<minY) minY = y[i];
            if (y[i]>maxY) maxY = y[i];
        }
    ui->widget->xAxis->setRange(a, b);
    ui->widget->yAxis->setRange(minY, maxY);
    ui->widget->replot();
}

void MainWindow::on_Giperbola_clicked()
{
    double a = -10;
    double b = 10;
    double h = 0.01;
    int N = int((b-a)/h + 2);
    QVector<double> x(N), y(N);

    int i = 0;
    for(double X = a; X <= b; X += h)
    {
        x[i] = X;
        y[i] = 1/X;
        i++;
    }

    ui -> widget -> clearGraphs();
    ui -> widget -> addGraph();
    ui -> widget -> graph(0) -> setData(x,y);


    ui->widget->xAxis->setRange(a, b);
    ui->widget->yAxis->setRange(a, b);
    ui->widget->replot();
}

void MainWindow::on_Exp_clicked()
{
    double a = 0;
    double b = 5;
    double h = 0.01;
    int N = int((b-a)/h + 2);
    QVector<double> x(N), y(N);

    int i = 0;
    for(double X = a; X <= b; X += h)
    {
        x[i] = X;
        y[i] = exp(X);
        i++;
    }

    ui -> widget -> clearGraphs();
    ui -> widget -> addGraph();
    ui -> widget -> graph(0) -> setData(x,y);


    double minY = y[0], maxY = y[0];
        for (int i=1; i<N; i++)
        {
            if (y[i]<minY) minY = y[i];
            if (y[i]>maxY) maxY = y[i];
        }
    ui->widget->xAxis->setRange(a, b);
    ui->widget->yAxis->setRange(minY, maxY);
    ui->widget->replot();
}

void MainWindow::on_Cos_clicked()
{
    double a = -10;
    double b = 10;
    double h = 0.01;
    int N = int((b-a)/h + 2);
    QVector<double> x(N), y(N);

    int i = 0;
    for(double X = a; X <= b; X += h)
    {
        x[i] = X;
        y[i] = cos(X);
        i++;
    }

    ui -> widget -> clearGraphs();
    ui -> widget -> addGraph();
    ui -> widget -> graph(0) -> setData(x,y);


    double minY = y[0], maxY = y[0];
        for (int i=1; i<N; i++)
        {
            if (y[i]<minY) minY = y[i];
            if (y[i]>maxY) maxY = y[i];
        }
    ui->widget->xAxis->setRange(a, b);
    ui->widget->yAxis->setRange(minY, maxY);
    ui->widget->replot();
}

void MainWindow::on_Sin_clicked()
{
    double a = -10;
    double b = 10;
    double h = 0.01;
    int N = int((b-a)/h + 2);
    QVector<double> x(N), y(N);

    int i = 0;
    for(double X = a; X <= b; X += h)
    {
        x[i] = X;
        y[i] = sin(X);
        i++;
    }

    ui -> widget -> clearGraphs();
    ui -> widget -> addGraph();
    ui -> widget -> graph(0) -> setData(x,y);


    double minY = y[0], maxY = y[0];
        for (int i=1; i<N; i++)
        {
            if (y[i]<minY) minY = y[i];
            if (y[i]>maxY) maxY = y[i];
        }
    ui->widget->xAxis->setRange(a, b);
    ui->widget->yAxis->setRange(minY, maxY);
    ui->widget->replot();
}

void MainWindow::on_Tan_clicked()
{
    double a = -10;
    double b = 10;
    double h = 0.01;
    int N = int((b-a)/h + 2);
    QVector<double> x(N), y(N);

    int i = 0;
    for(double X = a; X <= b; X += h)
    {
        x[i] = X;
        y[i] = tan(X);
        i++;
    }

    ui -> widget -> clearGraphs();
    ui -> widget -> addGraph();
    ui -> widget -> graph(0) -> setData(x,y);

    ui->widget->xAxis->setRange(a, b);
    ui->widget->yAxis->setRange(a, b);
    ui->widget->replot();
}

void MainWindow::on_Sigmoida_clicked()
{
    double a = -10;
    double b = 10;
    double h = 0.01;
    int N = int((b-a)/h + 2);
    QVector<double> x(N), y(N);

    int i = 0;
    for(double X = a; X <= b; X += h)
    {
        x[i] = X;
        y[i] = 1/(1+exp(X));
        i++;
    }

    ui -> widget -> clearGraphs();
    ui -> widget -> addGraph();
    ui -> widget -> graph(0) -> setData(x,y);


    double minY = y[0], maxY = y[0];
        for (int i=1; i<N; i++)
        {
            if (y[i]<minY) minY = y[i];
            if (y[i]>maxY) maxY = y[i];
        }
    ui->widget->xAxis->setRange(a, b);
    ui->widget->yAxis->setRange(minY, maxY);
    ui->widget->replot();
}
