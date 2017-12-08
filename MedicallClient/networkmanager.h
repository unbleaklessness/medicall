#ifndef NETWORKMANAGER_H
#define NETWORKMANAGER_H

#include <QtNetwork/QNetworkAccessManager>
#include <QHttpMultiPart>
#include <QHttpPart>
#include <QJsonObject>
#include <QJsonDocument>
#include <QNetworkReply>
#include <QNetworkRequest>

class NetworkManager : public QObject
{
    Q_OBJECT

public:
    static QNetworkReply* postForm(QNetworkAccessManager* manager, const QUrl& url, const QMap<QString, QString>& data);
    static QNetworkReply* postEmpy(QNetworkAccessManager* manager, const QUrl& url);
    static QNetworkReply* postJson(QNetworkAccessManager* manager, const QUrl& url, const QJsonObject& data);
    static QNetworkReply* postJsonToken(QNetworkAccessManager* manager, const QUrl& url, const QString& token);

    static QMap<QString, QString> jsonToMap(QByteArray& reply);
};

#endif // NETWORKMANAGER_H
