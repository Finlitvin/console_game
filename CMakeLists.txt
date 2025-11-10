cmake_minimum_required(VERSION 4.1)
project(console_game)

set(CMAKE_CXX_STANDARD 20)

add_executable(
    console_game
    main.cpp
    src/player.cpp
    src/player.h
    src/map.h
    src/map.cpp
    src/game.h
    src/game.cpp
)
