project(MiWaK_Engine)

file(GLOB_RECURSE engine_SRC CONFIGURE_DEPENDS "src/*.cpp")

add_executable(Engine ${engine_SRC})

target_include_directories(Engine PRIVATE "include/")

target_link_libraries(Engine Core)
