#include "clockFunctions.h"


void addOneMinute() {
  /**addOneMinute adds a minute to the current minute, and checks appropriately if 
   * the minute is in the appropriate range and adds an hour when needed
   */

  unsigned int currentMinute = getMinute(); //variable using a getter for the current minute that will be updated

  if (currentMinute < 59) {
    currentMinute += 1;
    setMinute(currentMinute);
  } // Check that makes sure the minute is under 59 before adding a minute, then using a setter to set to the new minute

  else {
    setMinute(0);
    addOneHour();
  } // else, if the minute would be 59 or higher, the minute is set to 0 and addOneHour is called.

  // nothing to return, this just sets the minute and adds an hour if needed
}
