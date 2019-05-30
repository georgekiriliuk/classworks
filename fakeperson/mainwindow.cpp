#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

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

void MainWindow::on_pushButton_clicked()
{
    int a;  int b;  int c;  int d;  int e; int f;
    a = rand()%5;
    string a_text = name[a];
    ui->label_6->setText(QString::fromStdString(a_text));

    b = rand()%5;
    string b_text = secondname[b];
     ui->label_7->setText(QString::fromStdString(b_text));

    c = rand()%5;
    string c_text = country[c];
     ui->label_8->setText(QString::fromStdString(c_text));

    d = rand()%5;
    string d_text = prof[d];
     ui->label_13->setText(QString::fromStdString(d_text));

    e = rand()%5;
     ui->label_9->setText(QString::number(age[e]));

    f = rand()%2;
    string f_text = hobby[f];
     ui->label_12->setText(QString::fromStdString(f_text));


}

void MainWindow::on_MainWindow_iconSizeChanged(const QSize &iconSize)
{
    string a;
   a = rand()%5;
}

void MainWindow::on_label_7_linkActivated(const QString &link)
{
    string b;
     b = rand()%5;
}

void MainWindow::on_label_8_linkActivated(const QString &link)
{
    string c;
    c = rand()%5;

}

void MainWindow::on_label_13_linkActivated(const QString &link)
{
    string d;
    d = rand()%5;
}

void MainWindow::on_label_9_linkActivated(const QString &link)
{
    int e;
     e = rand()%5;
}

void MainWindow::on_label_12_linkActivated(const QString &link)
{
    string f;
     f = rand()%2;
}
