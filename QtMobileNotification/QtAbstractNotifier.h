
#ifndef QTABSTRACTNOTIFICATOR
#define QTABSTRACTNOTIFICATOR
#include <QObject>
/**
 * @class QtAbstractNotifier Интерфейс для работы с уведомлением
 * @file QtAbstractNotifier.h Интерфейс для работы с уведомлением
 * @brief Абстрактный класс, содержащий методы для
 *        показа/сокрытия уведомлений
 *
 * Каждый метод возвращает логическое значение, которое
 * либо говорит о том, поддерживается ли данный метод в этой ОС
 */
class QtAbstractNotifier {

    public:
        /**
         * @brief show показать уведомление
         * @param notificationParameters параметры уведомления
         * @return true - уведомление будет показано с такими
         *                параметрами,
         *         false - нет
         */
        virtual bool show(const QVariant &notificationParameters)
            { return false; }

        /**
         * @brief hide выборочно скрыть уведомление
         * @param notificationParameters параметр, необходимый для идентефикации уведомления
         *                               которое необходимо скрыть
         * @return  true - уведомление будет скрыто с таким параметром, false - нет.
         */
        virtual bool hide(const QVariant &notificationParameters) { return false; }

        /**
         * @brief hideAll скрыть все уведомления
         * @return true - уведомления будут скрыты, false - нет
         */
        virtual bool hideAll() { return false; }
};


#endif // QTABSTRACTNOTIFICATOR

