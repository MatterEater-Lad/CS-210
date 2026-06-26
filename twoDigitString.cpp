#include "clockFunctions.h"


string twoDigitString(unsigned int n) { //function for formatting a number into a string of two digits
  if (n < 10){ //checks if the number n is less than 10, if it's over 10 this is not needed as it's already 2 digits
    return "0" + to_string(n); //adds 0 in front of the stringified number and returns this value
   }
   return to_string(n); //else, if n didn't pass the first check it's already 2 digits, and returns this.
   
}
