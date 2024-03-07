 INCLUDEPATH += $$PWD
 DEPENDPATH += $$PWD


#可移动窗口的部分实现在Qt6中弃用
HEADERS += \
    $$PWD/animationstackwidget.h \
    $$PWD/iplineedit.h \
    $$PWD/customwidget.h \
    $$PWD/clineedit.h \
    $$PWD/chatstackedwidget.h \
    $$PWD/qqlist/qqlistviewchild.h \
    $$PWD/qqlist/qqlistviewgroup.h \
    $$PWD/qqlist/qqlistwidget.h \
    $$PWD/qqlist/qqpopmenuwidget.h \
    $$PWD/chatbubble.h

SOURCES += \
    $$PWD/animationstackwidget.cpp \
    $$PWD/iplineedit.cpp \
    $$PWD/customwidget.cpp \
    $$PWD/clineedit.cpp \
    $$PWD/chatstackedwidget.cpp \
    $$PWD/qqlist/qqlistviewchild.cpp \
    $$PWD/qqlist/qqlistviewgroup.cpp \
    $$PWD/qqlist/qqlistwidget.cpp \
    $$PWD/qqlist/qqpopmenuwidget.cpp \
    $$PWD/chatbubble.cpp

##pri文件

FORMS += \
    $$PWD/qqlist/qqlistviewgroup.ui
