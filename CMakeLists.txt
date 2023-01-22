
cmake_minimum_required (VERSION 3.11)


add_library                (plugin SHARED)

target_include_directories (plugin PUBLIC include)

target_compile_features    (plugin PUBLIC cxx_std_11)

target_sources             (plugin PRIVATE include/plugin/Plugin.h
                                                   source/Plugin.cxx)

target_link_libraries      (plugin PRIVATE tool)
