// Copyright (c) 2023 Julien Lamoureux All rights reserved.

// Created By: Julien Lamoureux
// Date: November 13, 2023
// This program displays all valid RGB color codes

#include <cmath>
#include <cstdlib>
#include <iostream>

int main() {
    // declare variables
    int counterRed, counterGreen, counterBlue;

    // tells the user what the progam does
    std::cout << "This program displays all valid RGB color codes."
    << std::endl;

    // use a for loop to get all values for red
    for (counterRed = 0; counterRed <= 255; counterRed++) {
        // use a for loop to get all values for green
        for (counterGreen = 0; counterGreen <= 255; counterGreen++) {
            // use a for loop to get all values for blue
            for (counterBlue = 0; counterBlue <= 255; counterBlue++) {
                // display rgb codes
                printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)",
                counterRed, counterGreen, counterBlue,
                counterRed, counterGreen, counterBlue);
            }
        }
    }
}
