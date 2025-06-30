This is a C++ console application allows users to register, log in, and book seats for movie shows in different cinemas.
Features
User registration and login (admin and users)
- Add and view cinemas (with name, ID, and city)
- Add and view movies (title, genre, language, release date)
- Add and view shows (each linked to a movie and cinema)
- Data persistence (saved to `.txt` files)
- Role-based access:
  - Admins can add/delete movies and shows
  - Users can view and book shows
 
Project Structure:
MovieTicketBookingSystem/
├── main.cpp
├── user.h / user.cpp
├── cinema.h / cinema.cpp
├── movie.h / movie.cpp
├── show.h / show.cpp
├── seat.h / seat.cpp
├── txtfiles/
│ ├── users.txt ← Registered users (username, password, role)
│ ├── cinemas.txt ← List of all cinemas
│ ├── movies.txt ← List of movies
│ ├── shows.txt ← List of shows (linked to movie/cinema)
│ └── seats.txt ← Seat booking status
└── README
