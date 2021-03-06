/*
 * This file was generated by qofonodbusxml2cpp version 0.7
 * Command line was: qofonodbusxml2cpp -p qofonovoicecall ofono-voicecall.xml org.ofono.VoiceCall
 *
 * qofonodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QOFONOVOICECALL_H
#define QOFONOVOICECALL_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include <qofonodbusabstractinterface.h>

#if defined(QOFONO_LIBRARY)
    #define QOFONO_EXPORT Q_DECL_EXPORT
#else
    #define QOFONO_EXPORT Q_DECL_IMPORT
#endif

/*
 * Proxy class for interface org.ofono.VoiceCall
 */
class QOFONO_EXPORT OrgOfonoVoiceCallInterface: public QOFonoDbusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.ofono.VoiceCall"; }

public:
    OrgOfonoVoiceCallInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgOfonoVoiceCallInterface();

public Q_SLOTS: // METHODS
    inline QOFonoDBusPendingReply<> Answer()
    {
        QList<QVariant> argumentList;
        return ofonoAsyncCall(QLatin1String("Answer"), argumentList);
    }

    inline QOFonoDBusPendingReply<> Deflect(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0);
        return ofonoAsyncCall(QLatin1String("Deflect"), argumentList);
    }

    inline QOFonoDBusPendingReply<QVariantMap> GetProperties()
    {
        QList<QVariant> argumentList;
        return ofonoAsyncCall(QLatin1String("GetProperties"), argumentList);
    }

    inline QOFonoDBusPendingReply<> Hangup()
    {
        QList<QVariant> argumentList;
        return ofonoAsyncCall(QLatin1String("Hangup"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void DisconnectReason(const QString &in0);
    void PropertyChanged(const QString &in0, const QDBusVariant &in1);
};

namespace org {
  namespace ofono {
    typedef ::OrgOfonoVoiceCallInterface VoiceCall;
  }
}
#endif
