file(GLOB_RECURSE imgui_SRC CONFIGURE_DEPENDS "*.cpp")

add_library(imgui ${imgui_SRC})
