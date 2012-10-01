
CONFIG += link_pkgconfig
PKGCONFIG += dbus-1 dbus-glib-1

QT += dbus

SOURCES += volumemonitor.cpp

SOURCES += volumeinterface.cpp
HEADERS += volumeinterface.h

HEADERS += debugoutput.h

