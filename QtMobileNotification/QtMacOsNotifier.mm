#include "QtMacOsNotofyer.h"
#include <QVariant>
#import <Foundation/Foundation.h>

//-----------------------------------------------------------------------------
bool QtMacOsNotofyer::show(const QVariant &notificationParameters)
{
    QVariantMap parameters = notificationParameters.toMap();
    QString caption = parameters.value("caption", "").toString();
    QString title   = parameters.value("title", "").toString();

    NSUserNotification *notification = [[NSUserNotification alloc] init];
    notification.title = caption.toNSString();
    notification.informativeText = title.toNSString();
    notification.soundName = NSUserNotificationDefaultSoundName;
    [[NSUserNotificationCenter defaultUserNotificationCenter] deliverNotification:notification];
    return true;
}
