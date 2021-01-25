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

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#ifndef QWBMPHANDLER_P_H
#define QWBMPHANDLER_P_H

#include <qimageiohandler.h>

QT_BEGIN_NAMESPACE

class WBMPReader;

class QWbmpHandler : public QImageIOHandler
{
public:
    QWbmpHandler(QIODevice *device);
    ~QWbmpHandler();

    bool canRead() const override;
    bool read(QImage *image) override;
    bool write(const QImage &image) override;

    QVariant option(ImageOption option) const override;
    bool supportsOption(ImageOption option) const override;

    static bool canRead(QIODevice *device);

private:
    WBMPReader *m_reader;
};

QT_END_NAMESPACE

#endif /* QWBMPHANDLER_P_H */
