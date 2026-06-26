#include "clockFunctions.h"

void addOneHour() {
  // AddOneHour() function, made from the sense instant feedback tool
  unsigned int currentHour = getHour(); // making an int variable for addOneHour to use based off the current hour, using getter getHour()
  
  if (currentHour < 23) {
    currentHour += 1;
    setHour(currentHour); //Check that makes sure adding an hour wouldn't make currentHour = 24 or more, and adds 1 hour
  }
  else {
    setHour(0);
  } //else, setHour is 0, which helps in case hour would somehow get to 24 or higher due to a bug.

  // function doesn't return anything, just adds an hour appropriately based on 24 hour clock
}
