/****************************************************************************
**
** Copyright (C) 2021 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the WBMP plugin in the Qt ImageFormats module.
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

#include <qimageiohandler.h>

#ifndef QT_NO_IMAGEFORMATPLUGIN

#ifdef QT_NO_IMAGEFORMAT_WBMP
#undef QT_NO_IMAGEFORMAT_WBMP
#endif

#include "qwbmphandler_p.h"

QT_BEGIN_NAMESPACE

class QWbmpPlugin : public QImageIOPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QImageIOHandlerFactoryInterface" FILE "wbmp.json")

public:
    QImageIOPlugin::Capabilities capabilities(QIODevice *device, const QByteArray &format) const override;
    QImageIOHandler *create(QIODevice *device, const QByteArray &format = QByteArray()) const override;
};

QImageIOPlugin::Capabilities QWbmpPlugin::capabilities(QIODevice *device, const QByteArray &format) const
{
    if (format == "wbmp")
        return Capabilities(CanRead | CanWrite);

    Capabilities cap;
    if (!format.isEmpty())
        return cap;

    if (!device->isOpen())
        return cap;

    if (device->isReadable() && QWbmpHandler::canRead(device))
        cap |= CanRead;

    if (device->isWritable())
        cap |= CanWrite;

    return cap;
}

QImageIOHandler * QWbmpPlugin::create(QIODevice *device, const QByteArray &format) const
{
    QImageIOHandler *handler = new QWbmpHandler(device);

    handler->setFormat(format);
    return handler;
}

QT_END_NAMESPACE

#include "main.moc"

#endif /* QT_NO_IMAGEFORMATPLUGIN */
