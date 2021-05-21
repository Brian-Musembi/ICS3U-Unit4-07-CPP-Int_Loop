// Copyright (c) 2021 Brian Musembi, All rights reserved
//
// Created by Brian Musembi
// Created on May 2021
// This program shows every integer from 1000 - 2000

#include <iostream>

int main() {
    // This function shows every integer from 1000 - 2000
    //      in 5 columns

    std::cout << "This program shows every integer from 1000-2000."
              << std::endl;

    // variable declarations
    int counter;

    // process
    for (counter = 1000; counter <= 2000; counter++) {
        if (counter % 5 != 4) {
            std::cout << counter << " ";
        } else {
            std::cout << counter << std::endl;
        }
    }
}
