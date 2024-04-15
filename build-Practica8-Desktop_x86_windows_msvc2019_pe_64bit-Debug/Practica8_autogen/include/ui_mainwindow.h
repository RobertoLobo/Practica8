/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbrir;
    QAction *actionGuardar;
    QWidget *centralwidget;
    QPushButton *btnAPila;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLineEdit *lineEdit_5;
    QLabel *label_5;
    QLineEdit *lineEdit_6;
    QLabel *label_6;
    QLineEdit *lineEdit_7;
    QLabel *label_7;
    QFrame *line;
    QLabel *label_8;
    QLabel *label_9;
    QSpinBox *cNumNeuronas;
    QPushButton *btnACola;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPlainTextEdit *cSalida;
    QPushButton *btnListar;
    QComboBox *cbOrdernar;
    QWidget *tab_2;
    QTableWidget *tabla;
    QLineEdit *cBuscar;
    QLabel *label_10;
    QPushButton *btnActualizar;
    QPushButton *btnBuscar;
    QWidget *tab_3;
    QGraphicsView *graphicsView;
    QPushButton *btnGraficar;
    QComboBox *cbModo;
    QPushButton *btnLocalizar;
    QMenuBar *menubar;
    QMenu *menuA_adir;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(700, 500);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName("actionAbrir");
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName("actionGuardar");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btnAPila = new QPushButton(centralwidget);
        btnAPila->setObjectName("btnAPila");
        btnAPila->setGeometry(QRect(30, 360, 80, 24));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 20, 113, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 49, 16));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(20, 70, 113, 24));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 50, 49, 16));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(20, 120, 113, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 100, 61, 16));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(20, 170, 113, 24));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 150, 49, 16));
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(20, 220, 113, 24));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 200, 49, 16));
        lineEdit_6 = new QLineEdit(centralwidget);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(20, 270, 113, 24));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 250, 49, 16));
        lineEdit_7 = new QLineEdit(centralwidget);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(20, 320, 113, 24));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 300, 49, 16));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(160, 10, 20, 331));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(180, 10, 91, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Raleway Medium")});
        font.setPointSize(12);
        label_8->setFont(font);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(190, 70, 49, 16));
        cNumNeuronas = new QSpinBox(centralwidget);
        cNumNeuronas->setObjectName("cNumNeuronas");
        cNumNeuronas->setEnabled(false);
        cNumNeuronas->setGeometry(QRect(190, 30, 42, 25));
        btnACola = new QPushButton(centralwidget);
        btnACola->setObjectName("btnACola");
        btnACola->setGeometry(QRect(30, 390, 80, 24));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(180, 90, 421, 361));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tab = new QWidget();
        tab->setObjectName("tab");
        cSalida = new QPlainTextEdit(tab);
        cSalida->setObjectName("cSalida");
        cSalida->setGeometry(QRect(10, 10, 221, 281));
        btnListar = new QPushButton(tab);
        btnListar->setObjectName("btnListar");
        btnListar->setGeometry(QRect(10, 300, 80, 24));
        cbOrdernar = new QComboBox(tab);
        cbOrdernar->addItem(QString());
        cbOrdernar->addItem(QString());
        cbOrdernar->addItem(QString());
        cbOrdernar->setObjectName("cbOrdernar");
        cbOrdernar->setGeometry(QRect(240, 10, 91, 24));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabla = new QTableWidget(tab_2);
        tabla->setObjectName("tabla");
        tabla->setGeometry(QRect(10, 80, 401, 192));
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabla->sizePolicy().hasHeightForWidth());
        tabla->setSizePolicy(sizePolicy);
        tabla->verticalHeader()->setVisible(false);
        tabla->verticalHeader()->setHighlightSections(false);
        cBuscar = new QLineEdit(tab_2);
        cBuscar->setObjectName("cBuscar");
        cBuscar->setGeometry(QRect(10, 40, 151, 24));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 20, 91, 16));
        btnActualizar = new QPushButton(tab_2);
        btnActualizar->setObjectName("btnActualizar");
        btnActualizar->setGeometry(QRect(100, 290, 80, 24));
        btnBuscar = new QPushButton(tab_2);
        btnBuscar->setObjectName("btnBuscar");
        btnBuscar->setGeometry(QRect(170, 40, 80, 24));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        graphicsView = new QGraphicsView(tab_3);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(10, 10, 401, 281));
        graphicsView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        btnGraficar = new QPushButton(tab_3);
        btnGraficar->setObjectName("btnGraficar");
        btnGraficar->setGeometry(QRect(160, 300, 80, 24));
        cbModo = new QComboBox(tab_3);
        cbModo->addItem(QString());
        cbModo->addItem(QString());
        cbModo->addItem(QString());
        cbModo->setObjectName("cbModo");
        cbModo->setGeometry(QRect(10, 300, 91, 24));
        btnLocalizar = new QPushButton(tab_3);
        btnLocalizar->setObjectName("btnLocalizar");
        btnLocalizar->setGeometry(QRect(330, 300, 80, 24));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 700, 21));
        menuA_adir = new QMenu(menubar);
        menuA_adir->setObjectName("menuA_adir");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuA_adir->menuAction());
        menuA_adir->addAction(actionAbrir);
        menuA_adir->addAction(actionGuardar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        actionGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
        btnAPila->setText(QCoreApplication::translate("MainWindow", "A\303\261adir Pila", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Voltaje (V)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Posici\303\263n X", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Posi\303\263n Y", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Neuronas", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Salida:", nullptr));
        btnACola->setText(QCoreApplication::translate("MainWindow", "A\303\261adir Cola", nullptr));
        btnListar->setText(QCoreApplication::translate("MainWindow", "Listar", nullptr));
        cbOrdernar->setItemText(0, QCoreApplication::translate("MainWindow", "Seleccionar...", nullptr));
        cbOrdernar->setItemText(1, QCoreApplication::translate("MainWindow", "ID (Asc)", nullptr));
        cbOrdernar->setItemText(2, QCoreApplication::translate("MainWindow", "Voltaje", nullptr));

        cbOrdernar->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ordenar...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Texto", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Buscar (ID)", nullptr));
        btnActualizar->setText(QCoreApplication::translate("MainWindow", "Actualizar", nullptr));
        btnBuscar->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tabla", nullptr));
        btnGraficar->setText(QCoreApplication::translate("MainWindow", "Graficar", nullptr));
        cbModo->setItemText(0, QCoreApplication::translate("MainWindow", "Seleccionar...", nullptr));
        cbModo->setItemText(1, QCoreApplication::translate("MainWindow", "Puntos", nullptr));
        cbModo->setItemText(2, QCoreApplication::translate("MainWindow", "C\303\255rculos", nullptr));

        cbModo->setPlaceholderText(QCoreApplication::translate("MainWindow", "Modo. . . ", nullptr));
        btnLocalizar->setText(QCoreApplication::translate("MainWindow", "Dist + Corta", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Gr\303\241fico", nullptr));
        menuA_adir->setTitle(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
