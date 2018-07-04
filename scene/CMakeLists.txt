#Hola

#add_subdirectory("./2d")
add_subdirectory("./3d")

add_library (scene_3dlib SHARED $<TARGET_OBJECTS:scene_3d>)