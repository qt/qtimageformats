# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: LicenseRef-Qt-Commercial

#####################################################################
## QMngPlugin Plugin:
#####################################################################

qt_internal_add_plugin(QMngPlugin
    OUTPUT_NAME qmng
    PLUGIN_TYPE imageformats
    SOURCES
        main.cpp
        qmnghandler.cpp qmnghandler_p.h
    LIBRARIES
        Libmng::Libmng
        Qt::Core
        Qt::Gui
)
