cmake_minimum_required(VERSION 3.16)

project(EnergyPerformanceMonitoringSystem)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(
    energy_monitor
    src/main.cpp
    src/csv_reader.cpp
    src/data_validator.cpp
    src/energy_index.cpp
    src/statistics.cpp
    src/anomaly_detection.cpp
    src/report_export.cpp
)
