#include "Window.h"

int testWindow(int argc, char **argv) {
    QApplication app(argc, argv);
    Window win;
    win.show();
    return app.exec();
}