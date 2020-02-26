#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
    void on_Line_clicked();

    void on_Clear_clicked();

    void on_Parabola_clicked();

    void on_Cube_clicked();

    void on_Giperbola_clicked();

    void on_Exp_clicked();

    void on_Cos_clicked();

    void on_Sin_clicked();

    void on_Tan_clicked();

    void on_Sigmoida_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
