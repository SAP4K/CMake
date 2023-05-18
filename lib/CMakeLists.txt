cmake_minimum_required(VERSION 3.14)

project(Calculator)

set(${PROJECT_NAME}_public
    public/ICalculator.h
)

set(${PROJECT_NAME}_srcs
    src/Calculator.cpp
)

include_directories(${CMAKE_CURRENT_LIST_DIR}/public/ ${CMAKE_CURRENT_LIST_DIR}/include/)

add_library(${PROJECT_NAME}
    ${${PROJECT_NAME}_srcs}
)

target_include_directories(${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../public
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

install(FILES ${${PROJECT_NAME}_public} DESTINATION ${CMAKE_INSTALL_DIR}/include)
install(FILES ${CMAKE_CURRENT_LIST_DIR}/cmake/FindCalculator.cmake DESTINATION ${CMAKE_INSTALL_DIR}/cmake)
install(TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_DIR}/lib)