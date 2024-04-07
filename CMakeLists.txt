cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(cpp-learn VERSION 1.0.0 LANGUAGES CXX)

# add cmake module path
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
# set binary output path
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

include(project_boost)
aux_source_directory(${CMAKE_SOURCE_DIR}/boost_learn ALL_SOURCE_FILE)
message(STATUS ${ALL_SOURCE_FILE})

add_executable(${PROJECT_NAME} ${ALL_SOURCE_FILE})
target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})