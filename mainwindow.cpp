#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "Clases.h"
#include <QFileDialog>
#include <QRandomGenerator>

//QLineEdit *lineEdit = new QLineEdit();
AdminNeuronas * adminNeuronas = new AdminNeuronas();

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    inicializar();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::inicializar(){
    ui->graphicsView->setScene(&escena);
    escena.clear();
}

void MainWindow::on_actionAbrir_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"./",tr("Text (*.txt)"));
    QString text;
    ui->cSalida->clear();
    adminNeuronas->cargarNeuronas(fileName.toStdString());
    for (Neurona *n : adminNeuronas->dameNeuronas()){
        text.append("ID: " + std::to_string(n->getId()) + "\n");
        text.append("Voltaje: " + std::to_string(n->getVoltaje()) + "\n");
        text.append("Cord X: " + std::to_string(n->getX()) + "\n");
        text.append("Cord Y: " + std::to_string(n->getY()) + "\n");
        text.append("Red: " + std::to_string(n->getRed()) + "\n");
        text.append("Green: " + std::to_string(n->getGreen()) + "\n");
        text.append("Blue: " + std::to_string(n->getBlue()) + "\n###\n");
    }
    //n2 = adminNeuronas->dameNeurona();
    ui->cNumNeuronas->setValue(adminNeuronas->dameCuenta());
    ui->cSalida->appendPlainText(text);
}


void MainWindow::on_actionGuardar_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),"./untitled.png",
                                                    tr("Text (*.txt)"));
    adminNeuronas->guardarNeuronas(fileName.toStdString());
}


void MainWindow::on_btnACola_clicked()
{
    auto neurona = new Neurona();
    neurona->putId(ui->lineEdit->text().toInt());
    neurona->putVoltaje(ui->lineEdit_2->text().toFloat());
    neurona->putX(ui->lineEdit_3->text().toInt());
    neurona->putY(ui->lineEdit_4->text().toInt());
    neurona->putRed(ui->lineEdit_5->text().toInt());
    neurona->putGreen(ui->lineEdit_6->text().toInt());
    neurona->putBlue(ui->lineEdit_7->text().toInt());
    adminNeuronas->agregarCola(neurona);
}


void MainWindow::on_btnAPila_clicked()
{
    auto neurona = new Neurona();
    neurona->putId(ui->lineEdit->text().toInt());
    neurona->putVoltaje(ui->lineEdit_2->text().toFloat());
    neurona->putX(ui->lineEdit_3->text().toInt());
    neurona->putY(ui->lineEdit_4->text().toInt());
    neurona->putRed(ui->lineEdit_5->text().toInt());
    neurona->putGreen(ui->lineEdit_6->text().toInt());
    neurona->putBlue(ui->lineEdit_7->text().toInt());
    adminNeuronas->agregarPila(neurona);
}


void MainWindow::on_btnListar_clicked()
{
    QString text;
    ui->cSalida->clear();
    for (Neurona *n : adminNeuronas->dameNeuronas()){
        text.append("ID: " + std::to_string(n->getId()) + "\n");
        text.append("Voltaje: " + std::to_string(n->getVoltaje()) + "\n");
        text.append("Cord X: " + std::to_string(n->getX()) + "\n");
        text.append("Cord Y: " + std::to_string(n->getY()) + "\n");
        text.append("Red: " + std::to_string(n->getRed()) + "\n");
        text.append("Green: " + std::to_string(n->getGreen()) + "\n");
        text.append("Blue: " + std::to_string(n->getBlue()) + "\n###\n");
    }
    //n2 = adminNeuronas->dameNeurona();
    ui->cNumNeuronas->setValue(adminNeuronas->dameCuenta());
    ui->cSalida->appendPlainText(text);
}


void MainWindow::on_btnActualizar_clicked()
{
    //ui->tabla = new QTableWidget();


    short fila = 0;
    short columna = 0;
    QTableWidgetItem *newItem;
    ui->tabla->clear();
    //ui->tabla->clearContents();

    //newItem = new QTableWidgetItem("Whoop");
    //ui->tabla->setRowCount(10);
    ui->tabla->setColumnCount(7);
    //ui->tabla->insertRow(fila);
    //ui->tabla->setItem(fila, columna++, newItem);

    for (Neurona *n : adminNeuronas->dameNeuronas()){
        columna = 0;
        //newItem = new QTableWidgetItem(QString::fromStdString(std::to_string(n->getId())));
        ui->tabla->insertRow(fila);
        ui->tabla->setItem(fila, columna++, new QTableWidgetItem(QString::fromStdString(std::to_string(n->getId()))));
        ui->tabla->setItem(fila, columna++, new QTableWidgetItem(QString::fromStdString(std::to_string(n->getVoltaje()))));
        ui->tabla->setItem(fila, columna++, new QTableWidgetItem(QString::fromStdString(std::to_string(n->getX()))));
        ui->tabla->setItem(fila, columna++, new QTableWidgetItem(QString::fromStdString(std::to_string(n->getY()))));
        ui->tabla->setItem(fila, columna++, new QTableWidgetItem(QString::fromStdString(std::to_string(n->getRed()))));
        ui->tabla->setItem(fila, columna++, new QTableWidgetItem(QString::fromStdString(std::to_string(n->getGreen()))));
        ui->tabla->setItem(fila++, columna++, new QTableWidgetItem(QString::fromStdString(std::to_string(n->getBlue()))));

        //newItem = new QTableWidgetItem(datos.pop_back());
        //ui->tabla->setItem(fila, columna+1, newItem);
    }

    ui->tabla->setHorizontalHeaderLabels({"ID", "Voltaje", "Cord X", "Cord Y", "RED", "GREEN", "BLUE"});
    ui->cNumNeuronas->setValue(adminNeuronas->dameCuenta());
    //ui->tabla->show();
}

void MainWindow::on_btnBuscar_clicked()
{
    Neurona * n;
    short columna = 0;
    n = adminNeuronas->buscarID(ui->cBuscar->text().toInt());
    ui->tabla->clearContents();
    if(ui->cBuscar->text() != "" && n){
        ui->tabla->insertRow(ui->tabla->rowCount());
        ui->tabla->setItem(0, columna++, new QTableWidgetItem(QString::fromStdString(std::to_string(n->getId()))));
        ui->tabla->setItem(0, columna++, new QTableWidgetItem(QString::fromStdString(std::to_string(n->getVoltaje()))));
        ui->tabla->setItem(0, columna++, new QTableWidgetItem(QString::fromStdString(std::to_string(n->getX()))));
        ui->tabla->setItem(0, columna++, new QTableWidgetItem(QString::fromStdString(std::to_string(n->getY()))));
        ui->tabla->setItem(0, columna++, new QTableWidgetItem(QString::fromStdString(std::to_string(n->getRed()))));
        ui->tabla->setItem(0, columna++, new QTableWidgetItem(QString::fromStdString(std::to_string(n->getGreen()))));
        ui->tabla->setItem(0, columna++, new QTableWidgetItem(QString::fromStdString(std::to_string(n->getBlue()))));
    }
}


void MainWindow::on_btnGraficar_clicked()
{

    QPen lapiz;
    //escena.addText("Hello, world!");
    for (Neurona *n : adminNeuronas->dameNeuronas()){
        QColor color(n->getRed(), n->getGreen(), n->getBlue());
        lapiz.setColor(color);
        QBrush pincel(color, Qt::CrossPattern);
        escena.addEllipse(n->getX(), n->getY(), n->getVoltaje(), n->getVoltaje(), lapiz, pincel);
    }
    //QRandomGenerator::global()->bounded(1,900)
    //std::cout << "Clic" << std::endl;
    escena.update();
    ui->graphicsView->update();
}


void MainWindow::on_cbOrdernar_currentTextChanged(const QString &arg1)
{
    if (ui->cbOrdernar->currentText().toStdString() == "ID (Asc)")
        adminNeuronas->ordenarID();
    else if (ui->cbOrdernar->currentText().toStdString() == "Voltaje")
        adminNeuronas->ordenarVoltaje();
}


void MainWindow::on_cbModo_currentTextChanged(const QString &arg1)
{
    QPen lapiz;
    if (ui->cbModo->currentIndex() == 1){
        for (Neurona *n : adminNeuronas->dameNeuronas()){
            QColor color(n->getRed(), n->getGreen(), n->getBlue());
            lapiz.setColor(color);
            QBrush pincel(color);
            escena.addEllipse(n->getX(), n->getY(), 5, 5, lapiz, pincel);
        }
        //QRandomGenerator::global()->bounded(1,900)
        //std::cout << "Clic" << std::endl;
        escena.update();
        ui->graphicsView->update();

    }
    else if (ui->cbModo->currentIndex() == 2){
        //on_btnGraficar_clicked()
    }
}


void MainWindow::on_btnLocalizar_clicked()
{
    QVector<QPointF> puntos;
    int i = 0;
    for (Neurona * n : adminNeuronas->dameNeuronas()) {
        puntos.push_back(QPointF(n->getX(), n->getY()));
    }
    /*QPair<QPointF, QPointF> par = adminNeuronas->parMasCercanos();
    escena.addLine(par.first.x(), par.first.y(), par.second.x(), par.second.y(), QPen(Qt::red));*/
    for (QPointF punto : adminNeuronas->puntosMasCercanos(puntos)){
        escena.addLine(punto.x(), punto.y(), puntos[i].x(), puntos[i].y(), QPen());
        i++;
    }

    escena.update();
    ui->graphicsView->update();
}

