# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: BSD-3-Clause

if(NOT QT_BUILD_STANDALONE_TESTS AND NOT QT_BUILDING_QT)
    cmake_minimum_required(VERSION 3.16)
    project(tst_qwebp LANGUAGES CXX)
    find_package(Qt6BuildInternals REQUIRED COMPONENTS STANDALONE_TEST)
endif()

#####################################################################
## tst_qwebp Test:
#####################################################################

qt_internal_add_test(tst_qwebp
    SOURCES
        tst_qwebp.cpp
    LIBRARIES
        Qt::Gui
)

# Resources:
set(webp_resource_files
    "images/kollada.png"
    "images/kollada.webp"
    "images/kollada_animation.webp"
    "images/kollada_lossless.webp"
    "images/kollada_noalpha.webp"
)

qt_internal_add_resource(tst_qwebp "webp"
    PREFIX
        "/"
    FILES
        ${webp_resource_files}
)

