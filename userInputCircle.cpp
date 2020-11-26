// Copyright (C) 2020 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on November 2020
// This program calculates the area and perimeter of a rectangle
//     with  user inputted dimensions


#include <iostream>

int main() {
    // this function calculates area and perimeter
    int length;
    int width;
    int area;
    int perimeter;

    // input
    std::cout << "Enter Length of the rectangle (cm): ";
    std::cin >> length;
    std::cout << "Enter width of the rectangle (cm): ";
    std::cin >> width;

    // process
    area = length*width;
    perimeter = 2*(length+width);

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << " cm^2" << std::endl;
    std::cout << "perimeter is " << perimeter << " cm" << std::endl;
}
