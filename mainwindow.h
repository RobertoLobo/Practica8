#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void inicializar();
    void on_actionAbrir_triggered();

    void on_actionGuardar_triggered();

    void on_btnACola_clicked();

    void on_btnAPila_clicked();

    void on_btnListar_clicked();

    void on_btnActualizar_clicked();

    void on_btnBuscar_clicked();

    void on_btnGraficar_clicked();

    void on_cbOrdernar_currentTextChanged(const QString &arg1);

    void on_cbModo_currentTextChanged(const QString &arg1);

    void on_btnLocalizar_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene escena;
};
#endif // MAINWINDOW_H
