#include <iostream>
#include "cinema.h"
#include <fstream>
#include <cstring>
using namespace std;

int cinemacount = 0;
Cinema cinemas[10];

void saveCinemasToFile() {
    ofstream file("cinemas.txt");
    for (int i = 0; i < cinemacount; i++) {
        file << cinemas[i].id << endl;
        file << cinemas[i].name << endl;
        file << cinemas[i].city << endl;
    }
    file.close();
}
void loadCinemasFromFile() {
    ifstream file("cinemas.txt");
    if (!file.is_open()) return;

    cinemacount = 0;
    while (file >> cinemas[cinemacount].id) {
        file.ignore();
        file.getline(cinemas[cinemacount].name, 100);
        file.getline(cinemas[cinemacount].city, 100);
        cinemacount++;
        if(cinemacount >= 10) break;
    }

    file.close();
}

void addCinema() {

    if (cinemacount >= 10) {
        cout << "Too many cinemas!" << endl;
        return;
    }

    cout << "Enter cinema name: " << endl;
    cin.ignore();
    cin.getline(cinemas[cinemacount].name, 100);

    cout << "Enter city: ";
    cin.getline(cinemas[cinemacount].city, 100);
    cinemas[cinemacount].id = cinemacount + 1;
    cinemacount++;
    cout << "Cinema added " << endl;
    saveCinemasToFile();
}


void showCinemas() {
    if (cinemacount == 0) {
        cout << "No cinemas available"<< endl;
        return;
    }

    cout << "--- List of Cinemas ---" << endl;
    for (int i =0; i<cinemacount; i++) {
        cout << i+1 << ". "<< cinemas[i].name<< " (" << cinemas[i].city << "), ID: " << cinemas[i].id << endl;
    }


}