// q4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "constant.h"
#include <iostream>



void checkAndPrint(const int t, const double d)
{
    double x{};
    x = d - 0.5 * constants::g * t * t;
    if (x > 0)
        std::cout << "At " << t << " seconds, the ball is at height: " << x << " meters\n";
    else
        std::cout << "At " << t << " seconds, the ball is on the ground.\n";
}

double getHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double x{};
    std::cin >> x;
    return x;
}

int main()
{
    double x{ getHeight() };
    checkAndPrint(0, x);
    checkAndPrint(1, x);
    checkAndPrint(2, x);
    checkAndPrint(3, x);
    checkAndPrint(4, x);
    checkAndPrint(5, x);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
