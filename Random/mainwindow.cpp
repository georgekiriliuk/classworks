#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include<ctime>
#include <cmath>
#include <QFileDialog>
#include <QString>
#include <QDebug>
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    srand(time(NULL));
    ui->setupUi(this);
    ui->showNumber->setStyleSheet("background-color: rgb(255, 224, 185)");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_generateNumButton_clicked()
{
   int from =  ui->from->value();
   int to = ui->to->value();

  int a =   rand() %( to - from + 1) + from;
QString s = QString::number(a);
ui->showNumber->setText(s);


 //ui -> showNumber ->("color: rgb(197, 0, 63);background-color: rgb(255, 255, 241)");
}

void MainWindow::on_pushButton_clicked()
{
QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                               "file:///C:/Users/Admin/Desktop/George's folder",
                               tr("Images (*.txt)"));
qDebug() << fileName;
QFile file(fileName);
file.open(QIODevice::ReadWrite);
QTextStream stream(&file);
stream << ui->showNumber->text();





}
