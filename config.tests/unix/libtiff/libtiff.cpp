/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/
**
** This file is part of the config.tests of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include <tiffio.h>

#if !defined(TIFF_VERSION) && defined(TIFF_VERSION_CLASSIC)
// libtiff 4.0 splits it into TIFF_VERSION_CLASSIC and TIFF_VERSION_BIG
#    define TIFF_VERSION TIFF_VERSION_CLASSIC
#endif

#if !defined(TIFF_VERSION)
#    error "Required libtiff not found"
#elif TIFF_VERSION < 42
#    error "unsupported tiff version"
#endif

int main(int, char **)
{
    tdata_t buffer = _TIFFmalloc(128);
    _TIFFfree(buffer);

    // some libtiff implementations where TIFF_VERSION >= 42 do not
    // have TIFFReadRGBAImageOriented(), so let's check for it
    TIFFReadRGBAImageOriented(0, 0, 0, 0, 0, 0);

    return 0;
}
