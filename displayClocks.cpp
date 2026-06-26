#include "clockFunctions.h"


void displayClocks(unsigned int h, unsigned int m, unsigned int s) {
// function to display clocks
// it uses nCharString to quickly print out * for formatting and readability

cout << nCharString(27,'*') << "   " << nCharString(27,'*') << endl;

cout << "*      12-HOUR CLOCK      *   ";
cout << "*      24-HOUR CLOCK      *" << endl;
cout << endl;

cout << "*      " << formatTime12(h, m, s) << "       *   "; //formatTime12 is used for the 12 hour clock view
cout << "*        " << formatTime24(h, m, s) << "         *" << endl; //formatTime12 is used for the 12 hour clock view

cout << nCharString(27,'*') << "   " << nCharString(27,'*') << endl;
//format of the clock display made according to sense feedback and rubric specifications

}
