#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QKeyEvent>
using namespace std;

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

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left){
        std::cout << "left" << std::endl;
        currentImage--;
        if(currentImage = -1){
            currentImage = numOfImages;
        }
         setPic(imagePaths[numOfImages]);
    }

        if(event->key() == Qt::Key_Right){
             std::cout << "right" << std::endl;
               currentImage++;
            if(currentImage == numOfImages + 1){
                currentImage = 0;
            }
            setPic(imagePaths[currentImage]);
        }
}

void MainWindow::setPic(QString filepath)
{
    QPixmap pic = QPixmap();
    if(pic.load(filepath)){
        ui->label->setPixmap(pic);
    }
    else{
        cout << "Your picture is not uploaded" << endl;
    }
}
