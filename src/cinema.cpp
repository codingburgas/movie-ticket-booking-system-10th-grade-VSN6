#include <iostream>
#include "cinema.h"
using namespace std;

int cinemacount = 0;
Cinema cinemas[5];

void addCinema() {

if (cinemacount >= 5) {
    cout << "Too many cinemas!" << endl;
    return;
}

    cout << "Enter cinema name: " << endl;
    cin.ignore();
    cin.getline(cinemas[cinemacount].name, 100);

    cinemas[cinemacount].id = cinemacount + 1;
    cinemacount++;
    cout << "Cinema added!" << endl;
}


void showCinemas() {
    for (int i = 0; i < cinemacount; i++) {
        cout << i+1 << "||" << cinemas[i].name <<" ID " << cinemas[i].id << endl;
    }




}