
#ifndef UNTITLED1_WINDOW_H
#define UNTITLED1_WINDOW_H
#include <QApplication>
#include <QPushButton>

class Window : public QWidget{
    Q_OBJECT
private:
    QPushButton buttonFils;
public:
    Window(QWidget* parent=0);
};


#endif //UNTITLED1_WINDOW_H
