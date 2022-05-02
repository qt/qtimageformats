/****************************************************************************
**
** Copyright (C) 2022 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the plugins of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:COMM$
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** $QT_END_LICENSE$
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
******************************************************************************/

#ifndef QTIFFHANDLER_P_H
#define QTIFFHANDLER_P_H

#include <QtCore/QScopedPointer>
#include <QtGui/QImageIOHandler>

QT_BEGIN_NAMESPACE

class QTiffHandlerPrivate;
class QTiffHandler : public QImageIOHandler
{
public:
    QTiffHandler();

    bool canRead() const override;
    bool read(QImage *image) override;
    bool write(const QImage &image) override;

    static bool canRead(QIODevice *device);

    QVariant option(ImageOption option) const override;
    void setOption(ImageOption option, const QVariant &value) override;
    bool supportsOption(ImageOption option) const override;

    bool jumpToNextImage() override;
    bool jumpToImage(int imageNumber) override;
    int imageCount() const override;
    int currentImageNumber() const override;

    enum Compression {
        NoCompression = 0,
        LzwCompression = 1
    };
private:
    void convert32BitOrder(void *buffer, int width);
    void rgb48fixup(QImage *image, bool floatingPoint);
    void rgb96fixup(QImage *image);
    const QScopedPointer<QTiffHandlerPrivate> d;
    bool ensureHaveDirectoryCount() const;
};

QT_END_NAMESPACE

#endif // QTIFFHANDLER_P_H
