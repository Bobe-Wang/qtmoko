/*
 * This file was generated by qfsodbusxml2cpp version 0.7
 * Command line was: qfsodbusxml2cpp -p qfsomusicplayer -c QFsoMusicPlayer specs/xml/org.freesmartphone.MusicPlayer.xml
 *
 * qfsodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFSOMUSICPLAYER_H
#define QFSOMUSICPLAYER_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include <qfsodbusabstractinterface.h>

#if defined(QFSO_LIBRARY)
    #define QFSO_EXPORT Q_DECL_EXPORT
#else
    #define QFSO_EXPORT Q_DECL_IMPORT
#endif

/*
 * Proxy class for interface org.freesmartphone.MusicPlayer
 */
class QFSO_EXPORT QFsoMusicPlayer: public QFsoDbusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freesmartphone.MusicPlayer"; }

public:
    QFsoMusicPlayer(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFsoMusicPlayer();

public Q_SLOTS: // METHODS
    inline QFsoDBusPendingReply<> DeletePlaylist(const QDBusObjectPath &list)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(list);
        return fsoAsyncCall(QLatin1String("DeletePlaylist"), argumentList);
    }

    inline QFsoDBusPendingReply<QDBusObjectPath> GetCurrentPlaylist()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("GetCurrentPlaylist"), argumentList);
    }

    inline QFsoDBusPendingReply<QVariantMap> GetInfoForFile(const QString &file)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(file);
        return fsoAsyncCall(QLatin1String("GetInfoForFile"), argumentList);
    }

    inline QFsoDBusPendingReply<QString> GetPlaying()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("GetPlaying"), argumentList);
    }

    inline QFsoDBusPendingReply<QVariantMap> GetPlayingInfo()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("GetPlayingInfo"), argumentList);
    }

    inline QFsoDBusPendingReply<QStringList> GetPlaylists()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("GetPlaylists"), argumentList);
    }

    inline QFsoDBusPendingReply<int> GetVolume()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("GetVolume"), argumentList);
    }

    inline QFsoDBusPendingReply<> Jump(int position)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(position);
        return fsoAsyncCall(QLatin1String("Jump"), argumentList);
    }

    inline QFsoDBusPendingReply<QDBusObjectPath> NewPlaylist(const QString &name)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(name);
        return fsoAsyncCall(QLatin1String("NewPlaylist"), argumentList);
    }

    inline QFsoDBusPendingReply<> Next()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("Next"), argumentList);
    }

    inline QFsoDBusPendingReply<> Pause()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("Pause"), argumentList);
    }

    inline QFsoDBusPendingReply<> Play()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("Play"), argumentList);
    }

    inline QFsoDBusPendingReply<> PopPause()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("PopPause"), argumentList);
    }

    inline QFsoDBusPendingReply<> Previous()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("Previous"), argumentList);
    }

    inline QFsoDBusPendingReply<> PushPause()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("PushPause"), argumentList);
    }

    inline QFsoDBusPendingReply<> SeekBackward(int step)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(step);
        return fsoAsyncCall(QLatin1String("SeekBackward"), argumentList);
    }

    inline QFsoDBusPendingReply<> SeekForward(int step)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(step);
        return fsoAsyncCall(QLatin1String("SeekForward"), argumentList);
    }

    inline QFsoDBusPendingReply<> SetCurrentPlaylist(const QDBusObjectPath &list)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(list);
        return fsoAsyncCall(QLatin1String("SetCurrentPlaylist"), argumentList);
    }

    inline QFsoDBusPendingReply<> SetPlaying(const QString &file)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(file);
        return fsoAsyncCall(QLatin1String("SetPlaying"), argumentList);
    }

    inline QFsoDBusPendingReply<> SetVolume(int volume)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(volume);
        return fsoAsyncCall(QLatin1String("SetVolume"), argumentList);
    }

    inline QFsoDBusPendingReply<> Stop()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("Stop"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void Error(const QString &the_error, const QString &info);
    void PlayingChanged(const QString &file);
    void PlaylistAdded(const QDBusObjectPath &path);
    void PlaylistRemoved(const QDBusObjectPath &path);
    void Progress(int progress);
    void State(const QString &state);
};

namespace org {
  namespace freesmartphone {
    typedef ::QFsoMusicPlayer MusicPlayer;
  }
}
#endif