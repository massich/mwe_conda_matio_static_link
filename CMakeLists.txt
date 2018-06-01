cmake_minimum_required (VERSION 3.2)
project (CMakeHelloWorld VERSION 1.0)
set (CMAKE_CXX_STANDARD 11)

# Find the BLAS stuff
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

set(MATIO_USE_STATIC_LIBRARIES TRUE) # XXX This should be an option
find_package(matio REQUIRED)

# include the subdirectory containing our libs
add_subdirectory(Hello_lib)
# indicate the entry point for the executable
add_executable(hello HelloWorld.cpp)

# Indicate which libraries to include during the link process.
target_link_libraries(hello Hello_lib::Hello_lib)

# install (TARGETS CMakeHelloWorld DESTINATION bin)
