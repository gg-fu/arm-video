#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPaintEvent>
#include <QTimer>
#include <QPainter>
#include <QPixmap>
#include <QLabel>
#include <QImage>
#include <QDebug>
#include <math.h>
#include <iostream>
#include <opencv2/opencv.hpp>
#include "opencv2/video.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/videostab.hpp"
#include "ui_mainwindow.h"
#include "video.h"
using namespace cv;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void pushButton_2_clicked();
    void getFrame();
    void pushButton_3_clicked();

    void pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    VideoCapture capture;
    QTimer *timer;
    camera_t* camera;
    uint32_t width;
    uint32_t height;
    CCamera *C_camera;
    int rgb24Size;
    int rgb24Pitch;
    unsigned char *rgb24;
    bool flag=true;

};

#endif // MAINWINDOW_H
