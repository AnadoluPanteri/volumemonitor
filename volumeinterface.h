#ifndef VOLUMEINTERFACE_H
#define VOLUMEINTERFACE_H

#include <QObject>
#include <dbus/dbus.h>

class VolumeInterface : public QObject
{
    Q_OBJECT

    public:
        VolumeInterface();
        ~VolumeInterface();

        qreal volume() {
            connect();
            return m_volume;
        }

        void setVolume(qreal volume) {
            if (m_volume != volume) {
                m_volume = volume;
                emit changed();
            }
        }

    signals:
        void changed();

    private:
        void connect();

        DBusConnection  *m_dbus_conn;
        qreal m_volume;
};

#endif
