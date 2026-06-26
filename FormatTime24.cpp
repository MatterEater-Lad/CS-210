#include "clockFunctions.h"

//takes the entered hour, minute, and second values,
//then converts them to the properly formatted 2 digit string
string formatTime24(unsigned int h, unsigned int m, unsigned int s) {
  string hours = twoDigitString(h);
  string minutes = twoDigitString(m);
  string seconds = twoDigitString(s);

  string time = hours + ":" + minutes + ":" + seconds; //stores the formatted string all together in a time value


  // returns the properly formatted time
  return time;
}
