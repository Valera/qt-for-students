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
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    // Для рисования поверх виджета нужно переопределить метод с именем PaintEvent.
    // Очень важно, чтобы имя и сигнатура метода точно совпадали с теми, что написаны здесь,
    // назвать метод по другому и добавлять аргументы нельзя.
    // Описание метода см. в файле mainwindow.cpp
    virtual void paintEvent(QPaintEvent *);

    void set_params(int, int);
private:
    Ui::MainWindow *ui;

    // Свойства объекта, под них выделяется память при создании объекта и они сохраняют
    // свои значения между вызовами различных методов, существуя, пока существует объект.
    // Размещены в блоке private, поэтому доступны только самому объекту из его методов.
    // Для других объектов мы сделаем метод set_params, который позволит изменять x0 и y0
    // извне.
    int x0, y0;
};

#endif // MAINWINDOW_H
