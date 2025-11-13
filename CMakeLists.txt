cmake_minimum_required(VERSION 4.1)
project(console_game)

set(CMAKE_CXX_STANDARD 20)

add_executable(
    console_game
    main.cpp
    src/apple/apple.h
    src/apple/apple.cpp
    src/player/player.cpp
    src/player/player.h
    src/map/map.h
    src/map/map.cpp
    src/map/map_item.h
    src/map/map_item.cpp
    src/game/game.h
    src/game/game.cpp
    src/game/game_const.h
    src/utils/utils.h
    src/utils/utils.cpp
)
