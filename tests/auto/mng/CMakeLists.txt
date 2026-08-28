# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: BSD-3-Clause

if(NOT QT_BUILD_STANDALONE_TESTS AND NOT QT_BUILDING_QT)
    cmake_minimum_required(VERSION 3.16)
    project(tst_qmng LANGUAGES CXX)
    find_package(Qt6BuildInternals REQUIRED COMPONENTS STANDALONE_TEST)
endif()

#####################################################################
## tst_qmng Test:
#####################################################################

qt_internal_add_test(tst_qmng
    SOURCES
        tst_qmng.cpp
    LIBRARIES
        Qt::Gui
)

# Resources:
set(mng_resource_files
    "../../shared/images/mng/animation.mng"
    "../../shared/images/mng/ball.mng"
    "../../shared/images/mng/corrupt.mng"
    "../../shared/images/mng/dutch.mng"
    "../../shared/images/mng/fire.mng"
)

qt_internal_add_resource(tst_qmng "mng"
    PREFIX
        "/"
    BASE
        "../../shared/images"
    FILES
        ${mng_resource_files}
)
