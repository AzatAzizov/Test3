#include "openimage.h"
#include <QPixmap>
#include <QPainter>
#include <QSize>

openimage::openimage(QQuickItem* pqi) : QQuickPaintedItem(pqi)
{
//    if() {
//        paint(, path);
//    }
}

void openimage::paint(QPainter *painter, const QString path)
{
    QPixmap pixmap(path);
    QRectF source(0, 0, 0, 0);
    QRectF imageRect = boundingRect();
    imageRect.setSize(pixmap.size().scaled(boundingRect().size().toSize(),Qt::KeepAspectRatio));
    imageRect.moveCenter(boundingRect().center());
    painter->drawPixmap(imageRect, pixmap, source);
}
