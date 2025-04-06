#include <iostream>
#include "seat.h"
using namespace std;
float seatMap[5][5] = {
    {1.1, 1.2, 1.3, 1.4, 1.5},
    {2.1, 2.2, 2.3, 2.4, 2.5},
    {3.1, 3.2, 3.3, 3.4, 3.5},
    {4.1, 4.2, 4.3, 4.4, 4.5},
    {5.1, 5.2, 5.3, 5.4, 5.5},
};
void showSeats() {
    for(int i=0; i<5; i++) {
      cout << endl;
        for(int j=0; j<5; j++) {
            cout << seatMap[i][j] << " || ";


        }
    }
}
