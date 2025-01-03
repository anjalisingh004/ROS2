add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/cmake/uninstall.cmake
  COMMAND ${CMAKE_COMMAND} -P ${PROJECT_SOURCE_DIR}/cmake/uninstall.cmake
  COMMENT "Custom uninstall target"
)

