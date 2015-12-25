INCLUDEPATH += $$PWD

# кросплатформенные компоненты
HEADERS += \
    $$PWD/QtNotification.h \
    $$PWD/QtAbstractNotifier.h \    
    $$PWD/QtNotifierFactory.h \
    $$PWD/QtMacOsNotofyer.h

SOURCES += \
    $$PWD/QtNotification.cpp \    
    $$PWD/QtNotifierFactory.cpp

android {
    #android-компоненты

    QT += androidextras

    HEADERS += $$PWD/QtAndroidNotifier.h
    SOURCES += $$PWD/QtAndroidNotifier.cpp
    DISTFILES += \
        $$PWD/QtMobileNotificationAndroid/src/ru/notifications/javalib/*.java \
        $$PWD/QtMobileNotificationAndroid/*.gradle
} else:ios {
    LIBS += -framework Foundation

    #ios-компоненты
    HEADERS += $$PWD/QtIosNotifier.h
    OBJECTIVE_SOURCES += $$PWD/QtIosNotifier.mm
} else:macx {
    LIBS += -framework Foundation

    # macx-компоненты
    HEADERS += $$PWD/QtMacOsNotifier.h
    OBJECTIVE_SOURCES += $$PWD/QtMacOsNotifier.mm
}

