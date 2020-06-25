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

    void writeSensorLux(QByteArray message);                        //Ecrit message détection de lumière vers app client
    void writeSensorSound(QByteArray message);                      //Ecrit message détection ultrason vers app client


public slots:

    //Récupère la date
    QString getDate();


    //Vérifie que la dernière valeur lu sur le port série est égale à 0.
    bool getFlag(){return m_flag;}

    //Archive dans le qml détection
    void addLuxDetection();

    //Archive dans le qml détection
    void addSoundDetection();

    //récupère lecture com UART
    void getSensorState(QByteArray msg);

    //Allume/Eteint les voyants
    void luxDetect();
    void soundDetect();

    //Récupère les nouvelles connections TCP
    void onNewConnection();

    //Stocke et Lit requête client quand "Ready"
    void onReadyRead();

    //Si état socket change
    void socketStateChanged (QAbstractSocket::SocketState socketState);
    void socketError(QAbstractSocket::SocketError socketError);

    //Si socket déconnecter
    void socketDisconnected();

    //Affiche l'item (swipe archive) - définit son opacité
    void displayArchive();

    //récupère l'index courant
    int getIndexArchive(){return m_indexArchiveMax;}

    //enregistre un nouvel objet chaque Component.onCompleted
    void registerLabel(QObject *obj);

private slots:
    //enregistre le nouvel id
    void    viewChanger(int id);

    //charge id
    void    loadMain();


private:

    //vérifie si m_msg vaut 0
    bool m_flag = false;

    //définit l'index max
    int m_indexArchiveMax = 0;

    //Définit l'index où placer le message dans le labelTxt

    //new Server
    QTcpServer *server =  nullptr;

    //Socket du server
    QTcpSocket *socket = nullptr;

    //Stocke les clients
    QList <QTcpSocket*> listSocket;

    //Classe Serial - init, lit le port serie
    Serial lecture;

    //List qui contient les nouveaux labels
    QList<QObject*> m_labelList;

    int m_pageId;
};

#endif // Interface_H
