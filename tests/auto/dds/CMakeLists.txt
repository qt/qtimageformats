# Generated from dds.pro.

#####################################################################
## tst_qdds Test:
#####################################################################

add_qt_test(tst_qdds
    SOURCES
        tst_qdds.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

# Resources:
add_qt_resource(tst_qdds "dds" PREFIX "/" BASE "../../shared/images" FILES
    dds/A16B16G16R16.dds
    dds/A16B16G16R16F.dds
    dds/A1R5G5B5.dds
    dds/A2B10G10R10.dds
    dds/A2R10G10B10.dds
    dds/A2W10V10U10.dds
    dds/A32B32G32R32F.dds
    dds/A4L4.dds
    dds/A4R4G4B4.dds
    dds/A8.dds
    dds/A8B8G8R8.dds
    dds/A8L8.dds
    dds/A8R3G3B2.dds
    dds/A8R8G8B8.2.dds
    dds/A8R8G8B8.dds
    dds/ATI2.dds
    dds/CxV8U8.dds
    dds/DXT1.dds
    dds/DXT2.dds
    dds/DXT3.dds
    dds/DXT4.dds
    dds/DXT5.dds
    dds/G16R16.dds
    dds/G16R16F.dds
    dds/G32R32F.dds
    dds/G8R8_G8B8.dds
    dds/L16.dds
    dds/L6V5U5.dds
    dds/L8.dds
    dds/P4.dds
    dds/P8.dds
    dds/Q16W16V16U16.dds
    dds/Q8W8V8U8.dds
    dds/R16F.dds
    dds/R32F.dds
    dds/R3G3B2.dds
    dds/R5G6B5.dds
    dds/R8G8B8.dds
    dds/R8G8_B8G8.dds
    dds/RXGB.dds
    dds/UYVY.dds
    dds/V16U16.dds
    dds/V8U8.dds
    dds/X1R5G5B5.dds
    dds/X4R4G4B4.dds
    dds/X8B8G8R8.dds
    dds/X8L8V8U8.dds
    dds/X8R8G8B8.dds
    dds/YUY2.dds
    dds/mipmaps.dds)


#### Keys ignored in scope 1:.:.:dds.pro:<TRUE>:
# CONFIG = "-app_bundle" "testcase"
