#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPainter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter p(this); // Объект, с помощью которого будет выполняться всё рисование на виджете.

    p.drawEllipse(QPointF(100, 100), 20, 20); // Рисуем эллипс в точке (100, 100) с радиусами 20 и 20 по X и Y.
}
