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
QString text = ui ->textEdit->toPlainText();
string utf8_text = text.toUtf8().constData();
textAnalyzer.setText(utf8_text);
textAnalyzer.getLettersCount();
textAnalyzer.getWordsCount();
textAnalyzer.getSymbolsCount();
textAnalyzer.getSentencesCount();
}
