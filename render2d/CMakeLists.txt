project(Render2D)

file (GLOB Render2D_src src/*.c src/*.cpp)
file (GLOB Render2D_headers *.h *.hpp src/*.h src/*.hpp src/*.inc)

include_directories(. src ${Cairo_headers_dir} ${Common_SOURCE_DIR} ${Molecule_SOURCE_DIR}/..)

add_library(render2d OBJECT ${Render2D_src} ${Render2D_headers})

set_target_properties(render2d PROPERTIES COMPILE_FLAGS "${COMPILE_FLAGS}")
