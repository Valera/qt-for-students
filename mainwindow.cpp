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

    p.drawEllipse(QPointF(x0, y0), 20, 20); // Рисуем эллипс в точке (100, 100) с радиусами 20 и 20 по X и Y.
}

// Метод для изменения x0 и y0 из внешних функций и объектов.
// Заметьте, что аргументы названы так, чтобы отличаться от свойств,
// и не было конфликта между именами.
void MainWindow::set_params(int x0_, int y0_)
{
    x0 = x0_;
    y0 = y0_;
}
