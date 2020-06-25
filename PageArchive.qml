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

                cpp.addLuxDetection()
                cpp.addSoundDetection()
            }
            Component.onCompleted: {
                console.log("labelTxt")
                //cpp.registerLabel("labelTxt")
               cpp.registerLabel(this)

            }
        }

        ListView {
            id: listView
            width: 110
            height: 160
            model: ListModel {
                ListElement {
                    name: "Grey"
                    colorCode: "grey"
                }

                ListElement {
                    name: "Red"
                    colorCode: "red"
                }

                ListElement {
                    name: "Blue"
                    colorCode: "blue"
                }

                ListElement {
                    name: "Green"
                    colorCode: "green"
                }
            }
            delegate: Item {
                x: 5
                width: 80
                height: 40
                Row {
                    id: row1
                    Rectangle {
                        width: 40
                        height: 40
                        color: colorCode
                    }

                    Text {
                        text: name
                        font.bold: true
                        anchors.verticalCenter: parent.verticalCenter
                    }
                    spacing: 10
                }
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
