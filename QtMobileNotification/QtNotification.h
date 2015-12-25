#ifndef QTNOTIFICATION_H
#define QTNOTIFICATION_H

#include <QObject>
#include "QtAbstractNotifier.h"
#include <qqml.h>
/**
 * @brief Позваляет показывать уведомления в текущей ОС,
 *        скрывать их
 */
class QtNotification : public QObject
{
    Q_OBJECT
    public:
        explicit QtNotification(QObject *parent = 0);
        ~QtNotification();

    /// @see QtAbstractNotifier
    Q_INVOKABLE bool show(const QVariant &notificationParameters);

    /// @see QtAbstractNotifier
    Q_INVOKABLE bool hide(const QVariant &notificationParameters);

    /// @see QtAbstractNotifier
    Q_INVOKABLE bool hideAll();

    ///! @brief объявить для того, чтобы использовать в QML
    /// Использовать объект Notification
    static void declareQML() ;

    private:
        /// \brief нотификатор. Объект, отвечающий за отображение.
        QtAbstractNotifier *_Notifier;
};

#endif // QTNOTIFICATION_H
