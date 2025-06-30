#include <iostream>
#include "seat.h"
#include <fstream>
#include <cmath>
using namespace std;

float seatMap[rows][cols];

void loadSeats() {
    ifstream file("seats.txt");
    if (file.is_open()) {
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                file >> seatMap[i][j];
        file.close();
    }
    else{
        for (int i = 0; i < rows; ++i){
            float value = i + 1 + 0.1;
            for (int j = 0; j < cols; ++j){
                seatMap[i][j] = value;
                value += 0.1;
            }
        }
        saveSeats(); }
}

void saveSeats() {
    ofstream file("seats.txt");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            file << seatMap[i][j] << " ";
        }
        file << endl;
    }
    file.close();
}

void showSeats() {
    cout << "--- Hall layout ---" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (seatMap[i][j] == 0.0)
                cout << "XX  || ";
            else
                cout << seatMap[i][j] << " || ";
        }
        cout << endl;
    }

    cout << "Choose a seat ";
    float seatNum;
    cin >> seatNum;

    bool found = false;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (fabs(seatMap[i][j] - seatNum) < 0.001) {
                if (seatMap[i][j] == 0.0) {
                    cout << "The place is already taken." << endl;
                } else {
                    seatMap[i][j] = 0.0;
                    saveSeats();
                    cout << "The place has been successfully booked!" << endl;
                }
                found = true;
                break;
            }
        }
    }

    if (!found) {
        cout << "There is no such place." << endl;
    }
}