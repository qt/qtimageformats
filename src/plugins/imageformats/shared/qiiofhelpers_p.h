/****************************************************************************
**
** Copyright (C) 2022 The Qt Company Ltd.
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
******************************************************************************/

#ifndef QIIOFHELPERS_P_H
#define QIIOFHELPERS_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of other Qt classes.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <QImageIOPlugin>
#include <private/qcore_mac_p.h>
#include <ImageIO/ImageIO.h>
#include <QList>

QT_BEGIN_NAMESPACE

/*
Functions to utilize the native ImageIO Framework in OS X and iOS
*/

class QIIOFHelpers
{
public:
    static QImageIOPlugin::Capabilities systemCapabilities(const QString &uti);
    static bool readImage(QImageIOHandler *q_ptr, QImage *out);
    static bool writeImage(QImageIOHandler *q_ptr, const QImage &in, const QString &uti);
};

class QIIOFHelper
{
public:
    QIIOFHelper(QImageIOHandler *q);

    bool readImage(QImage *out);
    bool writeImage(const QImage &in, const QString &uti);
    QVariant imageProperty(QImageIOHandler::ImageOption option);
    void setOption(QImageIOHandler::ImageOption option, const QVariant &value);

protected:
    bool initRead();
    bool getIntProperty(CFStringRef property, int *value);

    QImageIOHandler *q_ptr = nullptr;
    QList<QVariant> writeOptions;
    QCFType<CGDataProviderRef> cgDataProvider = nullptr;
    QCFType<CGImageSourceRef> cgImageSource = nullptr;
    QCFType<CFDictionaryRef> cfImageDict = nullptr;
};

QT_END_NAMESPACE

#endif
