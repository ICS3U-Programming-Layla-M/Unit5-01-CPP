// Copyright (c) Year Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Date: June 1, 2021
// This program converts Celsius to Fahrenheit using a number the user inputs

#include <iostream>
#include <string>


void fahrenheit() {
    int celsiusInt, fahrenheitTemp;
    std::string celsiusString;

    while (true) {
        // ask user to input temperature in celsius
        std::cout << "Enter a temperature in Celsius: ";
        std::cin >> celsiusString;

        try {
            // convert from string to integer
            celsiusInt = std::stoi(celsiusString);

            // convert from celsius to fahrenheit
            fahrenheitTemp = (static_cast<float>(9)/static_cast<float>(5))
            * celsiusInt + 32;
            std::cout << celsiusInt << " °C = " << fahrenheitTemp;
            std:: cout << " °F\n";
            break;
        } catch (std::invalid_argument) {
            // error message
            std::cout << celsiusString << " is not a valid number, try again.";
            std::cout << "\n";
        }
    }
}


int main() {
    fahrenheit();
}
