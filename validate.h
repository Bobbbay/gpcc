#include <ctype.h>
#include <stdbool.h>

bool validate(char* text){
    char string[256];

    // Get the first 5 characters of *text, then
    // null terminate it
    strncpy(string, text, 5);
    string[5] = 0;

    bool validity = 0;
    for (int i=0; i<5; i++){
        if(isdigit(string[i])) {
        } else {
            validity = 1;
        }
    }

    return validity;
}