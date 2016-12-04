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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
