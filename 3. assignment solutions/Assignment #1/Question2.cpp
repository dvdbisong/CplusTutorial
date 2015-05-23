/*
 *  Question2.cpp
 *
 *  Author: Ekaba Bisong
 *  Date: May 23, 2015
 *
 *  Program that reads an integer and determines
 *  and prints whether it’s odd or even
 *
 */

#include <iostream>
using namespace std;

int main()
{
    // Variable declaration
    int firstInteger;
    int secondInteger;
    
    // display welcome messages to user
    cout << "Welcome - This program reads two integers\n";
    cout << "and determines if first is a multiple of second\n\n";
    
    // Read first integer
    cout << "Enter first integer value -  ";
    cin >> firstInteger;
    
    // Read second integer
    cout << "Enter second integer value -  ";
    cin >> secondInteger;
    
    // Determine if first is a multiple of second
    if (firstInteger % secondInteger == 0)
    {
        cout << "First integer ("<< firstInteger << ") is a multiple of the second (" << secondInteger << ")\n";
    } else {
        cout << "First integer ("<< firstInteger << ") is NOT a multiple of the second (" << secondInteger << ")\n";
    }
    
    //system("PAUSE");
    return EXIT_SUCCESS;
}
