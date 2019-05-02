#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setPic(QString filepath);
    void keyPressEvent(QKeyEvent *event);
    QString imagePaths[8] = {
        "C:\\Users\\Admin\\Desktop\\Картинки\\Батя.jpg",
        "C:\\Users\\Admin\\Desktop\\Картинки\\Грех.jpg",
        "C:\\Users\\Admin\\Desktop\\Картинки\\Зеленский.jpg",
        "C:\\Users\\Admin\\Desktop\\Картинки\\Как так.png",
        "C:\\Users\\Admin\\Desktop\\Картинки\\Котейка.jpg",
        "C:\\Users\\Admin\\Desktop\\Картинки\\Ничоси.png",
        "C:\\Users\\Admin\\Desktop\\Картинки\\Писяй.jpg",
        "C:\\Users\\Admin\\Desktop\\Картинки\\Щепотка соли.jpg"
    };
    int currentImage = 0;
    int numOfImages = 8;
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
