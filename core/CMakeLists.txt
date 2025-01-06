project(MiWaK_Core)

file(GLOB_RECURSE core_SRC CONFIGURE_DEPENDS "src/*.cpp")

add_library(Core ${core_SRC})
target_include_directories(Core PUBLIC "include/")

target_link_libraries(Core cxx_setup)
