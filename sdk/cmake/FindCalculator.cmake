add_library(Calculator UNKNOWN IMPORTED)
set_target_properties(Calculator PROPERTIES
    IMPORTED_LOCATION             $ENV{PROJECT_ROOT_DIR}/sdk/lib/libCalculator.a
)

set(Calculator_INCLUDE_DIRS $ENV{PROJECT_ROOT_DIR}/sdk/include/)

include_directories(${Calculator_INCLUDE_DIRS})
