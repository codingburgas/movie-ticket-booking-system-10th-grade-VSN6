#include <iostream>
#include "cinema.h"
using namespace std;

int cinemacount = 0;
Cinema cinemas[10];

void addCinema() {

    if (cinemacount >= 10) {
        cout << "Too many cinemas!" << endl;
        return;
    }

    cout << "Enter cinema name: " << endl;
    cin.ignore();
    cin.getline(cinemas[cinemacount].name, 100);\

    cout << "Enter city: ";
    cin.getline(cinemas[cinemacount].city, 100);
    cinemas[cinemacount].id = cinemacount + 1;
    cinemacount++;
    cout << "Cinema added: " << endl;
}


void showCinemas() {
    if (cinemacount == 0) {
        cout << "No cinemas available"<< endl;
        return;
    }

    cout << "\n--- List of Cinemas ---\n";
    for (int i = 0; i < cinemacount; i++) {
        cout << i + 1 << ". " << cinemas[i].name
             << " (" << cinemas[i].city << "), ID: " << cinemas[i].id << endl;
    }


}