#include "clockFunctions.h"


void addOneSecond() {
  /** addOneSecond, like the other addOne functions, adds a second, and when necessary
   * adds a minute
   */

  unsigned int currentSecond = getSecond(); //variable that stores the current second value that will be updated

  if (currentSecond < 59) {
    currentSecond += 1;
    setSecond(currentSecond); //Check for the second being under 59 before adding a second then setting the new second
  }

  else {
    setSecond(0);
    addOneMinute();
  } //Else, the second is set to 0 and then addOneMinute is called

  // nothing to return, this function just sets the second appropriately and calls addOneMinute if needed.
}
