/****************************************************************************
**
** Copyright (C) 2021 The Qt Company Ltd.
** Copyright (C) 2016 Ivan Komissarov.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the DDS plugin in the Qt ImageFormats module.
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
****************************************************************************/

#ifndef QDDSHANDLER_H
#define QDDSHANDLER_H

#include <QtGui/qimageiohandler.h>
#include "ddsheader.h"

#ifndef QT_NO_DATASTREAM

QT_BEGIN_NAMESPACE

class QDDSHandler : public QImageIOHandler
{
public:
    QDDSHandler();

    bool canRead() const override;
    bool read(QImage *image) override;
    bool write(const QImage &image) override;

    QVariant option(QImageIOHandler::ImageOption option) const override;
    void setOption(ImageOption option, const QVariant &value) override;
    bool supportsOption(QImageIOHandler::ImageOption option) const override;

    int imageCount() const override;
    bool jumpToImage(int imageNumber) override;

    static bool canRead(QIODevice *device);

private:
    bool ensureScanned() const;
    bool verifyHeader(const DDSHeader &dds) const;

private:
    enum ScanState {
        ScanError = -1,
        ScanNotScanned = 0,
        ScanSuccess = 1,
    };

    DDSHeader m_header;
    int m_format;
    DDSHeaderDX10 m_header10;
    int m_currentImage;
    mutable ScanState m_scanState;
};

QT_END_NAMESPACE

#endif // QT_NO_DATASTREAM

#endif // QDDSHANDLER_H
