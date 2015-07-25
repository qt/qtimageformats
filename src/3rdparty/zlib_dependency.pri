# zlib dependency satisfied by bundled 3rd party zlib or system zlib
contains(QT_CONFIG, system-zlib) {
    unix|mingw: LIBS_PRIVATE += -lz
    else {
        isEmpty(ZLIB_LIBS): LIBS += zdll.lib
        else: LIBS += $$ZLIB_LIBS
    }
} else {
    load(qt_build_paths)
    git_build: \
        INCLUDEPATH += $$[QT_INSTALL_HEADERS/get]/QtZlib
    else: \
        INCLUDEPATH += $$[QT_INSTALL_HEADERS/src]/QtZlib
}
