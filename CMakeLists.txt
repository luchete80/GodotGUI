cmake_minimum_required(VERSION 2.8.9)

#link_directories("/cygdrive/c/cygwin64/lib/gcc/x86_64-w64-mingw32/4.8.2")
set (NAME GodotGUI)

project(${NAME})
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)


set (CMAKE_BUILD_TYPE RELEASE) #LUCIANO

#set(CMAKE_PREFIX_PATH $ENV{QTDIR}) # Unnecessary on Windows apparently
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fpermissive -static-libgcc -static-libstdc++ -O3")
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fpermissive -static-libgcc -static-libstdc++")

set(CMAKE_SHARED_LIBRARY_LINK_CXX_FLAGS "${CMAKE_SHARED_LIBRARY_LINK_CXX_FLAGS} -static-libgcc -static-libstdc++ -s ")
SET(CMAKE_CXX_LINK_FLAGS "${CMAKE_CXX_LINK_FLAGS} -static-libgcc")

find_package(OpenGL)

include_directories(.)
include_directories("${PROJECT_SOURCE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/editor")
include_directories("${PROJECT_SOURCE_DIR}/scene")
include_directories("${PROJECT_SOURCE_DIR}/servers")

add_subdirectory("./core")
add_subdirectory("./scene")
add_subdirectory("./servers")

set( Srcs	test.cpp)
		

add_executable(${NAME} 
${Srcs} 
${Hdrs} 
)
	
set (EXTRA_LIBS opengl32 glu32 gdi32)
#target_link_libraries (${NAME} ${EXTRA_LIBS} )
