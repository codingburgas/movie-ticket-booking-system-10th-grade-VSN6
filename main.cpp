#include <iostream>
#include <movie.h>
#include <show.h>
#include <user.h>
#include "include/seat.h"
#include "include/cinema.h"

using namespace std;

int main() {
    loadCinemasFromFile();
    int choice;
    user u;
    cout << "Welcome to Movie Booking System"<<endl;

        while(true){


            cout <<"1. Register" << endl << "2. Login" <<endl << "Exit" << endl << "Your choice: ";
            cin >> choice;
            if (choice == 1) {
                if (u.registerUser()) break;
            } else if (choice == 2) {
                if (u.loginUser()) break;
            } else if (choice == 0) {
                return 0;
            }
            else{
                cout << "Invalid choice";
            }
        }

        int ans;
        cout << "WELCOME"  << endl;
        if (u.role == "admin") {
        while (true) {
            cout << "    _____________Menu_____________" << endl;
            cout << "  || 1. Add cinema                 ||"<< endl;
            cout << "  || 2. Show cinemas               ||"<< endl;
            cout << "  || 3. Add movie                  ||"<< endl;
            cout << "  || 4. Show movies                ||"<< endl;
            cout << "  || 5. Add show                   ||"<< endl;
            cout << "  || 6. Book a place               ||" << endl;
            cout << "  || 0. Exit                       ||" << endl;
            cout << "     _____________________________   " << endl;
            cin >> ans;
            if (ans == 0) exit(0);
            if (ans == 2) showCinemas();

            if (ans == 1) addCinema();

            if (ans == 3) addMovie();

            if (ans == 4) listMovies();

            if (ans == 5) addShow();

            if (ans == 6) listShows();
        }
        }    else {
        while (true) {
            cout << "    _____________Menu_____________" << endl;
            cout << "  || 1. Show cinemas               ||"<< endl;
            cout << "  || 2. Show movies                ||"<< endl;
            cout << "  || 3. Book a place               ||" << endl;
            cout << "  || 0. Exit                       ||" << endl;
            cout << "     _____________________________   " << endl;
            cin >> ans;
            if (ans == 0) exit(0);
            if (ans == 1) showCinemas();
            if (ans == 2) listMovies();
            if (ans == 3) listShows();
            }
        }


    return 0;
}






