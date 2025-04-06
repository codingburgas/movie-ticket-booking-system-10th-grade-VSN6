#include <iostream>
#include <movie.h>
#include <show.h>

#include "include/seat.h"
#include "include/cinema.h"

using namespace std;

int main() {
    int ans;
    cout << "WELCOME" << endl << "Before you book a place, you need to answer a few questions." << endl << "  "<< endl;
    while (true) {
        cout << "-----------Menu----------" << endl;
        cout << "1. Add cinema"<< endl;
        cout << "2. Show cinemas"<< endl;
        cout << "3. Add movie"<< endl;
        cout << "4. Show movies"<< endl;
        cout << "5. Add show"<< endl;
        cout << "6. Book a place" << endl;
        cout << "0. Exit" << endl;
        cin >> ans;
        if (ans == 0) {
            exit(0);
        }
        if (ans == 2) {
            showCinemas();
        }

        if (ans == 1) {
            addCinema();
        }

        if (ans == 3) {
            addMovie();
        }

        if (ans == 4) {
            listMovies();
        }

        if (ans == 5) {
            addShow();
        }


        if (ans == 6) {
            listShows();
        }

    }
}

