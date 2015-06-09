/*
 * main.cpp
 * HealthProfile program . This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        [ Enter your name here ]
 * Matric No:   [ Enter your matric number here]
 * Department:  [ Enter your department here ]
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

int main()
{
    // Variable declarations
    string firstName;
    string lastName;
    string gender;
    int month;
    int day;
    int year;
    double height;
    int weight;
    int currentDay;
    int currentMonth;
    int currentYear;
    
    // Prompt for patient information
    cout << "Welcome to our program to computerize healthcare records\n";
    cout << "please fill-in your information as requested. Thank you\n";
    cout << "\nKindly enter todays day, month and year using numeric representations only\n";
    cout << "e.g. 3, 5, 2015 indicating 3rd of May, 2015, else software would break\n";
    cout << "Day: ";
    cin >> currentDay;
    cout << "Month: ";
    cin >> currentMonth;
    cout << "Year: ";
    cin >> currentYear;
    
    cout << "\nEnter First Name: ";
    cin >> firstName;
    cout << "Enter Last Name: ";
    cin >> lastName;
    cout << "Enter Gender: ";
    cin >> gender;
    
    cout << "\nPlease fill-in Date of Birth details\n";
    cout << "following the same rules outlined above\n";
    cout << "Day: ";
    cin >> day;
    cout << "Month: ";
    cin >> month;
    cout << "Year: ";
    cin >> year;
    cout << "\nEnter Weight (in kilograms): ";
    cin >> weight;
    cout << "Enter Height (in meters): ";
    cin >> height;
    
    // Instantiate an object of class HealthProfile
    HealthProfile myProfile1(firstName, lastName, gender, month, day, year,
                             weight, height, currentDay, currentMonth, currentYear);
    
    // Print information from the object
    myProfile1.getInformation();
    
}