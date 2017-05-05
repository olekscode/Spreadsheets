#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    sheetView = new SheetView(this);
    setCentralWidget(sheetView);
}

MainWindow::~MainWindow()
{
    delete ui;
}
