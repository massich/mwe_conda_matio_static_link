add_library(Hello_lib
  Speaker.h
  Speaker.cpp)


target_include_directories(Hello_lib
  INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
  )

target_link_libraries(Hello_lib PUBLIC MATIO::MATIO)

add_library(Hello_lib::Hello_lib ALIAS Hello_lib)

install (TARGETS Hello_lib DESTINATION bin)
install (FILES Speaker.h DESTINATION include)
