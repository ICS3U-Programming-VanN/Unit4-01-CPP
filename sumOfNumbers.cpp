// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Created on: October 26, 2022
// This program asks the user for a positive number and
// uses a while loop to add up all the whole numbers starting from 0
// It will then display the sum to the user

#include <iostream>


int main() {
    // Initialize Variables
    int loopCounter = 0;
    int numberSum = 0;
    int userNumber;
    float userNumberFloat;
    std::string userNumberString;

    // Asks user to enter a number
    std::cout << "Enter a positive integer: ";
    std::cin >> userNumberString;

    // Checks for exceptions
    try {
        // Creates a Float variable of user's number by casting
        userNumberFloat = std::stof(userNumberString);

        // Creates a Integer variable of user's number by casting
        userNumber = std::stoi(userNumberString);

        // IF the user enters a number with decimals
        if (userNumberFloat != userNumber) {
            std::cout << userNumberFloat << " is not a WHOLE integer!"
            << std::endl;

        // IF the user enters a negative number
        } else if (userNumber < 0) {
            std::cout << userNumber << " is not a positive integer!"
            << std::endl;

        // IF the user enters a valid number
        } else {
            // Calculates the total sum and
            // Displays how many times it has looped
            while (loopCounter <= userNumber) {
                // Displays how many times the program has looped
                std::cout << "Tracking " << loopCounter <<
                " times through the loop." << std::endl;

                // Calculates sum of user's number
                // (every whole number before is added)
                numberSum += loopCounter;

                // Increments counter
                loopCounter++;
            }

            // Displays the sum of the numbers to the user
            std::cout << "The sum of the numbers from 0 to " << userNumber
            << " = " << numberSum << std::endl;
        }

    // In the event of an exception
    } catch (std::invalid_argument) {
        std::cout << userNumberString << " is not a WHOLE POSITIVE integer!"
        << std::endl;
    }
}
