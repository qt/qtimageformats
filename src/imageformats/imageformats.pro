TEMPLATE = aux

QMAKE_DOCS             = $$PWD/doc/qtimageformats.qdocconf
QMAKE_DOCS_BASE_OUTDIR = $$[QT_INSTALL_DOCS]
QMAKE_DOCS_OUTPUTDIR   = $$[QT_INSTALL_DOCS]/qtimageformats
QMAKE_DOCS_TARGET      = qtimageformats
CONFIG += qt_install_module_docs
