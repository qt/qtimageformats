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

#include <QtGui/qimageiohandler.h>

#include "qddshandler.h"

#ifndef QT_NO_IMAGEFORMATPLUGIN

#ifndef QT_NO_DATASTREAM

QT_BEGIN_NAMESPACE

class QDDSPlugin : public QImageIOPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QImageIOHandlerFactoryInterface" FILE "dds.json")
public:
    Capabilities capabilities(QIODevice *device, const QByteArray &format) const override;
    QImageIOHandler *create(QIODevice *device, const QByteArray &format = QByteArray()) const override;
};

QImageIOPlugin::Capabilities QDDSPlugin::capabilities(QIODevice *device, const QByteArray &format) const
{
    if (format == QByteArrayLiteral("dds"))
        return Capabilities(CanRead | CanWrite);
    if (!format.isEmpty())
        return 0;
    if (!device || !device->isOpen())
        return 0;

    Capabilities cap;
    if (device->isReadable() && QDDSHandler::canRead(device))
        cap |= CanRead;
    if (device->isWritable())
        cap |= CanWrite;
    return cap;
}

QImageIOHandler *QDDSPlugin::create(QIODevice *device, const QByteArray &format) const
{
    QImageIOHandler *handler = new QDDSHandler;
    handler->setDevice(device);
    handler->setFormat(format);
    return handler;
}

QT_END_NAMESPACE

#include "main.moc"

#endif // QT_NO_DATASTREAM

#endif // QT_NO_IMAGEFORMATPLUGIN
