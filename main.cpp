#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "interface.h"
#include "serial.h"
#include "archive.h"
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    qputenv("QT_QPA_PLATEFORM","web:port=4343");

    QGuiApplication app(argc, argv);

    Interface InterfaceQML;
    Serial lecture;

    return app.exec();
}
