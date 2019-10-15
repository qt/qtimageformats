# Generated from jp2.pro.

#####################################################################
## tst_qjp2 Test:
#####################################################################

add_qt_test(tst_qjp2
    SOURCES
        tst_qjp2.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

# Resources:
set_source_files_properties("../../shared/images/jp2/logo.bmp"
    PROPERTIES QT_RESOURCE_ALIAS "jp2/logo.bmp"
)
set_source_files_properties("../../shared/images/jp2/logo.jp2"
    PROPERTIES QT_RESOURCE_ALIAS "jp2/logo.jp2"
)
set(jp2_resource_files
    "jp2/logo.bmp"
    "jp2/logo.jp2"
)

add_qt_resource(tst_qjp2 "jp2"
    PREFIX
        "/"
    BASE
        "../../shared/images"
    FILES
        ${jp2_resource_files}
)

