/****************************************************************************
**
** Copyright (C) 2021 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the MNG plugins in the Qt ImageFormats module.
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

#ifndef QMNGHANDLER_P_H
#define QMNGHANDLER_P_H

#include <QtCore/qscopedpointer.h>
#include <QtGui/qimageiohandler.h>

QT_BEGIN_NAMESPACE

class QImage;
class QByteArray;
class QIODevice;
class QVariant;
class QMngHandlerPrivate;

class QMngHandler : public QImageIOHandler
{
    public:
    QMngHandler();
    ~QMngHandler();
    bool canRead() const override;
    bool read(QImage *image) override;
    bool write(const QImage &image) override;
    int currentImageNumber() const override;
    int imageCount() const override;
    bool jumpToImage(int imageNumber) override;
    bool jumpToNextImage() override;
    int loopCount() const override;
    int nextImageDelay() const override;
    static bool canRead(QIODevice *device);
    QVariant option(ImageOption option) const override;
    void setOption(ImageOption option, const QVariant & value) override;
    bool supportsOption(ImageOption option) const override;

    private:
    Q_DECLARE_PRIVATE(QMngHandler)
    QScopedPointer<QMngHandlerPrivate> d_ptr;
};

QT_END_NAMESPACE

#endif // QMNGHANDLER_P_H
