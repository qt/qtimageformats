TEMPLATE = subdirs

module_qtimageformats_src.subdir = src
module_qtimageformats_src.target = module-qtimageformats-src

module_qtimageformats_tools.subdir = tools
module_qtimageformats_tools.target = module-qtimageformats-tools
module_qtimageformats_tools.depends = module_qtimageformats_src

module_qtimageformats_tests.subdir = tests
module_qtimageformats_tests.target = module-qtimageformats-tests
module_qtimageformats_tests.depends = module_qtimageformats_src
module_qtimageformats_tests.CONFIG = no_default_install
!contains(QT_BUILD_PARTS,tests):module_qtimageformats_tests.CONFIG += no_default_target
SUBDIRS += module_qtimageformats_src \
           module_qtimageformats_tests

include(doc/doc.pri)
