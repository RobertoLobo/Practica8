#include "mainwindow.h"
#include "Clases.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    /*
    auto n1 = new Neurona(1, 1.1, 1, 1, 100, 100, 100);
    adminNeuronas->agregarCola(n1);
    adminNeuronas->agregarCola(new Neurona(2, 2.2, 2, 2, 200, 200, 200));
    adminNeuronas->agregarPila(new Neurona(3, 3.333, 3, 3, 300, 300, 300));
    adminNeuronas->listar();
    adminNeuronas->imprimir(n1);
    */
    return a.exec();
}
