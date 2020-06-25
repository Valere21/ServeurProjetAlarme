import QtQuick 2.12
import QtQuick.Controls 2.3
import QtQuick.Layouts 1.11
import QtQuick.Extras 1.4

Page {
    id : page



    header: Label {
        objectName: "headText"
        text: qsTr("Archive du :" + cpp.getDate(cpp.getDate))
        color : "#0000ff"
        font.pointSize: 13
        padding: 10
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
