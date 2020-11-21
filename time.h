#include <stdio.h>
#include <time.h>

const char* get_time() {
    // Get the time
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);

    // Return the time
    return asctime(tm);
}