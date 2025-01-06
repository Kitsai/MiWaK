project(MiWaK_Visual)

file(GLOB_RECURSE visual_SRC CONFIGURE_DEPENDS "src/*.cpp")

add_executable(Visual ${visual_SRC})

target_include_directories(Visual PRIVATE "include/")

target_link_libraries(Visual Core)
