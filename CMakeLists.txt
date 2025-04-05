cmake_minimum_required(VERSION 3.30)
project(MovieTicketBookingSystem)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(MovieTicketBookingSystem
        main.cpp
        src/cinema.cpp
        src/movie.cpp
        src/seat.cpp
        src/show.cpp
)
