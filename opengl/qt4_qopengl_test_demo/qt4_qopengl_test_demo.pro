QT          += widgets
QT          += opengl

HEADERS     = glwidget.h \
              widget.h \
              window.h
SOURCES     = glwidget.cpp \
              main.cpp \
              widget.cpp \
              window.cpp


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
