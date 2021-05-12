// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program checks the number's weekdays


#include <iostream>
#include <string>

int main() {
    // this function checks the number's weekdays
    std::string weekdaysAsString;
    int weekdaysAsNumber;

    // input
    std::cout << "Enter the number of the weekday: ";
    std::cin >> weekdaysAsString;

    // process and output
    try {
        weekdaysAsNumber = std::stoi(weekdaysAsString);
        switch (weekdaysAsNumber) {
            case 1 :
                std::cout << "Sunday" << std::endl;
                break;
            case 2 :
                std::cout << "Monday" << std::endl;
                break;
            case 3 :
                std::cout << "Tuesday" << std::endl;
                break;
            case 4 :
                std::cout << "Wednesday" << std::endl;
                break;
            case 5 :
                std::cout << "Thursday" << std::endl;
                break;
            case 6 :
                std::cout << "Friday" << std::endl;
                break;
            case 7 :
                std::cout << "Saturday" << std::endl;
            default :
                std::cout << "Invalid number" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not an integer.";
    }
}
