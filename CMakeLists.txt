cmake_minimum_required(VERSION 3.15.0)

project(QtImageFormats
    VERSION 6.0.0
    DESCRIPTION "Qt ImageFormats Libraries"
    HOMEPAGE_URL "https://qt.io/"
    LANGUAGES CXX C
)

find_package(Qt6 ${PROJECT_VERSION} CONFIG REQUIRED COMPONENTS BuildInternals Gui)
qt_build_repo()

