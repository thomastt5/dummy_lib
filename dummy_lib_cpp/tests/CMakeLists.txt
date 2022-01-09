project(UnitTests CXX)

file(GLOB_RECURSE TEST_SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

add_executable(UnitTests ${TEST_SOURCE_FILES})
target_include_directories(UnitTests PUBLIC ${DUMMY_LIB_BASE_DIR}/include)
target_include_directories(UnitTests PUBLIC ${DUMMY_LIB_BASE_DIR}/external/include)
