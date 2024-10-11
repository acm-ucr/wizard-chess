# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\WizardChess_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\WizardChess_autogen.dir\\ParseCache.txt"
  "WizardChess_autogen"
  )
endif()
