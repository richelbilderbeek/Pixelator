include(../RibiLibraries/ConsoleApplicationNoWeffcpp.pri)
include(../RibiLibraries/Boost.pri)
include(../RibiLibraries/GeneralConsole.pri)

include(../Pixelator/PixelatorConsole.pri)

SOURCES += main.cpp

# Thanks to Qt
QMAKE_CXXFLAGS += -Wno-unused-variable