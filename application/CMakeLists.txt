include_directories("${CMAKE_SOURCE_DIR}/include")
include_directories("${CMAKE_SOURCE_DIR}/libraries")

add_executable(Sanntids_Datateknikk Main.cpp ../include/greeting.hpp ../include/person.hpp)