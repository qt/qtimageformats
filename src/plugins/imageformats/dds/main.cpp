/****************************************************************************
**
** Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
** Copyright (C) 2013 Ivan Komissarov.
** Contact: http://www.qt-project.org/legal
**
** This file is part of the DDS plugin in the Qt ImageFormats module.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
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
    Capabilities capabilities(QIODevice *device, const QByteArray &format) const;
    QImageIOHandler *create(QIODevice *device, const QByteArray &format = QByteArray()) const;
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
