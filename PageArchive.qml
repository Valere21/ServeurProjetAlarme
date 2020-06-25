import QtQuick 2.12
import QtQuick.Controls 2.3
import QtQuick.Layouts 1.11
import QtQuick.Extras 1.4

Page {
    id : page
    property alias grid: grid



    header: Label {
        objectName: "headText"
        text: qsTr("Archive du :" + cpp.getDate(cpp.getDate))
        color : "#0000ff"
        font.pointSize: 13
        padding: 10
    }

    GridLayout {

        id: grid
        objectName: "gridLabel"
        anchors.fill: parent
        rows: 10
        columns: 2

        Label {
            id: label
            objectName: "labelTxt"
        property var varSensor: "lorem ipsum "
            Layout.fillHeight: true
            Layout.fillWidth: true
            text: varSensor
            onVarSensorChanged: {
                //qDebug() << "onVarChanged \n";

            if (cpp.getIndexArchive() === true){

                if (cpp.getState() === 1 ){
                    grid.text = cpp.addLuxDetection()
                    //page.header.text = cpp.addLuxDetection()
                }
                else if (cpp.getState() === 2){
                    cpp.addSoundDetection()
                }
                else if (cpp.getState() === 3){
                    cpp.addLuxDetection();
                    cpp.addSoundDetection();
                }
            }
        }
            Component.onCompleted: {
                console.log("labelTxt")
            cpp.registerLabel(label)
            }
    }
    }
        /*
    Label {

        objectName: "labelArchive"
        text: " ..."
        Layout.fillHeight: false
        clip: false
        Layout.fillWidth: true

    }*/
    footer: Label {
        color: "#0000ff"
        text: "page n° " + index
    }

}

/*##^##
Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
##^##*/
