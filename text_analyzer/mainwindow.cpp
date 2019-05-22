#include "mainwindow.h"
#include "ui_mainwindow.h"
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

void MainWindow::on_Refresh_clicked()
{
    int a; int b; int c; int d;
QString text = ui ->textEdit->toPlainText();
string utf8_text = text.toUtf8().constData();
textAnalyzer.setText(utf8_text);
a = textAnalyzer.getLettersCount();
b = textAnalyzer.getWordsCount();
c = textAnalyzer.getSymbolsCount();
d = textAnalyzer.getSentencesCount();
QString s = QString::number(a);
QString t = QString::number(b);
QString u = QString::number(c);
QString v = QString::number(d);
ui -> label->setText(s);
ui -> label_2->setText(t);
ui -> label_4->setText(u);
ui -> label_3->setText(v);
}
