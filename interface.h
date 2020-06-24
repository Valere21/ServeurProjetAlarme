#ifndef Interface_H
#define Interface_H
#include <QObject>
#include <QtQuick>
#include <QTcpSocket>
#include <QTcpServer>
#include "serial.h"

#define V_MAIN      1 //  id des views



class Interface : public QQuickView
{
    Q_OBJECT

public:
    explicit  Interface(QWindow *parent = nullptr);
    bool event(QEvent *event) override;
    ~Interface() override;

    void init();

    void writeSensorLux(QByteArray message);
    void writeSensorSound(QByteArray message);


public slots:

    QString getDate();
    void getSensorState(QByteArray msg);
    void addLuxDetection(QByteArray msg);
    void addSoundDetection(QByteArray msg);
    void luxDetect();
    void soundDetect();
    void onNewConnection();
    void onReadyRead();
    void socketStateChanged (QAbstractSocket::SocketState socketState);
    void socketError(QAbstractSocket::SocketError socketError);
    void socketDisconnected();
    void displayArchive();
    int getIndexArchive(){return m_indexArchive;}
private slots:
    void    viewChanger(int id);
    void    loadMain();



private:
    bool m_flag = false;
    int m_indexArchive = 0;
    QTcpServer *server =  nullptr;
    QTcpSocket *socket = nullptr;
    QList <QTcpSocket*> listSocket;
    Serial lecture;
    int m_pageId;
};

#endif // Interface_H
