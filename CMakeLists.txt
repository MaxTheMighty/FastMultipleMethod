cmake_minimum_required(VERSION 3.30)

project(N_body_simulation)

set(CMAKE_CXX_STANDARD 20)

# Set SDL2 directory explicitly for M1 Mac
set(SDL2_DIR "/opt/homebrew/lib/cmake/SDL2")

find_package(SDL2 REQUIRED)
find_package(Armadillo REQUIRED)
find_package(Boost REQUIRED COMPONENTS unit_test_framework)

enable_testing()

include_directories(${SDL2_INCLUDE_DIRS})
include_directories(${ARMADILLO_INCLUDE_DIRS})
include_directories(${Boost_INCLUDE_DIRS})



add_executable(N_body_simulation main.cpp
        canvas.cpp
        canvas.h
        body.cpp
        body.h
        octree.cpp
        octree.h
        cube.cpp
        cube.h
)

add_executable(test_runner
tests/test_runner.cpp
tests/cube_tests.cpp
tests/octree_tests.cpp
    cube.h
    cube.cpp
    octree.h
    octree.cpp
)



target_include_directories(N_body_simulation PRIVATE ${SDL2_INCLUDE_DIRS} "/opt/homebrew/include/SDL2" )

target_link_libraries(N_body_simulation PRIVATE SDL2::SDL2 ${ARMADILLO_LIBRARIES} ${BOOST_LIBRARIES})
target_link_libraries(test_runner Boost::unit_test_framework ${ARMADILLO_LIBRARIES})

add_test(NAME MyTests
COMMAND test_runner)