#include <stdio.h>
#include <unistd.h>

#include "gencrypto.h"
#include "time.h"
#include "validate.h"
#include "rawMode.h"

int main() {
    enableRaw();

    while (1) {
        char *text = get_time();
        char *encrypted = cryptocurrency(text);
        bool working = validate(encrypted);

        if (!working) {
            printf("Success at        %s", encrypted);
        } else {
            printf("Block failed at   %s", encrypted);
        }

        free(encrypted);
        sleep(1);
    }
    return 1;
}
