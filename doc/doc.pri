OTHER_FILES += \
               $$PWD/qtimageformats.qdocconf \
               $$PWD/qtimageformats-dita.qdocconf

docs_target.target = docs
docs_target.commands = qdoc $$PWD/qtimageformats.qdocconf

ditadocs_target.target = ditadocs
ditadocs_target.commands = qdoc $$PWD/qtimageformats-dita.qdocconf

QMAKE_EXTRA_TARGETS = docs_target ditadocs_target
QMAKE_CLEAN += \
               "-r $$PWD/html" \
               "-r $$PWD/ditaxml"

