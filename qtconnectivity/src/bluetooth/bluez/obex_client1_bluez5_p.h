/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp org.bluez.Client1.xml -p asd
 *
 * qdbusxml2cpp is Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef ASD_H_1399976174
#define ASD_H_1399976174

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.bluez.obex.Client1
 */
class OrgBluezObexClient1Interface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.bluez.obex.Client1"; }

public:
    OrgBluezObexClient1Interface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgBluezObexClient1Interface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QDBusObjectPath> CreateSession(const QString &destination, const QVariantMap &args)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(destination) << QVariant::fromValue(args);
        return asyncCallWithArgumentList(QLatin1String("CreateSession"), argumentList);
    }

    inline QDBusPendingReply<> RemoveSession(const QDBusObjectPath &session)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(session);
        return asyncCallWithArgumentList(QLatin1String("RemoveSession"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace org {
  namespace bluez {
    namespace obex {
      typedef ::OrgBluezObexClient1Interface Client1;
    }
  }
}
#endif
