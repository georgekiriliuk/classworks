#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "text_analyzer.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    text_analyzer textAnalyzer;

private slots:
    void on_Refresh_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
