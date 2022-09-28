file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/*.cc
)

add_library(binaryTree STATIC ${SRC_FILES})

# configure the include path of binaryTree
target_include_directories(binaryTree PUBLIC ${CMAKE_SOURCE_DIR}/include)

# configure the compile option of binaryTree
target_compile_options(binaryTree PRIVATE -Wall -Werror)