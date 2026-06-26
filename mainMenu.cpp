#include "clockFunctions.h"


void mainMenu() {
  // Main Menu function where the menus logic is stored.
  
  unsigned int choice;
  const char* menuChoices[] = {
    "Add One Hour",
    "Add One Minute",
    "Add One Second",
    "Exit Program"
  }; //constant character array made with possible menu choices

  do { // starts the do while statement, which loops until the while part is met
    printMenu(menuChoices, 4, 27); 
    /* calls printMenu, passing these arguments:
    * menuChoices array, because these are the possible choices
    * 4 for the total options there are
    * and 27 for the width of the menu box, which helps the program stay modular instead of hardcoding the width.
    */
    
    choice = getMenuChoice(4); // stores the user's choice, calls getMenuChoice with a max choice of 4, making sure whatever the user enters is valid before returning the value
    
    // switch statement for the user choice
    switch(choice) {
      case 1:
        addOneHour();
        break;
      case 2:
        addOneMinute();
        break;
      case 3:
        addOneSecond();
        break;
      case 4:
        break;
    }
    
    if (choice != 4) {
      displayClocks(getHour(), getMinute(), getSecond()); 
    } // displays the user's choice using displayClocks and then getters for hour, minute, and second
    
  } while (choice != 4); //the while part specifies to continue while the user hasn't input 4, which is the option of exiting program
}
