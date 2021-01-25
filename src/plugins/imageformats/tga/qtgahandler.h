/****************************************************************************
**
** Copyright (C) 2021 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the TGA plugin in the Qt ImageFormats module.
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

#ifndef QTGAHANDLER_H
#define QTGAHANDLER_H

#include <QtGui/QImageIOHandler>

QT_BEGIN_NAMESPACE

class QTgaFile;

class QTgaHandler : public QImageIOHandler
{
public:
    QTgaHandler();
    ~QTgaHandler();

    bool canRead() const override;
    bool read(QImage *image) override;

    static bool canRead(QIODevice *device);

    QVariant option(ImageOption option) const override;
    void setOption(ImageOption option, const QVariant &value) override;
    bool supportsOption(ImageOption option) const override;

private:
    mutable QTgaFile *tga;
};

QT_END_NAMESPACE

#endif // QTGAHANDLER_H
