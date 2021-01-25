/****************************************************************************
**
** Copyright (C) 2021 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the MacJp2 plugin in the Qt ImageFormats module.
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

#ifndef QMACJP2HANDLER_H
#define QMACJP2HANDLER_H

#include <QScopedPointer>
#include <QImageIOHandler>

QT_BEGIN_NAMESPACE

class QImage;
class QByteArray;
class QIODevice;
class QVariant;
class QMacJp2HandlerPrivate;

class QMacJp2Handler : public QImageIOHandler
{
public:
    QMacJp2Handler();
    ~QMacJp2Handler();

    bool canRead() const override;
    bool read(QImage *image) override;
    bool write(const QImage &image) override;
    QVariant option(ImageOption option) const override;
    void setOption(ImageOption option, const QVariant &value) override;
    bool supportsOption(ImageOption option) const override;

    static bool canRead(QIODevice *iod);

private:
    Q_DECLARE_PRIVATE(QMacJp2Handler)
    QScopedPointer<QMacJp2HandlerPrivate> d_ptr;
};

QT_END_NAMESPACE

#endif // QMACJP2HANDLER_P_H
