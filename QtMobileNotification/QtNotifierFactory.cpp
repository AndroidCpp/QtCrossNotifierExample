#include "QtNotifierFactory.h"

#if defined (Q_OS_ANDROID)
    #include "QtAndroidNotifier.h"
#elif defined (Q_OS_IOS)
    #include "QtIosNotifier.h"
#elif defined(Q_OS_MAC)
    #include "QtMacOsNotifier.h"
#endif


QtAbstractNotifier *QtNotifierFactory::GetPlatformDependencyNotifier()
{
#if defined Q_OS_ANDROID
    return new QtAndroidNotifier();
#elif defined Q_OS_IOS
    return new QtIosNotifier();
#elif defined(Q_OS_MAC)
    return new QtMacOsNotofyer();
#endif
    qWarning("QtNotifierFactory: нотификатор не был создан. Платформа не поддерживается.");
    return NULL;
}
