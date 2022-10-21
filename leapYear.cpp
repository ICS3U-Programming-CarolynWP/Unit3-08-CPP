// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/10/21
// Asks the user for a year and displays
// Whether it is a leap year.

#include <iostream>
#include <string>

int main() {
    // Variables for the leap year
    std::string yearInput;
    int yearInteger;

    // Title
    std::cout << "Leap Years\n";

    // User input for the year
    std::cout << "Enter a year: ";
    std::cin >> yearInput;

    // Try Catch statement to make sure the answer is an integer
    try {
        yearInteger = std::stoi(yearInput);
    } catch (std::invalid_argument) {
        // if the user does not enter an integer
        std::cout << "Please enter an integer!";
    }

    // IF statement to see if the year is divisible by 4
    if  (yearInteger % 4 == 0) {
        // Nested if statement if the year is divisible by 100
        if (yearInteger % 100 == 0) {
            // Nested if statement if the year is divisible by 400
            if (yearInteger % 400 == 0) {
                std::cout << yearInteger << " Is a leap year!\n";
            } else {
                std::cout << yearInteger << " Is NOT a leap year!\n";
            }
        } else {
            std::cout << yearInteger << " Is a leap year!\n";
        }
    } else {
    std::cout << yearInteger << " Is NOT a leap year!\n";
    }
}
