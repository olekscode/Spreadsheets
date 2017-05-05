#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    sheetView = new SheetView(this);
    setCentralWidget(sheetView);

    functionEdit = new QLineEdit(this);

    QToolBar *toolBar = addToolBar(tr("Navigation"));
    toolBar->addWidget(functionEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}
