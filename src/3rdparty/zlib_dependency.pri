# zlib dependency satisfied by bundled 3rd party zlib or system zlib
contains(QT_CONFIG, system-zlib) {
    if(unix|win32-g++*): LIBS_PRIVATE += -lz
    else:                LIBS += zdll.lib
} else {
    INCLUDEPATH += $$[QT_INSTALL_HEADERS/get]/QtZlib
}
