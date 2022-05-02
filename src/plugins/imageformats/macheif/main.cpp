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

#ifndef QT_NO_IMAGEFORMATPLUGIN

#include <qmacheifhandler.h>
#include <qiiofhelpers_p.h>

QT_BEGIN_NAMESPACE

class QMacHeifPlugin : public QImageIOPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QImageIOHandlerFactoryInterface" FILE "macheif.json")

public:
    Capabilities capabilities(QIODevice *device, const QByteArray &format) const override;
    QImageIOHandler *create(QIODevice *device, const QByteArray &format = QByteArray()) const override;
};

QImageIOPlugin::Capabilities QMacHeifPlugin::capabilities(QIODevice *device, const QByteArray &format) const
{
    static const Capabilities sysCaps = QIIOFHelpers::systemCapabilities(QStringLiteral("public.heic"));

    Capabilities cap;
    if (!sysCaps)
        return cap;
    if (format == "heic" || format == "heif")
        return sysCaps;
    if (!format.isEmpty())
        return cap;
    if (!device->isOpen())
        return cap;

    if (sysCaps.testFlag(CanRead) && device->isReadable() && QMacHeifHandler::canRead(device))
        cap |= CanRead;
    if (sysCaps.testFlag(CanWrite) && device->isWritable())
        cap |= CanWrite;
    return cap;
}

QImageIOHandler *QMacHeifPlugin::create(QIODevice *device, const QByteArray &format) const
{
    QMacHeifHandler *handler = new QMacHeifHandler();
    handler->setDevice(device);
    handler->setFormat(format);
    return handler;
}

QT_END_NAMESPACE

#include "main.moc"

#endif // !QT_NO_IMAGEFORMATPLUGIN
