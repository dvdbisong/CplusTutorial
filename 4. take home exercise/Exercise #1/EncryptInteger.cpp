//
//  main.cpp
//  EncryptInteger
//
//  Created by Ekaba Ononse Bisong on 6/8/15.
//  Copyright (c) 2015 Ekaba Ononse Bisong. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// helper functions

// function to flush and reset cin
void clearInput()
{
    cout << "ERROR: Wrong Input\n";
    cin.clear();                // take stream out of fail state
    cin.ignore(256, '\n');      // remove from the stream the input that caused the problem
}

// function to read a non-negative integer
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
            loop = true;
        } else if (temp == 0){  // check if number is zero
            loop = false;
        } else if (temp < 1000 || temp > 9999) {   // check if user entered a four-digit number
            clearInput();
            loop = true;
        } else if(!(temp >> number)) {     // check if user entered a number
            clearInput();
            loop = true;
        }
        else {
            loop = false;
            number = temp;
        }
    } while (loop);
    
    return number;
}

// function to swap digits
int swapCombine ( int firstDigit, int secondDigit, int thirdDigit, int fourthDigit)
{
    // commented code would still work - please study it
    /*int swap;   // variable to hold swapped digits
    
    // convert digits to strings and concatenate them
    ostringstream digitToString;
    digitToString << thirdDigit << fourthDigit << firstDigit << secondDigit;
    
    // convert the result back to an integer
    istringstream stringToDigit(digitToString.str());
    
    stringToDigit >> swap;
    
    return swap;*/
    
    // swap
    int first = thirdDigit * 1000;
    int second = fourthDigit * 100;
    int third = firstDigit * 10;
    int fourth = secondDigit;
    
    // combine
    int final = first + second + third + fourth;
    
    return final;
}

// function to encrypt digit
int encryptDigit ( int oldDigit )
{
    // get each digit
    int newDigit1 = oldDigit / 1000;
    int newDigit2 = (oldDigit / 100) % 10;
    int newDigit3 = (oldDigit / 10) % 10;
    int newDigit4 = oldDigit % 10;
    
    // increase each digit by 7
    newDigit1 += 7;
    newDigit2 += 7;
    newDigit3 += 7;
    newDigit4 += 7;
    
    // divide new value by 10 to get reminder
    newDigit1 = newDigit1 % 10;
    newDigit2 = newDigit2 % 10;
    newDigit3 = newDigit3 % 10;
    newDigit4 = newDigit4 % 10;
    
    // call swapCombine to swap and combine the digits
    int newDigit = swapCombine(newDigit1, newDigit2, newDigit3, newDigit4);
    
    return newDigit;
}

// function to run the program
int main()
{
    // read a four digit integer
    int value = readInt();
    // encrypt digit
    int encrypt = encryptDigit(value);
    cout << "Encrypted value: " << encrypt;
}