# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: BSD-3-Clause

if(NOT QT_BUILD_STANDALONE_TESTS AND NOT QT_BUILDING_QT)
    cmake_minimum_required(VERSION 3.16)
    project(tst_qwbmp LANGUAGES CXX)
    find_package(Qt6BuildInternals REQUIRED COMPONENTS STANDALONE_TEST)
endif()

#####################################################################
## tst_qwbmp Test:
#####################################################################

qt_internal_add_test(tst_qwbmp
    SOURCES
        tst_qwbmp.cpp
    LIBRARIES
        Qt::Gui
)

# Resources:
set(wbmp_resource_files
    "../../shared/images/wbmp/qt-logo-big.wbmp"
    "../../shared/images/wbmp/qt-logo-small.wbmp"
)

qt_internal_add_resource(tst_qwbmp "wbmp"
    PREFIX
        "/"
    BASE
        "../../shared/images"
    FILES
        ${wbmp_resource_files}
)
