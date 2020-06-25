#include <QtGui/QGuiApplication>
#include <QtQml/QQmlApplicationEngine>
#include <QtQml/QQmlContext>
#include <QTcpSocket>

#include "interface.h"



void  Interface::init(){

    if (server){

        delete server;
        server = nullptr;
    }

    server =  new QTcpServer(this);
    server->listen(QHostAddress::Any, 4242);
    server->setMaxPendingConnections(1);

    connect(server, SIGNAL(newConnection()),this, SLOT(onNewConnection()));

}


/*void Interface::msgDetect(QByteArray msg){

    QObject* rootItem = (QObject*)rootObject();
    QObject* txtMsg = rootItem->findChild<QObject*>("txtServ");
    txtMsg->setProperty("text", msg);
}*/

void Interface::luxDetect(){
    qDebug() << Q_FUNC_INFO;
    QString messageLux = "Il y'a détection par le capteur de lumière";

    QObject* rootItem = (QObject*)rootObject();                      // l'objet root est l'objet le plus haut soit la Window (l'Item). Il est indsipensable
    QObject* txtLux = rootItem->findChild<QObject*>("sensorLuxValue");
    txtLux->setProperty("text", messageLux);

    QObject* lightLux = rootItem->findChild<QObject*>("luxIndicator");

    lightLux->setProperty("color", "c01414");
    lightLux->setProperty ("active", "true");

}

void Interface::soundDetect(){

    qDebug() << Q_FUNC_INFO;
    QString messageSound = "Il y'a détection par le capteur à ultrason";

    QObject* rootItem = (QObject*)rootObject();                      // l'objet root est l'objet le plus haut soit la Window (l'Item). Il est indsipensable de créer un Item à la racine pour utiliser la fct findChild (création de l'item Parent pour appeller un item fille)
    QObject* txtSound = rootItem->findChild<QObject*>("sensorSoundValue");
    txtSound->setProperty("text",messageSound);

    QObject* lightSound = rootItem->findChild<QObject*>("soundIndicator");
    lightSound->setProperty("color", "c01414");
    lightSound->setProperty ("active", "true");

}

void Interface::onNewConnection(){

    qDebug() << "Nouvelle connection";


    socket = server->nextPendingConnection();

    listSocket.append(socket);

    connect(socket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));                                                                          //Connect au slot de lecture

    connect(socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(socketError(QAbstractSocket::SocketError)));                      //Slot d'erreur
    connect(socket, SIGNAL(stateChanged(QAbstractSocket::SocketState)), this, SLOT(socketStateChanged(QAbstractSocket::SocketState)));        //Slot de changement d'état
    connect(socket, SIGNAL(disconnected()), this, SLOT(socketDisconnected()));

    soundDetect();
    luxDetect();

}

void Interface::onReadyRead(){
    //bool flag = true;
    qDebug() << Q_FUNC_INFO << "Test du onReadyRead";
    QByteArray message;
    message.clear();

    while (socket->bytesAvailable()){
        //flag = false;
        qDebug() << "Test de lecture";
        message = socket->readAll();
        qDebug() << message;
        /*if (flag == false){
        msgDetect(message);
        flag = true;
        }*/
        socket->write("Le message reçu est :" + message);
    }
}

void Interface::writeSensorLux(QByteArray message){

    socket->write(message);
}

void Interface::changeView(QObject* swipe)
{
 m_swipe = swipe;
}

void Interface::addLuxDetection(){

    qDebug() << Q_FUNC_INFO << "add lux detection";
    QString msg = "\n Détection du capteur de lumière le :" + getDate();
    QString result;
    if (m_indexArchive < 30){
        if (m_flag == true) {
            m_flag = false;


                result = m_labelList.at(0)->property("text").toString();
                result.append(msg);
                m_labelList.at(m_indexArchive)->setProperty("text", result);

                qDebug() << Q_FUNC_INFO << " valeur de l'index " << m_labelList.at(  m_indexArchive) ;
                m_nbrDetec++;
                if (m_nbrDetec == 10){
                    m_indexArchive++;
                    m_swipe->setProperty("currentIndex", m_indexArchive );
                    m_nbrDetec = 0;
                }
        }
    }
    else if (  m_indexArchive >= 30){
        qDebug() <<  " m_index superieur a 30";
    }

}
void Interface::addSoundDetection(){
    qDebug() << Q_FUNC_INFO ;
    QString msg = "\n Détection du capteur ultrason le :" + getDate();
    QString result;

    if (m_indexArchive < 30){
        if (m_flag == true) {
            m_flag = false;


                result = m_labelList.at(m_indexArchive)->property("text").toString();
                result.append(msg);
                m_labelList.at(m_indexArchive)->setProperty("text", result);

                qDebug() << Q_FUNC_INFO << " valeur de l'index " << m_labelList.at(  m_indexArchive) ;
                m_nbrDetec++;
                if (m_nbrDetec >= 10){
                    m_indexArchive++;
                    m_swipe->setProperty("currentIndex", m_indexArchive );
                    m_nbrDetec = 0;
                    m_labelList.at(m_indexArchive)->setProperty("text", "" );
                }
        }
    }

    else if (  m_indexArchive >= 30){
        qDebug() <<  " m_index superieur a 30";
    }
    if (m_indexArchive < 30){
        if (m_flag == true) {
            m_flag = false;

                result = m_labelList.at(m_indexArchive)->property("text").toString();
                result.append(msg);
                m_labelList.at(m_indexArchive)->setProperty("text", result);

                qDebug() << Q_FUNC_INFO << " valeur de l'index " << m_labelList.at(  m_indexArchive) ;
                m_nbrDetec++;
                if (m_nbrDetec >= 10){
                    m_indexArchive++;
                    m_swipe->setProperty("currentIndex", m_indexArchive );
                    m_nbrDetec = 0;
                    m_labelList.at(m_indexArchive)->setProperty("text", "" );
                }
        }
    }
}




void Interface::getSensorState(QByteArray msg)
{   
    QObject* rootItem = (QObject*)rootObject();

    if (rootItem == nullptr){
        qDebug() << "rootItem not found";
        return ;
    }
    QObject* lightLux = rootItem->findChild<QObject*>("luxIndicator");
    QObject* lightSound = rootItem->findChild<QObject*>("soundIndicator");
    //QObject* labelArchive = rootItem->findChild<QObject*>("labelTxt");

    if (lightLux  == nullptr){
        qDebug() << "lightLuxItem not found";
        return ;
    }
    if (lightSound == nullptr){
        qDebug() << "lightSoundItem not found";
        return ;
    }
    /*    if (labelArchive == nullptr){
        qDebug() << "gridLayout not found";
        return ;
    }
    labelArchive->setProperty("text", "val Change");
*/


    if (msg == "0"){
        m_flag = true;
        lightLux->setProperty ("active", "false");
        lightSound->setProperty ("active", "false");
        //addLuxDetection();

    }

    if (msg == "1" ){                     //test capteur lumière

        qDebug() << "test activation de couleur capteur Lumiere";

        lightLux->setProperty("color", "c01414");
        lightLux->setProperty ("active", "true");
        lightSound->setProperty ("active", "false");
        addLuxDetection();
    }
    if (msg == "2"){
        qDebug() << "test activation de couleur capteur Ultrason";

        lightSound->setProperty("color", "c01414");
        lightSound->setProperty ("active", "true");
        lightLux->setProperty ("active", "false");
        addSoundDetection();
        //soundLabel->setProperty("text", "détection le");

    }
    if (msg == "3"){

        m_flag = true;
        lightLux->setProperty ("active", "true");
        lightSound->setProperty ("active", "true");
        addLuxDetection();
        m_flag = true;
        addSoundDetection();

    }
}


QString Interface::getDate(){

    QString format = "dd/MM/yy HH:mm:ss";                                        //Configure le format -> ref doc QDateTime
    QString date = QDateTime::currentDateTime().toString(format);


    return  date;
}


void Interface::socketError(QAbstractSocket::SocketError socketError){

    qDebug() << "Erreur du socket, numéro d'erreur :" << socketError;
}

void Interface::socketStateChanged(QAbstractSocket::SocketState socketState){

    qDebug() << "Etat du socket à changer" << socketState;


}

void Interface::socketDisconnected(){

    qDebug() << "Socket déconnecter";
}

void Interface::displayArchive(){
    static bool opacity = true;

    QObject* rootItem = (QObject*)rootObject();                      // l'objet root est l'objet le plus haut soit la Window (l'Item). Il est indsipensable
    QObject* archiveButton = rootItem->findChild<QObject*>("swipeArchive");
    archiveButton->setProperty("opacity", opacity);
    opacity = !opacity;

}

void Interface::registerLabel(QObject *obj)
{
    m_labelList.append(obj);
    m_indexArchive = 0;
    obj->setProperty("text", " ");
    qDebug()<< "register label";
    //addLuxDetection();
    //addSoundDetection();

}


