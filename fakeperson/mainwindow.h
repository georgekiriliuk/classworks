#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <iostream>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    string name[5] ={"Ватерпежекосма",
                     "Кукуцаполь",
                     "Перкосрак",
                     "Тролебузина",
                     "Персострат"};
    string secondname[5] = {"Непиздит",
                            "Байда",
                            "Свинарь",
                            "Конопля",
                            "Пидоренко"};
    string country[5] = {"Китай",
                        "Армения",
                        "Науру",
                        "Аргентина",
                        "Чили"};
            string prof[5] = {"BTL-менеджер",
                               "ERP-программист",
                               "Event-менеджер",
                               "HTML-верстальщик",
                               "PR-специалист"};
            int age[5] = {20, 30, 40, 50, 80};
            string hobby[2] = {"Каллиграфия"," Дудлинг"};
            int random;
            private slots:

            void on_pushButton_clicked();

            void on_MainWindow_iconSizeChanged(const QSize &iconSize);

            void on_label_7_linkActivated(const QString &link);

            void on_label_8_linkActivated(const QString &link);

            void on_label_13_linkActivated(const QString &link);

            void on_label_9_linkActivated(const QString &link);

            void on_label_12_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
