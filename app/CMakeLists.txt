# Add all files in current directory to the SRC_FILES variable
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/*.cc
)

add_executable(program ${SRC_FILES})
target_link_libraries(program PUBLIC binaryTree)