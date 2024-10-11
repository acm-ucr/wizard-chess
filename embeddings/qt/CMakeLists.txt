cmake_minimum_required(VERSION 3.16)

project(WizardChess VERSION 0.1 LANGUAGES CXX)

# Enable Qt features (automatic processing of UI files, MOC, etc.)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Qt widgets library
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

# List all source and header files
set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    welcomescreen.cpp
    welcomescreen.h
    mainscreen.cpp
    mainscreen.h
    secondscreen.cpp
    secondscreen.h
)

# Qt 6 has a different way to define executables
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(WizardChess
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(WizardChess SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(WizardChess
            ${PROJECT_SOURCES}
        )
    endif()
endif()

# Link the Qt Widgets library
target_link_libraries(WizardChess PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Set target properties for macOS/iOS bundles (optional)
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.WizardChess)
endif()

set_target_properties(WizardChess PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# Install target (optional)
include(GNUInstallDirs)
install(TARGETS WizardChess
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Finalize for Qt 6
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(WizardChess)
endif()
