cmake_minimum_required(VERSION 3.28)
project(BEngineLogger)

set(CMAKE_CXX_STANDARD 17)

# Create the Logger DLL
add_library(Logger SHARED
        src/Logger.cpp
)

# Export symbols
target_compile_definitions(Logger PRIVATE LOGGER_EXPORTS)

# Include directories
target_include_directories(Logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)