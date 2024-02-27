 INCLUDEPATH += $$PWD
 DEPENDPATH += $$PWD


#可移动窗口的部分实现在Qt6中弃用
HEADERS += \
    $$PWD/animationstackwidget.h \
    $$PWD/iplineedit.h \
    $$PWD/customwidget.h \
    $$PWD/clineedit.h \
    $$PWD/chatstackedwidget.h

SOURCES += \
    $$PWD/animationstackwidget.cpp \
    $$PWD/iplineedit.cpp \
    $$PWD/customwidget.cpp \
    $$PWD/clineedit.cpp \
    $$PWD/chatstackedwidget.cpp

##pri文件
