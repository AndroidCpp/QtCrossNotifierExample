import QtQuick 2.5
import QtQuick.Window 2.2

import QtNotification 1.0

/**
    Демонстрация объекта Notification
 **/
Window {
    visible: true

    Notification {
        id: notification
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            notification.show({
                              caption: "hello",
                              title  : "notification",
                              id     : 0
                          });
        }
    }

    Text {
        text: qsTr("Tap at me")
        anchors.centerIn: parent
    }
}

