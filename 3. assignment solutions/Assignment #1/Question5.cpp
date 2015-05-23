/*
 *  Question5.cpp
 *
 *  Author: Ekaba Bisong
 *  Date: May 23, 2015
 *
 *  Program that calculates the squares and cubes of the integers from 0 to 10
 *
 */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    
    // display welcome messages to user
    cout << "Welcome - This program calculates the squares and cubes\n";
    cout << "of the integers from 0 to 10 and prints using tabs\n\n";
    
    // calculate and print the squares and cubes of the integers from 0 to 10
    cout << "integer\tsquare\tcube\t\n";
    cout << 0 << "\t\t" << pow(0, 2) << "\t\t" << pow(0, 3) << "\n";
    cout << 1 << "\t\t" << pow(1, 2) << "\t\t" << pow(1, 3) << "\n";
    cout << 2 << "\t\t" << pow(2, 2) << "\t\t" << pow(2, 3) << "\n";
    cout << 3 << "\t\t" << pow(3, 2) << "\t\t" << pow(3, 3) << "\n";
    cout << 4 << "\t\t" << pow(4, 2) << "\t\t" << pow(4, 3) << "\n";
    cout << 5 << "\t\t" << pow(5, 2) << "\t\t" << pow(5, 3) << "\n";
    cout << 6 << "\t\t" << pow(6, 2) << "\t\t" << pow(6, 3) << "\n";
    cout << 7 << "\t\t" << pow(7, 2) << "\t\t" << pow(7, 3) << "\n";
    cout << 8 << "\t\t" << pow(8, 2) << "\t\t" << pow(8, 3) << "\n";
    cout << 9 << "\t\t" << pow(9, 2) << "\t\t" << pow(9, 3) << "\n";
    cout << 10 << "\t\t" << pow(10, 2) << "\t\t" << pow(10, 3) << "\n";
    
    //system("PAUSE");
    return EXIT_SUCCESS;
}
