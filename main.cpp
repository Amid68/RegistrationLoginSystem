//
// Created by Ameed Othman on 29/08/2024.
//

#include <iostream>
#include "user.h"
x
using namespace std;

int main() {
    char choice = 0;
    do {
        cout << "\n1) login";
        cout << "2) sign up\n";
        cout << "3) reset password\n";
        cout << "4) exit\n"
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case '1':

                break;
            case '2':

                break;
            case '3':

                break;
            case '4':

                break;
            default:
                cout << "Invalid option! Please try again..\n";
                break;

        }
    } while (choice != 4);
}