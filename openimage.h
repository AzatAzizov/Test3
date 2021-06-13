#ifndef OPENIMAGE_H
#define OPENIMAGE_H

#include <QObject>
#include <QQuickPaintedItem>

class openimage : public  QQuickPaintedItem
{
    Q_OBJECT
public:
    openimage(QQuickItem* pqi = nullptr);
    void paint(QPainter* painter, const QString path);

private:
};

#endif // OPENIMAGE_H
