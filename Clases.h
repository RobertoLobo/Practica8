#ifndef CLASES_H
#define CLASES_H
#include <iostream>
#include <list>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <QPoint>
#include <QGraphicsLineItem>

typedef int posicion;


class Neurona{
private:
    int id;
    float voltaje;
    posicion x;
    posicion y;
    int red;
    int green;
    int blue;
public:
    Neurona(){
        id = 0;
        voltaje = 0;
        x = 0;
        y = 0;
        red = 0;
        green = 0;
        blue = 0;
    }
    Neurona(int id, float voltaje, posicion x, posicion y, int r, int g, int b){
        this->id = id;
        this->voltaje = voltaje;
        this->x = x;
        this->y = y;
        this->red = r;
        this->green = g;
        this->blue = b;
    }
    void putId(int id){this->id = id;}
    void putVoltaje(float voltaje){this->voltaje = voltaje;}
    void putX(posicion x){this->x = x;}
    void putY(posicion y){this->y = y;}
    void putRed(int red){this->red = red;}
    void putGreen(int green){this->green = green;}
    void putBlue(int blue){this->blue = blue;}

    int getId() const {return id;}
    float getVoltaje() const {return voltaje;}
    posicion getX(){return x;}
    posicion getY(){return y;}
    int getRed(){return red;}
    int getGreen(){return green;}
    int getBlue(){return blue;}
};

class AdminNeuronas{
private:
    std::list<Neurona*> neuronas;
    std::fstream archivo;
    int cuentaNeuronas;
public:
    AdminNeuronas(){
        cuentaNeuronas = 0;
    }
    bool agregarPila(Neurona * n){
        neuronas.push_front(n);
        cuentaNeuronas++;
        return true;
    }
    bool agregarCola(Neurona * n){
        neuronas.push_back(n);
        cuentaNeuronas++;
        return true;
    }
    bool guardarNeurona(Neurona * n){

        std::cout << "Neuronas #" << dameCuenta() << std::endl
                  << "ID: " << n->getId() << std::endl
                  << "Voltaje: " << n->getVoltaje() << std::endl
                  << "Cord X: " << n->getX() << std::endl
                  << "Cord Y: " << n->getY() << std::endl
                  << "Red: " << n->getRed() << std::endl
                  << "Green: " << n->getGreen() << std::endl
                  << "Blue: " << n->getBlue() << std::endl
                  << "\n";
    }
    bool guardarNeuronas(std::string fileName){
        std::cout << "Guardando archivo " << fileName << "...";
        archivo.open(fileName,std::ios_base::out);
        if (archivo.is_open()){
            archivo << std::to_string(cuentaNeuronas) << "|" << "Total" << std::endl;
            for(auto & n : neuronas){
                archivo << n->getId() << "|"
                        << n->getVoltaje() << "|"
                        << n->getX() << "|"
                        << n->getY() << "|"
                        << n->getRed() << "|"
                        << n->getGreen() << "|"
                        << n->getBlue() << "," << std::endl;
                std::cout << "Neurona guardada.\n";
            }
            archivo.close();
            std::cout << "Hecho." << std::endl;
            return true;
        }
        else{
            std::cout << "No se pudo abrir el archivo." << std::endl;
            return false;
        }
    }
    bool cargarNeuronas(std::string nombreArchivo){
        std::string cadena;
        //std::stringstream ss;
        //std::vector<std::string> seglist;
        short contador;
        int id;
        float voltaje;
        posicion x;
        posicion y;
        int red;
        int green;
        int blue;
        std::cout << "Cargando archivo " << nombreArchivo << "..." << std::endl;
        archivo.open(nombreArchivo,std::ios_base::in);
        if (archivo.is_open()){
            archivo >> contador;
            std::getline(archivo,cadena);
            std::cout << "Cuenta Neuronas: " << cuentaNeuronas << std::endl;
            for(int i=0;i < contador;i++){//while(!archivo.eof()){
                std::getline(archivo,cadena);
                std::replace(cadena.begin(), cadena.end(), '|', ' '); // Reemplazar '|' por espacios para simplificar la separación
                std::stringstream ss(cadena);
                char delim; // Para leer y descartar las comas
                ss >> id >> voltaje >> x >> y >> red >> green >> blue >> delim;
                agregarCola(new Neurona(id, voltaje, x, y, red, green, blue));
            }
            std::cout << "Hecho, Se leyeron: " << neuronas.size() << std::endl;
            archivo.close();
            //listar();
            return true;
        }
        else{
            std::cout << "No se pudo abrir el archivo." << std::endl;
            return false;
        }
    }
    Neurona * dameNeurona(){
        cuentaNeuronas--;
        return neuronas.back();
    }
    Neurona * buscarID(int id){
        for (Neurona * n : neuronas){
            if (n->getId() == id)
                return n;
        }
        return NULL;
    }
    void imprimir(Neurona * n){
        std::cout << "Neuronas #" << dameCuenta() << std::endl
                  << "ID: " << n->getId() << std::endl
                  << "Voltaje: " << n->getVoltaje() << std::endl
                  << "Cord X: " << n->getX() << std::endl
                  << "Cord Y: " << n->getY() << std::endl
                  << "Red: " << n->getRed() << std::endl
                  << "Green: " << n->getGreen() << std::endl
                  << "Blue: " << n->getBlue() << std::endl
                  << "\n";
    }
    void listar(){
        for (Neurona * n : neuronas)
            imprimir(n);
    }
    int dameCuenta(){
        return (int)neuronas.size();
    }
    std::list<Neurona*> dameNeuronas(){
        return neuronas;
    }
    static bool compararID(const Neurona* neurona1, const Neurona* neurona2) {
        //Comparar por ID
        return neurona1->getId() < neurona2->getId();
    }
    static bool compararVoltaje(const Neurona* neurona1, const Neurona* neurona2) {
        //Comparar por ID
        return neurona1->getVoltaje() < neurona2->getVoltaje();
    }
    void ordenarID (){
        neuronas.sort(compararID);
    }
    void ordenarVoltaje(){
        neuronas.sort(compararVoltaje);
    }
    QPair<QPointF, QPointF> parMasCercanos(){
        QVector<QPointF> puntos;
        for (Neurona * n : neuronas) {
            puntos.push_back(QPointF(n->getX(), n->getY()));
        }
            double minimo = std::numeric_limits<double>::max();
            QPair<QPointF, QPointF> parMasCercano;
            for (int i = 0; i < dameCuenta(); i++) {
                for (int j = i + 1; j < dameCuenta(); j++) {
                    double dist = std::hypot(puntos[i].x() - puntos[j].x(), puntos[i].y() - puntos[j].y());
                    if (dist < minimo) {
                        minimo = dist;
                        parMasCercano.first = puntos[i];
                        parMasCercano.second = puntos[j];
                    }
                }
            }
        return parMasCercano;
    }
    QVector<QPointF> puntosMasCercanos(QVector<QPointF> puntos){
        QVector<QPointF> puntosMasCercanos;
            for (int i = 0; i < puntos.length(); i++) {
                double minimo = std::numeric_limits<double>::max();
                QPointF puntoMasCercano;
                for (int j = 0; j < puntos.length(); j++) {
                    if (i == j) continue; // no comparar consigomismo
                    double dist = std::hypot(puntos[i].x() - puntos[j].x(), puntos[i].y() - puntos[j].y());
                    if (dist < minimo) {
                        minimo = dist;
                        puntoMasCercano = puntos[j];
                    }
                }
                puntosMasCercanos.push_back(QPointF(puntoMasCercano));
            }
        return puntosMasCercanos;
    }
};

#endif // CLASES_H
