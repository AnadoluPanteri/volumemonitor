#ifndef DEBUGOUTPUT_H
#define DEBUGOUTPUT_H

#include <QtCore>

#include "volumeinterface.h"

class DebugOutput : public QObject
{
    Q_OBJECT

    public:
        DebugOutput(VolumeInterface *interface)
            : QObject(NULL),
              m_interface(interface)
        {}

    public slots:
        void onChanged() {
            qDebug() << "Volume changed: " << m_interface->volume();
        }

    private:
        VolumeInterface *m_interface;
};

#endif
