#ifndef GPACMAN_H
#define GPACMAN_H

#include <QtGui/QMainWindow>
#include <QtWebKit/QWebView>
class gpacman : public QMainWindow
{
    Q_OBJECT

public:
    gpacman(QWidget *parent = 0);
    ~gpacman();
};

#endif // GPACMAN_H
