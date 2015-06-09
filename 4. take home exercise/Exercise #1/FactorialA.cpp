//
//  FactorialA.cpp
//  Write a program that reads a nonnegative integer and computes and prints its factorial.
//  Prompt the user for the desired accuracy of e
//
//  Created by Ekaba Ononse Bisong on 6/8/15.
//  Copyright (c) 2015 Ekaba Ononse Bisong. All rights reserved.
//

#include <iostream>
using namespace std;

// helper functions

// function to print error message
void printError()
{
    cout << "ERROR: Wrong Input\n";
}

// function to flush and reset cin
void clearInput()
{
    cin.clear();                // take stream out of fail state
    cin.ignore(256, '\n');      // remove from the stream the input that caused the problem
}

// function to read a non-negative integer
// Note: Not a very robust check as more powerful techniques have not been taught
int readInt()
{
    bool loop = false;      // boolean variable to continue loop on wrong input
    int number = 0;         // return variable of non-negative integer
    
    do {
        int temp;           // variable to hold user-inputed number for checks
        cout << "Please enter a non-negative integer: ";
        cin >> temp;
        
        if (temp < 0)       // check if number entered is non-negative
        {
            clearInput();
            printError();
            loop = true;
        } else if (temp == 0){  // check if number is zero
            loop = false;
        } else if (!(temp >> number)) {     // check if user entered a number
            clearInput();
            printError();
            loop = true;
        }
        else {
            loop = false;
            number = temp;
        }
    } while (loop);
    
    return number;
}

// function to calculate factorial
int calculateFactorial( int n )
{
    int fact = 1;   // variable to hold factorial value
    
    // for loop to calculate factorial, n! = n * (n-1) * (n-2)....
    for (int i = n; i > 0; i--)
    {
        fact *= i;
    }
    
    return fact;
}

// main function to run program
int main()
{
    int run;    // hold variable to continue program
    
    do {
        // read a nonnegative integer and calculate factorial
        int number = readInt();
        
        // print factorial
        cout << number <<"! = " << calculateFactorial(number);
        
        //continue program
        clearInput();
        cout << "\n\nRun program again, 1 = Yes / 0 = No: ";
        cin >> run;
        
        // if running program again, print newline
        if (run == 1)
        {
            cout << endl;
        }
        
    } while (run == 1);
    
    return 0;
}