/*
 * HealthProfile.h
 * HealthProfile class definition. This file represents HealthProfile's public
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

#include <string>           // uses C++ string class
using namespace std;

// HealthProfile class definition
class HealthProfile
{
    // public interface
public:
    HealthProfile( string, string, string, int, int, int, int, double, int, int, int ); // constructor that initializes patient information
    void setFirstName( string );    // function that sets the first name
    string getFirstName();          // function that gets the first name
    void setLastName ( string );    // function that sets the last name
    string getLastName();           // function that gets the last name
    void setGender ( string );      // function that sets gender
    string getGender();             // function that gets the gender type
    void setMonth ( int );          // function that sets the month
    int getMonth();                 // function that gets the month
    void setDay( int );             // function that sets the day of month
    int getDay();                   // function that gets the day of month
    void setYear( int );            // function that sets the year
    int getYear();                  // function that gets the year
    void setHeight( double );       // function that sets height
    double getHeight();             // function that gets the height
    void setWeight( int );          // function that sets the weight
    int getWeight();                // function that gets the weight
    void setAge( int, int, int );   // function that sets the age (in years)
    int getAge();                   // function to get patients age in years
    double getBMI();                // function to calculate and return BMI
    int getMaximumHeartRate();      // function to calculate and return maximum heart rate
    double getTargetHeartRate();    // function to calculate and return target heart rate
    void getInformation();          // function to print object information
    
    
    // private interface
private:
    string firstName;               // variable to hold firstname
    string lastName;                // variable to hold lastname
    string gender;                  // variable to hold gender
    int month;                      // variable to hold month
    int day;                        // variable to hold day
    int year;                       // variable to hold year
    double height;                  // variable to hold height
    int weight;                     // variable to hold weight
    int age;                        // variable to hold age
    
}; // end class HealthProfile
