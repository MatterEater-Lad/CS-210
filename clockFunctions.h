#ifndef CLOCK_FUNCTIONS_H
#define CLOCK_FUNCTIONS_H

#include <string>
#include <iostream>
using namespace std;

/* clockFunctions is the header file storing all the functions that will be referenced throughout the project
* Most everything is seperated out to keep with the rubric in making sure everything is modular, and due to
* the sense instant feedback tool for a lot of them.
*/

string twoDigitString(unsigned int n); //function for turning numbers into the proper two digit format
string formatTime24(unsigned int h, unsigned int m, unsigned int s); //function for formatting time to 24 hour clock
string formatTime12(unsigned int h, unsigned int m, unsigned int s); //function for formatting time to 12 hour clock

string nCharString(size_t n, char c); //function for printing a specified character a specified number of times

void printMenu(const char* strings[], unsigned int numStrings, unsigned char width); //function for printing menu options
void displayClocks(unsigned int h, unsigned int m, unsigned int s); //function for displaying the 12 and 24 hour clocks
unsigned int getMenuChoice(unsigned int maxChoice); //function for getting the users choice in the menu

void mainMenu(); //function for the main menu logic

void addOneHour(); //function that adds one hour when called
void addOneMinute(); //function that adds one minute when called
void addOneSecond(); //function that adds one second when called

//getter and setter for the hour value
unsigned int getHour();
void setHour(unsigned int h);

//getter and setter for the minute value
unsigned int getMinute();
void setMinute(unsigned int m);

//getter and setter for the second value
unsigned int getSecond();
void setSecond(unsigned int s);

#endif
