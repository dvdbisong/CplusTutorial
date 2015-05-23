/*
 *  Question6.cpp
 *
 *  Author: Ekaba Bisong
 *  Date: May 23, 2015
 *
 *  Body Mass Index (BMI) calculator application that reads
 *  the user’s weight in kilograms and height in meters,
 *  calculates and display the user’s body mass index
 *
 */

#include <iostream>
using namespace std;

int main()
{
    // Variable declaration
    double weightInKilograms;
    double heightInMeters;
    double BMI;
    
    // display welcome messages to user
    cout << "Welcome - This Body Mass Index (BMI) calculator application that reads\n";
    cout << "the user’s weight in kilograms and height in meters,\n";
    cout << "calculates and display the user’s body mass index\n\n";
    
    // display information from the Department of Health and Human Services
    cout << "BMI VALUES\n";
    cout << "Underweight:   less than 18.5\n";
    cout << "Normal:        between 18.5 and 24.9\n";
    cout << "Overweight:    between 25 and 29.9\n";
    cout << "Obese:         30 or greater\n\n";
    
    // read in values
    cout << "Enter weight (in kg): ";
    cin >> weightInKilograms;
    cout << "Enter height (in meters): ";
    cin >> heightInMeters;
    
    // calculate BMI
    BMI = weightInKilograms / (heightInMeters * heightInMeters);
    
    // display result
    cout << "\nYour Body Mass Index (BMI) is = "<< BMI << endl;
    
    cout << "\nThanks and Goodbye";
    
    //system("PAUSE");
    return EXIT_SUCCESS;
}
