include_directories("${CMAKE_SOURCE_DIR}/include")
include_directories("${CMAKE_SOURCE_DIR}/libraries")

add_executable(testProject TestSanntidsDatateknikk.cpp ../include/person.hpp)
add_test(NAME testProject COMMAND testProject)