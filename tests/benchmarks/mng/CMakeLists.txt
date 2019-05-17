# Generated from mng.pro.

#####################################################################
## tst_bench_qmng Binary:
#####################################################################

add_qt_executable(tst_bench_qmng
    GUI
    SOURCES
        tst_qmng.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Test
)

# Resources:
add_qt_resource(tst_bench_qmng "mng" PREFIX "/" BASE "../../shared/images" FILES
    mng/animation.mng
    mng/ball.mng
    mng/corrupt.mng
    mng/dutch.mng
    mng/fire.mng)


#### Keys ignored in scope 1:.:.:mng.pro:<TRUE>:
# CONFIG = "-app_bundle"
