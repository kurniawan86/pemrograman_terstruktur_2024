cmake_minimum_required(VERSION 3.30)
project(demoUASC__2024)

set(CMAKE_CXX_STANDARD 20)

add_executable(demoUASC__2024 main.cpp
        database/account_db.h
        database/account_db.cpp
        model/account_model.h
        model/account_model.cpp
        view/account_view.cpp
        view/account_view.h)
