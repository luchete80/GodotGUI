file(GLOB all_files
    "*.h"
    "*.cpp"
)

include_directories("../../core/math")

add_library(scene_3d OBJECT ${all_files})