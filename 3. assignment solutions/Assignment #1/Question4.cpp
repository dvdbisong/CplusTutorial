/*
 *  Question4.cpp
 *
 *  Author: Ekaba Bisong
 *  Date: May 23, 2015
 *
 *  Program that inputs a five-digit integer,
 *  separates the integer into its digits and prints them separated by three spaces each
 *
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variable declaration
    int digits;
    
    // display welcome messages to user
    cout << "Welcome - This program reads a five-digit integer\n";
    cout << "separates the integer into its digits and prints them\n";
    cout << "separated by three spaces each\n\n";
    
    // Read integer
    cout << "Enter five digit integer value -  ";
    cin >> digits;
    
    // check if digit is a five digit integer
    if (to_string(digits).length() < 5 || to_string(digits).length() > 5)
    {
        cout << "\nERROR - Please enter a five digit integer";
    } else {
        // algorithm to separate the integer into digits and print
        int num = digits;
        cout << num / 10000 << "\t";
        num = num % 10000;
        cout << num / 1000 << "\t";
        num = num % 1000;
        cout << num / 100 << "\t";
        num = num % 100;
        cout << num / 10 << "\t";
        num = num % 10;
        cout << num << "\n";
    }
    
    //system("PAUSE");
    return EXIT_SUCCESS;
}
