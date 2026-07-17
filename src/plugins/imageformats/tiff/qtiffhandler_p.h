// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only
// Qt-Security score:significant reason:default


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

    enum class Compression {
        None = 0,
        Lzw = 1,
        HuffmanRLE = 2,
        Group3 = 3,
        Group4 = 4,
        Jpeg = 5
    };
private:
    const QScopedPointer<QTiffHandlerPrivate> d;
    bool ensureHaveDirectoryCount() const;
    int toLibTiffCompression(Compression compression) const;
};

QT_END_NAMESPACE

#endif // QTIFFHANDLER_P_H
