QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    home.cpp \
    main.cpp \
    mainwindow.cpp \
    settings.cpp
    ../software/digitalGame/Piece.cpp
    ../software/digitalGame/Pawn.cpp
    ../software/digitalGame/Bishop.cpp
    ../software/digitalGame/Knight.cpp
    ../software/digitalGame/Queen.cpp
    ../software/digitalGame/King.cpp
    ../software/digitalGame/Rook.cpp
    ../software/digitalGame/Board.cpp
    ../software/digitalGame/EmptyPiece.cpp

HEADERS += \
    home.h \
    mainwindow.h \
    settings.h
    ../software/digitalGame/Piece.h
    ../software/digitalGame/Pawn.h
    ../software/digitalGame/Bishop.h
    ../software/digitalGame/Knight.h
    ../software/digitalGame/Queen.h
    ../software/digitalGame/King.h
    ../software/digitalGame/Rook.h
    ../software/digitalGame/EmptyPiece.h
    ../software/digitalGame/Board.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    # GryffindorLogo.qrc \
    # Resources/QTGryffindorLogo.qrc
