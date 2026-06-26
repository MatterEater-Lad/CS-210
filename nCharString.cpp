#include "clockFunctions.h"

string nCharString(size_t n, char c) { //fucntion taking a size then a character to be output to that size
    string result = "";
    for (size_t i = 0; i < n; i++){
        result += c;
    } //iterates through a for loop until the result string matches the size given as the size argument
    return result; // returns the result string with the character and size to be printed
}
