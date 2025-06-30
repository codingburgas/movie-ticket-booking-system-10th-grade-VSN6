#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "show.h"
#include "hall.h"
#include "movie.h"

using namespace std;

string getShowFile() {
    return "shows.txt";
}

int generateNewShowId() {
    ifstream file(getShowFile());
    int maxId = 0, id, hallId;
    string title, datetime;
    while (file >> id >> hallId) {
        file.ignore();
        getline(file, title);
        getline(file, datetime);
        if (id > maxId) maxId = id;
    }
    return maxId + 1;
}

void addShow() {
    int hallId;
    string movieTitle, datetime;
    float price;

    cout << "--- Add new show ---" << endl;
    listHalls();
    cout << "Enter hall ID: ";
    cin >> hallId;
    cin.ignore();

    cout << "Enter movie title (must match exactly): ";
    getline(cin, movieTitle);

    cout << "Enter date & time (e.g. 2025-07-01 18:30): ";
    getline(cin, datetime);

    cout << "Enter ticket price: ";
    cin >> price;

    int showId = generateNewShowId();
    ofstream file("shows.txt", ios::app);
    file << showId << " " << hallId << " " << price << endl;
    file << movieTitle << endl;
    file << datetime << endl;
    file.close();

    cout << "Show #" << showId << " created!" << endl;
}

void listShows() {
    ifstream file("shows.txt");
    if (!file.is_open()) {
        cout << "No shows available." << endl;
        return;
    }

    int id, hallId;
    float price;
    string title, datetime;

    cout << "--- Available Shows ---" << endl;
    while (file >> id >> hallId >> price) {
        file.ignore();
        getline(file, title);
        getline(file, datetime);
        cout << "Show ID: " << id
            << " | Movie: " << title
            << " | Hall ID: " << hallId
            << " | DateTime: " << datetime
            << " | Price: " << price << " BGN" << endl;
    }
}