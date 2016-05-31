cmake_minimum_required (VERSION 2.8)

list (APPEND NOMAIN_SOURCES
)
add_executable (${CMAKE_PROJECT_NAME} main.cpp ${NOMAIN_SOURCES})
set_target_properties (${CMAKE_PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

include_directories (${Boost_INCLUDE_DIRS})
add_unittest (unittest unittest.cpp ${NOMAIN_SOURCES})

install (TARGETS ${CMAKE_PROJECT_NAME} RUNTIME DESTINATION bin)
install (DIRECTORY . DESTINATION "include/${CMAKE_PROJECT_NAME}"
         FILES_MATCHING PATTERN "*.h")
