#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    if (index !=0){
        ui->tabWidget->removeTab(index);
    }
}

void MainWindow::on_buttonStudent_clicked()
{
    ui->tabWidget->addTab(new Student, "Student");
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
}
