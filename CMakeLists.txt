
cmake_minimum_required(VERSION 3.21)

project(EmployeeManagementsQt LANGUAGES CXX)

# 使用 C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 启用 Qt 的自动处理功能
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# 查找 Qt 6 的 Widgets 模块
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# 创建桌面应用程序

qt_add_executable(EmployeeManagementsQt
    EmployeeManagementsQt.cpp
    MainWindow.h
    MainWindow.cpp
    MainWindow.ui
)

# 链接 Qt Widgets 库
target_link_libraries(EmployeeManagementsQt
    PRIVATE Qt6::Widgets
)
