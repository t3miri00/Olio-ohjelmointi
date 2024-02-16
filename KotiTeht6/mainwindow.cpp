// mainwindow.cpp

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    count = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_countButton_clicked()
{
    count++;
    ui->numberLineEdit->setText(QString::number(count));
}

void MainWindow::on_resetButton_clicked()
{
    count = 0;
    ui->numberLineEdit->setText(QString::number(count));
}
