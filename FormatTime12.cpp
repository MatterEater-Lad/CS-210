#include "clockFunctions.h"


string formatTime12(unsigned int h, unsigned int m, unsigned int s) {

  // Formats time according to 12 hour clock conventions

  string meridian = ""; //creating an empty string for the meridian, that will store A M or P M

  unsigned int displayHour = h; //variable for storing display hour from the entered h, hour value

  if (h >= 12){
    meridian = "P M"; // if hour is over 12, meridian is P M
  }
  else {
    meridian = "A M"; //else, meridian will be A M
  }

  if (displayHour == 0){
    displayHour = 12; //an hour of 0 in 12 hour format is 12 
  }
  else if (displayHour > 12) {
    displayHour = displayHour - 12; //else, since we already have the meridian, the entered hour can have 12 subtracted to get the 12 hour formatted time
  }

  //converts to strings and approrpiately formats them with twoDigitString
  string hours = twoDigitString(displayHour);
  string minutes = twoDigitString(m);
  string seconds = twoDigitString(s);

  string time = hours + ":" + minutes + ":" + seconds + " " + meridian; // stores out the final result in a line all nice like

//returns this final time result to be displayed when called
  return time;
}
