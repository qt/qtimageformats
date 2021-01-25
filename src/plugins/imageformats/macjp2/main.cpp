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

#ifndef QT_NO_IMAGEFORMATPLUGIN

#include "qmacjp2handler.h"

QT_BEGIN_NAMESPACE

class QMacJp2Plugin : public QImageIOPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QImageIOHandlerFactoryInterface" FILE "macjp2.json")

public:
    Capabilities capabilities(QIODevice *device, const QByteArray &format) const override;
    QImageIOHandler *create(QIODevice *device, const QByteArray &format = QByteArray()) const override;
};

QImageIOPlugin::Capabilities QMacJp2Plugin::capabilities(QIODevice *device, const QByteArray &format) const
{
    if (format == "jp2")
        return Capabilities(CanRead | CanWrite);
    Capabilities cap;
    if (!format.isEmpty())
        return cap;
    if (!device->isOpen())
        return cap;

    if (device->isReadable() && QMacJp2Handler::canRead(device))
        cap |= CanRead;
    if (device->isWritable())
        cap |= CanWrite;
    return cap;
}

QImageIOHandler *QMacJp2Plugin::create(QIODevice *device, const QByteArray &format) const
{
    QMacJp2Handler *handler = new QMacJp2Handler();
    handler->setDevice(device);
    handler->setFormat(format);
    return handler;
}

QT_END_NAMESPACE

#include "main.moc"

#endif // !QT_NO_IMAGEFORMATPLUGIN
