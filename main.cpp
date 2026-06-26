#include "clockFunctions.h"

// global variables to store time
unsigned int g_hour = 0;
unsigned int g_minute = 0;
unsigned int g_second = 0;

// getter functions for hour, minute, and second
unsigned int getHour() {
  return g_hour;
}

unsigned int getMinute() {
  return g_minute;
}

unsigned int getSecond() {
  return g_second;
}

// setter functions for hour, minute, and second
void setHour(unsigned int h) {
  g_hour = h;
}

void setMinute(unsigned int m) {
  g_minute = m;
}

void setSecond(unsigned int s) {
  g_second = s;
}

int main() {
  // at the start of the program, the user is prompted to enter the time values and what a valid input is.
  cout << "Enter starting hour (0-23): ";
  cin >> g_hour;
  
  cout << "Enter starting minute (0-59): ";
  cin >> g_minute;
  
  cout << "Enter starting second (0-59): ";
  cin >> g_second;
  
  // calls displayClocks and passes the user input time
  displayClocks(g_hour, g_minute, g_second);
  
  // calls the function with the main menu logic
  mainMenu();
  
  return 0;
}
