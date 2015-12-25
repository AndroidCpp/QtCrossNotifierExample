#ifndef QTNotifierFACTORY_H
#define QTNotifierFACTORY_H

#include "QtAbstractNotifier.h"

class QtNotifierFactory
{
    public:
        /**
         * @return  платформенно-зависимый объект для демонстрации нотификаций,
         *          если платформа не поддерживается вернет NULL
         *          и выдаст предупреждение.
         * @see QtAbstractNotifier
         */
         static QtAbstractNotifier *GetPlatformDependencyNotifier();
};

#endif // QTNotifierFACTORY_H
