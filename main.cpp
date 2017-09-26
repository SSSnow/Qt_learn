#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show(); //show a MainWindow

//    QLabel label("Hello, world");
//    label.show(); //show a label of "Hello world"

    QPushButton button("Quit");
    //QObject::connect(&button, &QPushButton::clicked, &QApplication::quit);
    QObject::connect(&button, &QPushButton::clicked, [](bool){qDebug()<< "You clicked me!";});

    button.show();

    return a.exec();
}
