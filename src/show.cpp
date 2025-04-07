#include <iostream>
#include "show.h"
#include "cinema.h"
#include <string>
using namespace std;

Show shows[50];
int showCount = 0;

void addShow() {
    if (showCount >= 50) {
        cout << "Too many shows" << endl;
        return;
    }
    cin.ignore();
    cout << "Choose the cinema " << endl;
    //cin.getline(shows[showCount].cinemaName, 100);
    showCinemas();
    cout << "Enter show ID:" << endl;
    cin >> shows[showCount].showId, 100;
    cin.ignore();
    cout << "Enter show time:" << endl;
    cin.getline(shows[showCount].time, 20);

    cout << "Enter movie name:" << endl;

    cin.getline(shows[showCount].movieName, 100);

    showCount++;
    cout << "Show Added"<< endl;

}

void listShows() {
for (int i = 0; i < showCount; i++) {
    cout << "Show ID: " << shows[i].showId << endl
    << "Show time: "  << shows[i].time << endl
    << "Cinema Name: "  << shows[i].cinemaName << endl
    << "Movie name: " << shows[i].movieName << endl;
}

}