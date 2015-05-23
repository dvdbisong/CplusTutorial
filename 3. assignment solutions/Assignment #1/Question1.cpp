/*
 *  Question1.cpp
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
    // declare variable to hold integer value
    int value;
    
    // display welcome messages to user
    cout << "Welcome - This program reads an integer\n";
    cout << "and determines if it is odd or even\n\n";
    cout << "Please enter an integer value -  ";
    
    // read integer from keyboard
    cin >> value;   // Enter code to read integer and store in variable value
    
    // condition to check if number is an integer
    if (cin.fail()) {
        cout << "\nNumber entered is not an integer\n";
    } else {
        // if number is an integer, check if number is odd or even
        if (value % 2 == 0)
        {
            cout << "\nIt is an EVEN number\n";
        } else {
            cout << "\nIt is an ODD number\n";
        }
    }
    
    cout << "\nThanks and Goodbye";
    
    //system("PAUSE");
    return EXIT_SUCCESS;
}
