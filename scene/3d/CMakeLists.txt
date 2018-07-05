file(GLOB all_files
    "*.h"
    "*.cpp"
)

include_directories("../../core/math")
include_directories("../../core")

include_directories("../../platform")
include_directories("../../platform/windows")
include_directories("../../thirdparty/misc")

add_library(scene_3d OBJECT ${all_files})