//
// Created by Ameed Othman on 29/08/2024.
//

#include "user.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// function to check if user exists in the file
bool userExists(const string& username) {
    ifstream infile("users.txt");
    string storedUser, storedPass;

    while (infile >> storedUser >> storedPass) {
        if (storedUser == username) {
            return true;
        }
    }

    return false;
}

