#ifndef BLOGENTRY_H
#define BLOGENTRY_H

#include <QString>
#include <QDateTime>
#include <QJsonObject>

class Blog;

class BlogEntry
{
public:
    BlogEntry();
    BlogEntry(QString title, QDateTime datetime, QString content);

    void write(QJsonObject&) const;
    bool read(const QJsonObject&);

    QString getTitle() {
        return title;
    }

    QString getDatetime() {
        return datetime.toString(Qt::ISODate);
    }

    QString getContent() {
        return content;
    }
private:
    QString title;
    QDateTime datetime;
    QString content;

    friend Blog;
};

#endif // BLOGENTRY_H
