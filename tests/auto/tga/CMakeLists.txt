# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: BSD-3-Clause

if(NOT QT_BUILD_STANDALONE_TESTS AND NOT QT_BUILDING_QT)
    cmake_minimum_required(VERSION 3.16)
    project(tst_qtga LANGUAGES CXX)
    find_package(Qt6BuildInternals REQUIRED COMPONENTS STANDALONE_TEST)
endif()

#####################################################################
## tst_qtga Test:
#####################################################################

qt_internal_add_test(tst_qtga
    SOURCES
        tst_qtga.cpp
    LIBRARIES
        Qt::Gui
)

# Resources:
set(tga_resource_files
    "../../shared/images/tga/test-flag.tga"
)

qt_internal_add_resource(tst_qtga "tga"
    PREFIX
        "/"
    BASE
        "../../shared/images"
    FILES
        ${tga_resource_files}
)
