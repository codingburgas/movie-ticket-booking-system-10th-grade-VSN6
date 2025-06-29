#include <iostream>
#include "seat.h"
#include <iostream>
#include <cmath>
using namespace std;

float seatMap[5][5] = {
    {1.1, 1.2, 1.3, 1.4, 1.5},
    {2.1, 2.2, 2.3, 2.4, 2.5},
    {3.1, 3.2, 3.3, 3.4, 3.5},
    {4.1, 4.2, 4.3, 4.4, 4.5},
    {5.1, 5.2, 5.3, 5.4, 5.5}
};

void showSeats() {
    cout << "Map of places" << endl;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if (seatMap[i][j] == 0.0)
                cout << "XX"
                     << "  || ";
            else
                cout << seatMap[i][j] << " || ";
        }
        cout << endl;
    }

    cout << "Select a place ";
    float seatNum;
    cin >> seatNum;

    bool found = false;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if (fabs(seatMap[i][j] - seatNum) < 0.001) {
                if (seatMap[i][j] == 0.0) {
                    cout << "This place is already taken" << endl;
                } else {
                    seatMap[i][j] = 0.0;
                    cout << "The place has been successfully booked " << endl;
                }
                found = true;
                break;
            }
        }
    }

    if (!found) {
        cout << "There is no such place " << endl;
    }
}
