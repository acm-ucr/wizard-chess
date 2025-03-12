QT += core gui
QT += statemachine

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    ConditionalTransition.cpp \
    home.cpp \
    main.cpp \
    mainwindow.cpp \
    settings.cpp \
    Piece.cpp \
    Pawn.cpp \
    Bishop.cpp \
    Knight.cpp \
    Queen.cpp \
    King.cpp \
    Rook.cpp \
    Board.cpp \
    EmptyPiece.cpp \
    stockfish.cpp \
    CapturedSide.cpp \

HEADERS += \
    ConditionalTransition.h \
    home.h \
    inputs.h \
    mainwindow.h \
    settings.h \
    Piece.h \
    Pawn.h \
    Bishop.h \
    Knight.h \
    Queen.h \
    King.h \
    Rook.h \
    EmptyPiece.h \
    Board.h \
    stockfish.h \
    CapturedSide.h \

FORMS += \
    mainwindow.ui

OTHER_FILES += \
    black_bishop.png

RESOURCES += \
    resources.qrc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    # GryffindorLogo.qrc \
    # Resources/QTGryffindorLogo.qrc
