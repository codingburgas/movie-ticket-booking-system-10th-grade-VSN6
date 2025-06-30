#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "hall.h"
#include <cinema.h>
using namespace std;


string getHallFilename(int hallId) {
    return "hall_" + to_string(hallId) + ".txt";
}

// Генерация нового ID зала
int generateNewHallId() {
    ifstream file("halls.txt");
    int maxId = 0, id, cinemaId;
    while (file >> id >> cinemaId) {
        if (id > maxId) maxId = id;
    }
    return maxId + 1;
}

// Добавление нового зала
void addHall() {
    int cinemaId;
    cout << "Choose cinema ID for which add hall" << endl;
    showCinemas();
    cin >> cinemaId;
    int id = generateNewHallId();
    ofstream file("halls.txt", ios::app);
    file << id << " " << cinemaId << endl;
    file.close();

    float seats[rows][cols];
    for (int i = 0; i < rows; ++i) {
        float value = i + 1 + 0.1;
        for (int j = 0; j < cols; ++j) {
            seats[i][j] = value;
            value += 0.1;
        }
    }
    saveHallSeats(id, seats);

    cout << "Hall with ID " << id << " added to cinema " << cinemaId << "." << endl;
}

// Сохранение карты мест
void saveHallSeats(int hallId, float seats[rows][cols]) {
    ofstream file(getHallFilename(hallId));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            file << seats[i][j] << " ";
        }
        file << endl;
    }
}

// Загрузка карты мест
void loadHallSeats(int hallId, float seats[rows][cols]) {
    ifstream file(getHallFilename(hallId));
    if (file.is_open()) {
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                file >> seats[i][j];
    }
}


void showHallSeats() {
    int hallId;
    cout << "Avaible halls" << endl;
    listHalls();
        cout << "Enter hall id" << endl;
        cin >> hallId;
    float seats[rows][cols];
    loadHallSeats(hallId, seats);

    cout << "--- Hall #" << hallId << " Layout ---" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (seats[i][j] == 0.0)
                cout << "XX || ";
            else
                cout << seats[i][j] << " || ";
        }
        cout << endl;
    }

    cout << "Choose a seat (0 to cancel): ";
    float seatNum;
    cin >> seatNum;
    if (seatNum == 0) return;

    bool found = false;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (fabs(seats[i][j] - seatNum) < 0.001) {
                if (seats[i][j] == 0.0) {
                    cout << "Already taken." << endl;
                }
                else {
                    seats[i][j] = 0.0;
                    saveHallSeats(hallId, seats);
                    cout << "Seat booked!" << endl;
                }
                found = true;
                break;
            }
        }
    }

    if (!found) {
        cout << "No such seat." << endl;
    }
}

// Список всех залов
void listHalls() {
    ifstream file("halls.txt");
    int id, cinemaId;
    cout << "--- Halls ---" << endl;
    while (file >> id >> cinemaId) {
        cout << "Hall ID: " << id << " | Cinema ID: " << cinemaId << endl;
    }
}
