# Generated from tiff.pro.

#####################################################################
## tst_qtiff Test:
#####################################################################

add_qt_test(tst_qtiff
    SOURCES
        tst_qtiff.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

# Resources:
add_qt_resource(tst_qtiff "tiff" PREFIX "/" BASE "../../shared/images" FILES
    tiff/16bpc.tiff
    tiff/colorful.bmp
    tiff/corrupt-data.tif
    tiff/gray16.tiff
    tiff/grayscale-ref.tif
    tiff/grayscale.tif
    tiff/image.tif
    tiff/image_100dpi.tif
    tiff/indexed_orientation_1.tiff
    tiff/indexed_orientation_2.tiff
    tiff/indexed_orientation_3.tiff
    tiff/indexed_orientation_4.tiff
    tiff/indexed_orientation_5.tiff
    tiff/indexed_orientation_6.tiff
    tiff/indexed_orientation_7.tiff
    tiff/indexed_orientation_8.tiff
    tiff/mono_orientation_1.tiff
    tiff/mono_orientation_2.tiff
    tiff/mono_orientation_3.tiff
    tiff/mono_orientation_4.tiff
    tiff/mono_orientation_5.tiff
    tiff/mono_orientation_6.tiff
    tiff/mono_orientation_7.tiff
    tiff/mono_orientation_8.tiff
    tiff/multipage.tiff
    tiff/oddsize_grayscale.tiff
    tiff/oddsize_mono.tiff
    tiff/original_grayscale.tiff
    tiff/original_indexed.tiff
    tiff/original_mono.tiff
    tiff/original_rgb.tiff
    tiff/rgb_orientation_1.tiff
    tiff/rgb_orientation_2.tiff
    tiff/rgb_orientation_3.tiff
    tiff/rgb_orientation_4.tiff
    tiff/rgb_orientation_5.tiff
    tiff/rgb_orientation_6.tiff
    tiff/rgb_orientation_7.tiff
    tiff/rgb_orientation_8.tiff
    tiff/rgba_adobedeflate_littleendian.tif
    tiff/rgba_lzw_littleendian.tif
    tiff/rgba_nocompression_bigendian.tif
    tiff/rgba_nocompression_littleendian.tif
    tiff/rgba_packbits_littleendian.tif
    tiff/rgba_zipdeflate_littleendian.tif
    tiff/teapot.tiff
    tiff/tiled_grayscale.tiff
    tiff/tiled_indexed.tiff
    tiff/tiled_mono.tiff
    tiff/tiled_oddsize_grayscale.tiff
    tiff/tiled_oddsize_mono.tiff
    tiff/tiled_rgb.tiff)


#### Keys ignored in scope 1:.:.:tiff.pro:<TRUE>:
# CONFIG = "-app_bundle" "testcase"
