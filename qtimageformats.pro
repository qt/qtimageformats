requires(qtHaveModule(gui))

load(configure)
qtCompileTest(jasper)
qtCompileTest(libmng)
qtCompileTest(libtiff)

load(qt_parts)
