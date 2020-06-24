import QtQuick 2.12
import QtQuick.Controls 2.3
import QtQuick.Layouts 1.11
import QtQuick.Extras 1.4




Item {
    id: ultraSoundRow
    width: 211
    height: 100
    
    TextArea {
        objectName: "sensorSoundValue"
        id: textAreaSound
        text: "détection ultrason ?"
        anchors.right: statusUltraSound.left
        anchors.rightMargin: 5
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 0
        anchors.left: parent.left
        anchors.leftMargin: 0
        anchors.top: parent.top
        anchors.topMargin: 0
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        clip: false
        wrapMode: Text.WordWrap
        readOnly: true
    }

    Rectangle {
        id: statusUltraSound
        objectName: "soundIndicator"
        property bool active: false
        width: height
        color: (active)?"#d10000": "#4c4040"
        radius: width
        border.width: 2
        scale: 0.5
        anchors.top: parent.top
        anchors.topMargin: 0
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 0
        anchors.right: parent.right
        anchors.rightMargin: 0

    }
}

/*##^##
Designer {
    D{i:1;anchors_height:41;anchors_width:320}
}
##^##*/
