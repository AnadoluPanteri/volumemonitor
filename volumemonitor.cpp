
#include <QtCore>

#include "volumeinterface.h"
#include "debugoutput.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    VolumeInterface *interface = new VolumeInterface;
    DebugOutput *debug = new DebugOutput(interface);

    QObject::connect(interface, SIGNAL(changed()),
            debug, SLOT(onChanged()));

    qDebug() << "Volume: " << interface->volume();

    int result = app.exec();

    delete debug;
    delete interface;

    return result;
}

