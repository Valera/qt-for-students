#include "mainwindow.h"
#include <QApplication>

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    // Пока мы не будем работать с полями ввода в графическом интерфейсе, так как это требует
    // некоторых дополнительных знаний библиотеки qt. Мы воспользуемся потоком стандартного ввода
    // _до_ создания окна и запуска цикла обработки событий qt. (Если бы мы попробовали что-то считать
    // со стандартного ввода во время работы с окном qt, окно бы заблокировалось до того, как мы
    // не введём данные в консоли.)

    // Не забудьте в настройках проекта в run settings поставить галку "Run in terminal",
    // чтобы открывался настоящий терминал (панелька внизу интерфейса qtcreator -- не настоящий,
    // в нём нельзя вводить значения в программу).

    int x0, y0;
    cout << "Enter coordinates of circle's center: ";
    cin >> x0 >> y0;

    QApplication a(argc, argv);
    MainWindow w;
    w.set_params(x0, y0); // Передаём виджету параметры.
    w.show();

    return a.exec();
}
