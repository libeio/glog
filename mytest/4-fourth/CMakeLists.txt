cmake_minimum_required(VERSION 3.0)

add_executable(manylogs manylogs.cpp)
target_link_libraries(manylogs ${glog_LIBRARY_NAME})
