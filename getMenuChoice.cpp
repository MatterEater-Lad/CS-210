#include "clockFunctions.h"

//getMenuChoice, it takes the value of maxChoice so that
//it can make sure what's returned is within the actual parameters
unsigned int getMenuChoice(unsigned int maxChoice) {


  unsigned int userChoice; // int storing the user choice
  cin >> userChoice; //user input

  while ((userChoice < 1) || (userChoice > maxChoice)){
    cin >> userChoice;
  } //while loop, that checks whether user choice is less than 1 or over the given max choice, and will keep asking as long as this is true

  // return the user's choice
  return userChoice;
}
