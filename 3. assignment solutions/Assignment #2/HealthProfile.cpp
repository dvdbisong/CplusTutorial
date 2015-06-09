/*
 * HealthProfile.cpp
 * HealthProfile member-function definitions. This file contains
 * implementations of the member functions prototyped in HealthProfile.h
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
#include <math.h>           // uses C++ math class
#include <iomanip>          // used iomanip class to format output text
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

// constructor initializes patient information
HealthProfile::HealthProfile( string firstName, string lastName, string gender, int month,
                             int day, int year, int weight, double height, int currentDay,
                             int currentMonth, int currentYear)
{
    setFirstName( firstName );      // call set function to initialize firstName
    setLastName( lastName );        // call set function to initialize lastName
    setGender( gender );            // call set function to initialize gender
    setMonth( month );              // call set function to initialize month
    setDay( day );                  // call set function to initialize day
    setYear( year );                // call set function to initialize year
    setWeight( weight );            // call set function to initialize weight
    setHeight( height );            // call set function to initialize height
    setAge( currentDay, currentMonth, currentYear);  // call set function to calculate age
}

// function to set the first name
void HealthProfile::setFirstName( string firstName )
{
    this->firstName = firstName;    // store the first name in the object
}

// function to get the first name
string HealthProfile::getFirstName()
{
    return firstName;               // return patients first name
}

// function to set the last name
void HealthProfile::setLastName( string lastName )
{
    this->lastName = lastName;      // store the last name in the object
}

// function to get the last name
string HealthProfile::getLastName()
{
    return lastName;                // return patients last name
}

// function to set gender
void HealthProfile::setGender( string gender )
{
    this->gender = gender;          // store gender in the object
}

// function to get gender
string HealthProfile::getGender()
{
    return gender;                  // return patients gender
}

// function to set the month
void HealthProfile::setMonth( int month )
{
    this->month = month;            // store month in the object
}

// function to get month
int HealthProfile::getMonth()
{
    return month;                   // return patients birth month
}

// function to set day
void HealthProfile::setDay( int day )
{
    this->day = day;                // store day in the object
}

// function to get day
int HealthProfile::getDay()
{
    return day;                     // return patients birth day
}

// function to set year
void HealthProfile::setYear( int year )
{
    this->year = year;              // store year in the object
}

// function to get year
int HealthProfile::getYear()
{
    return year;                    // return patients birth year
}

// function to set patients weight
void HealthProfile::setWeight( int weight )
{
    this->weight = weight;          // store weight in the object
}

// function to get patients weight
int HealthProfile::getWeight()
{
    return weight;                  // return patients weight
}

// function to set patients height
void HealthProfile::setHeight( double height )
{
    this->height = height;          // store height in the object
}

// function to get patients height
double HealthProfile::getHeight()
{
    return height;                  // return patients height
}

// function to set patients age in years
void HealthProfile::setAge(int currentDay, int currentMonth, int currentYear)
{
    // logic to calculate age
    if (getMonth() > currentMonth) {        // if birth month is greater-than current month
        age = currentYear - getYear() - 1;
    } else {
        age = currentYear - getYear();
    }
}

// function to get patients age
int HealthProfile::getAge()
{
    return age;
}

// function to calculate and return BMI
double HealthProfile::getBMI()
{
    double BMI;                                 // variable to hold calculated BMI
    BMI = getWeight() / pow(getHeight(), 2);    // formula to calculate BMI
    return BMI;
}

// function to calculate and return maximum heart rate
int HealthProfile::getMaximumHeartRate()
{
    double maxHrtRate;              // variable to hold calculated value
    maxHrtRate = 220 - getAge();    // formula to calculate maximum heart rate
    return maxHrtRate;
}

// function to calculate and return target heart rate
double HealthProfile::getTargetHeartRate()
{
    double tgtHrtRate;                          // variable to hold calculated value
    tgtHrtRate = (0.50 * getMaximumHeartRate()) - (0.85 * getMaximumHeartRate());  // formula to calculate target heart rate
    return tgtHrtRate;
}

// funtion to print object information
void HealthProfile::getInformation()
{
    cout << "\n\nHEALTH PROFILE FOR - " << getFirstName() << " " << getLastName() << endl;
    cout << "First Name: " << setw(17) << getFirstName() << endl;
    cout << "Last Name: " << setw(19) << getLastName() << endl;
    cout << "Gender: " << setw(20) << getGender() << endl;
    cout << "Date of Birth: " << setw(10) << getDay() << "/" << getMonth() << "/" << getYear() << endl;
    cout << "Weight (in kilograms): " << setw(3) << getWeight() << endl;
    cout << "Height (in meters): " << setw(10) << getHeight() << endl;
    cout << "Age: " << setw(21) << getAge() << " year(s)" << endl;
    cout << "Body Mass Index (BMI): " << setw(8) << getBMI() << endl;
    cout << "Maximum Heart Rate: " << setw(7) << getMaximumHeartRate() << endl;
    cout << "Target Heart Rate: " << setw(11) << getTargetHeartRate() << endl;
    cout << "\nBMI VALUES CHART" << endl;
    cout << "Underweight:   less than 18.5" << endl;
    cout << "Normal:        between 18.5 and 24.9" << endl;;
    cout << "Overweight:    between 25 and 29.9" << endl;
    cout << "Obese:         30 or greater" << endl;
}