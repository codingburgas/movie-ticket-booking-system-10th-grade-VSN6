#include <iostream>
#include "include/seat.h"


using namespace std;

int main() {
    int ans;
    cout << "WELCOME" << endl << "Before you book a place, you need to answer a few questions." << endl << "                                                                  "<< endl;
    cout << "-----------Menu----------" << endl;;
    cout << "1. Add cinema(only for admins)"<< endl;
    cout << "2. Add movie (only for admins)"<< endl;
    cout << "3. Add show(only for admins)"<< endl;
    cout << "4. Book a place" << endl;
    cout << "0. Exit" << endl;

    cin >> ans;
    if (ans == 0) {
        exit(0);
    }
    if (ans == 1) {
        showSeats();
        return 0;
    }



}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.