# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: BSD-3-Clause

if(NOT QT_BUILD_STANDALONE_TESTS AND NOT QT_BUILDING_QT)
    cmake_minimum_required(VERSION 3.16)
    project(tst_qjp2 LANGUAGES CXX)
    find_package(Qt6BuildInternals REQUIRED COMPONENTS STANDALONE_TEST)
endif()

#####################################################################
## tst_qjp2 Test:
#####################################################################

qt_internal_add_test(tst_qjp2
    SOURCES
        tst_qjp2.cpp
    LIBRARIES
        Qt::Gui
)

# Resources:
set(jp2_resource_files
    "../../shared/images/jp2/logo.bmp"
    "../../shared/images/jp2/logo.jp2"
)

qt_internal_add_resource(tst_qjp2 "jp2"
    PREFIX
        "/"
    BASE
        "../../shared/images"
    FILES
        ${jp2_resource_files}
)
