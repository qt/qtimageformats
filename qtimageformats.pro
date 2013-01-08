requires(qtHaveModule(gui))

load(configure)
qtCompileTest(libmng)
qtCompileTest(libtiff)

load(qt_parts)
