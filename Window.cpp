#include "Window.h"

Window::Window(QWidget *parent) {
    //buttonFils.setText("FILS");
    buttonFils.setText("Noémie");
    buttonFils.setParent(this);
    //setFixedSize(100, 50);
    buttonFils.setGeometry(10,10,80,30);
    //setWindowTitle("Je l'ai nommé!");
    setWindowTitle("Noemie LEMPEREUR");
    setCursor(QCursor(Qt::CrossCursor));
    setFixedSize(1000, 500);
}
