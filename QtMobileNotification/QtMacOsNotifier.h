#ifndef QTMACOSNOTOFYER_H
#define QTMACOSNOTOFYER_H

#include <QObject>
#include "QtAbstractNotifier.h"

class QtMacOsNotofyer : public QtAbstractNotifier
{

    public:
        QtMacOsNotofyer() {}
        bool show(const QVariant &notificationParameters);
};

#endif // QTMACOSNOTOFYER_H
