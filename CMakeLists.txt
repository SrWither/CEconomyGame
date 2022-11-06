
cmake_minimum_required(VERSION 3.7)
project(CEconomyGame)

file(GLOB SRC
         src/*.cpp
         src/game/*.cpp
         src/json/*.cpp
)

set (CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories(${CMAKE_SOURCE_DIR}/lib)

add_executable(app ${SRC})
target_link_libraries(app)

