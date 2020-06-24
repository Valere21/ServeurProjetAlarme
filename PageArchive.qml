import QtQuick 2.0
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.11

Page {

    objectName: "pageView"
    header: Label {
        
        objectName: "headText"
        
        text: qsTr("Archive du :" + cpp.getDate(cpp.getDate))
        color : "#0000ff"
        font.pointSize: 13
        padding: 10
        
    }
    
    GridLayout {
        id: grid
        anchors.fill: parent
        rows: 10
        columns: 2

        Label {

            objectName: "labelArchive"
            property var varSensor: "lorem ipsum"
            text: varSensor
            Layout.fillHeight: false
            clip: false
            Layout.fillWidth: true
            onVarSensorChanged: {
                if (cpp.getIndexArchive() === true){

                    if (cpp.getState() === 1 ){
                        cpp.addLuxDetection()
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
        }
    }
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
