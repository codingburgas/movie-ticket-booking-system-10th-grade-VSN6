#include <iostream>
#include "include/seat.h"
#include "include/cinema.h"

using namespace std;

int main() {
    int ans;
    cout << "WELCOME" << endl << "Before you book a place, you need to answer a few questions." << endl << "  "<< endl;
    while (true) {
        cout << "-----------Menu----------" << endl;
        cout << "1. Add cinema(only for admins)"<< endl;
        cout << "2. Show cinemas"<< endl;
        cout << "2. Add movie (only for admins)"<< endl;
        cout << "3. Add show(only for admins)"<< endl;
        cout << "4. Book a place" << endl;
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





        if (ans == 6) {
            showSeats();
            return 0;
        }

    }
}

