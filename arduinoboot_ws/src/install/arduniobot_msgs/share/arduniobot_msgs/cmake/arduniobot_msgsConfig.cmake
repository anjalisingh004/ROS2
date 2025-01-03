# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_arduniobot_msgs_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED arduniobot_msgs_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(arduniobot_msgs_FOUND FALSE)
  elseif(NOT arduniobot_msgs_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(arduniobot_msgs_FOUND FALSE)
  endif()
  return()
endif()
set(_arduniobot_msgs_CONFIG_INCLUDED TRUE)

# output package information
if(NOT arduniobot_msgs_FIND_QUIETLY)
  message(STATUS "Found arduniobot_msgs: 0.0.0 (${arduniobot_msgs_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'arduniobot_msgs' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${arduniobot_msgs_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(arduniobot_msgs_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_cmake-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_targets-extras.cmake;rosidl_cmake_export_typesupport_targets-extras.cmake;ament_cmake_export_dependencies-extras.cmake;rosidl_cmake_export_typesupport_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${arduniobot_msgs_DIR}/${_extra}")
endforeach()
