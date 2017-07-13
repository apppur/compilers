cmake_minimum_required (VERSION 2.6)
project (compilers)

# source directory
aux_source_directory(. DIR_SOURCE)

#add_executable(timer timer.cpp)
add_executable(compilers ${DIR_SOURCE})

#target_link_libraries(timer boost_system)
