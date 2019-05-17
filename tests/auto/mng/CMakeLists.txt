# Generated from mng.pro.

#####################################################################
## tst_qmng Test:
#####################################################################

add_qt_test(tst_qmng
    SOURCES
        tst_qmng.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

# Resources:
add_qt_resource(tst_qmng "mng" PREFIX "/" BASE "../../shared/images" FILES
    mng/animation.mng
    mng/ball.mng
    mng/corrupt.mng
    mng/dutch.mng
    mng/fire.mng)


#### Keys ignored in scope 1:.:.:mng.pro:<TRUE>:
# CONFIG = "-app_bundle" "testcase"
