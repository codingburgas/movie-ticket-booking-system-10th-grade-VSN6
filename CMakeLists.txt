cmake_minimum_required(VERSION 3.25)
project(MovieTicketBookingSystem)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(MovieTicketBookingSystem
        main.cpp
        src/cinema.cpp
        src/movie.cpp
        
        src/show.cpp
        src/user.cpp
 "include/hall.h" "src/hall.cpp" "include/payment.h" "src/payment.cpp")
