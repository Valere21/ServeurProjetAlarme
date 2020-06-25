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

    //Récupère la date
    QString getDate();

    //Récupère la valeur lu sur le port Serie. Allume ou éteint les voyants rouge en temps réelle
    QString getState();

    //Vérifie que la dernière valeur lu sur le port série est égale à 0.
    bool getFlag(){return m_flag;}

    //Affiche dans l'item qml "
    void addLuxDetection();
    void addSoundDetection();
    void getSensorState(QByteArray msg);
    void luxDetect();
    void soundDetect();
    void onNewConnection();
    void onReadyRead();
    void socketStateChanged (QAbstractSocket::SocketState socketState);
    void socketError(QAbstractSocket::SocketError socketError);
    void socketDisconnected();
    void displayArchive();
    int getIndexArchive(){return m_indexArchive;}
    void registerLabel(QObject *obj);

private slots:
    void    viewChanger(int id);
    void    loadMain();


private:
    QString m_valSensor;
    bool m_flag = false;
    int m_indexArchive = 0;
    QTcpServer *server =  nullptr;
    QTcpSocket *socket = nullptr;
    QList <QTcpSocket*> listSocket;
    Serial lecture;
    int m_pageId;
    QList<QObject*> m_labelList;
};

#endif // Interface_H
