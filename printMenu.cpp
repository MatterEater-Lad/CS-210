#include "clockFunctions.h"


void printMenu(const char* strings[], unsigned int numStrings, unsigned char width) {
//printMenu takes an array for menu options, the number of strings for the possible choices, then width for what the max display width should be

  cout << nCharString(width, '*') << endl;
  for (unsigned int i = 0; i < numStrings; i++){
    string line = "* " + to_string(i +1) + " - " + strings[i];
    int lineUsed = line.length();
    int spacesNeeded = width - lineUsed - 1;
    cout << line + nCharString(spacesNeeded, ' ') + "*" << endl;
    //for loop that iterates through the menu using numStrings and strings[i] for what each option is for
    //with the empty space at the end, calculates the spaces needed based off the length of the current lines string, 
    //subtracting from the max width, then subtracting 1 more for the final * to be printed.
  if (i == numStrings - 1 ){
  cout << nCharString(width, '*') << endl;
  }
  else{
    cout << endl;
  }

  }

}
