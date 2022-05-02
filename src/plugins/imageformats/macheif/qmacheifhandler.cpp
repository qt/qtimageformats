/****************************************************************************
**
** Copyright (C) 2022 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the MacHeif plugin in the Qt ImageFormats module.
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

#include "qmacheifhandler.h"
#include "qiiofhelpers_p.h"
#include <QVariant>

QT_BEGIN_NAMESPACE

QMacHeifHandler::QMacHeifHandler()
    : d(new QIIOFHelper(this))
{
}

QMacHeifHandler::~QMacHeifHandler()
{
}

bool QMacHeifHandler::canRead(QIODevice *iod)
{
    bool bCanRead = false;
    char buf[12];
    if (iod && iod->peek(buf, 12) == 12) {
        bCanRead = (!qstrncmp(buf + 4, "ftyp", 4) &&
                    (!qstrncmp(buf + 8, "heic", 4) ||
                     !qstrncmp(buf + 8, "heix", 4) ||
                     !qstrncmp(buf + 8, "mif1", 4)));
    }
    return bCanRead;
}

bool QMacHeifHandler::canRead() const
{
    if (canRead(device())) {
        setFormat("heic");
        return true;
    }
    return false;
}

bool QMacHeifHandler::read(QImage *image)
{
    return d->readImage(image);
}

bool QMacHeifHandler::write(const QImage &image)
{
    return d->writeImage(image, QStringLiteral("public.heic"));
}

QVariant QMacHeifHandler::option(ImageOption option) const
{
    return d->imageProperty(option);
}

void QMacHeifHandler::setOption(ImageOption option, const QVariant &value)
{
    d->setOption(option, value);
}

bool QMacHeifHandler::supportsOption(ImageOption option) const
{
    return option == Quality
        || option == Size
        || option == ImageTransformation;
}

QT_END_NAMESPACE
