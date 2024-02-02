cmake_minimum_required(VERSION 3.5)

project(KotiTeht4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(KotiTeht4 main.cpp
    asunto.h
    kerros.h
    katutaso.h
    kerrostalo.h)

include(GNUInstallDirs)
install(TARGETS KotiTeht4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
