/*
 *  Question4.cpp
 *
 *  Name:           [ enter your name here ]
 *  Department:     [ enter your department here ]
 *  Matric. No:     [ enter matric no. here ]
 *
 *  Program that inputs a five-digit integer,
 *  separates the integer into its digits and prints them separated by three spaces each
 *
 *  Stub file to enable you complete assignment #1 - question #4
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
    
    // TODO: Read integer using cin
    cout << "Enter five digit integer value -  ";
    // Put code here ...
    
    // check if digit is a five digit integer
    if (to_string(digits).length() < 5 || to_string(digits).length() > 5)
    {
        cout << "\nERROR - Please enter a five digit integer";
    } else {
        // TODO: Separate the integer into its digits and prints them separated by three spaces each
        // Put code here ...
    
    }
    
    cout << "\nThanks and Goodbye";
    
    //system("PAUSE");
    return EXIT_SUCCESS;
}
