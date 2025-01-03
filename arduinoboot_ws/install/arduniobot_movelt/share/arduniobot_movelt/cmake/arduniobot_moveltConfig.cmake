# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_arduniobot_movelt_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED arduniobot_movelt_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(arduniobot_movelt_FOUND FALSE)
  elseif(NOT arduniobot_movelt_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(arduniobot_movelt_FOUND FALSE)
  endif()
  return()
endif()
set(_arduniobot_movelt_CONFIG_INCLUDED TRUE)

# output package information
if(NOT arduniobot_movelt_FIND_QUIETLY)
  message(STATUS "Found arduniobot_movelt: 0.0.0 (${arduniobot_movelt_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'arduniobot_movelt' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${arduniobot_movelt_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(arduniobot_movelt_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${arduniobot_movelt_DIR}/${_extra}")
endforeach()
