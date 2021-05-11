// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program finds the sum of integers from 1 - an inputted value

#include <iostream>
#include <string>

int main() {
    // this function calculates the sum of the integers

    // variables
    std::string numberAsString;
    int integer;
    int loopCounter = 0;
    int sumOfIntegers = 0;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> numberAsString;

    // process & output
    try {
        integer = std::stoi(numberAsString);
        if (integer > 0) {
            while (loopCounter <= integer) {
                sumOfIntegers = sumOfIntegers + loopCounter;
                loopCounter = loopCounter + 1;
            }
            std::cout << "\nThe sum of integers from 1 - " << integer
                  << " is " << sumOfIntegers << std::endl;
        } else {
            std::cout << "\nInvalid Input. Enter a positive integer."
                  << std::endl;
        }
    }
    catch (std::invalid_argument) {
        std::cout << "\nInvalid Input. Enter a positive integer."
              << std::endl;
        }
    std::cout << "\nDone." << std::endl;
}
