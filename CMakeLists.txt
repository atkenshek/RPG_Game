cmake_minimum_required(VERSION 3.20)
project(RPG_Game)

set(CMAKE_CXX_STANDARD 14)

add_executable(RPG_Game
        .idea/.gitignore
        .idea/modules.xml
        .idea/RPG_Game.iml
        .idea/vcs.xml
        .idea/workspace.xml
        main.cpp
        README.md Character.cpp Character.h Enemy.cpp Enemy.h Item.cpp Item.h Game.cpp Game.h)
