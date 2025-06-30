#include <iostream>
#include <string>
#include "payment.h"

using namespace std;

void processPayment() {
    int choice;
    cout << "--- Payment ---" << endl;
    cout << "1. Pay by card" << endl;
    cout << "2. Pay in cash (at cinema)" <<endl;
    cout << "Choose payment method: ";
    cin >> choice;

    if (choice == 1) {
        string cardNumber;

        cout<<"Enter 16-digit card number: ";
        cin>> cardNumber;

        if (cardNumber.length() == 16) {
            cout << "Payment successful. Thank you!" << endl;
        }
        else {
            cout << "Invalid card number. Payment failed." << endl;
        }

    }
    else if(choice == 2) {

        cout << "Please pay at the cinema counter at least 30 minutes before the show starts." << endl;
    }

    else {
        cout << "Invalid choice." << endl;
    }


}
