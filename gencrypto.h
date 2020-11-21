#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

char* cryptocurrency(char *text) {
    // Concatenate strings together
    // to create our command
    char *command_part = "' | sha256sum";
    char command[48];
    strcpy(command, "echo -n '");
    strcat(command, text);
    strcat(command, command_part);

    FILE *cmd=popen(command, "r");

    char result[72]={0x0};
    while (fgets(result, sizeof(result), cmd) !=NULL)
    pclose(cmd);
    char *res = malloc(71);

    for (int i=0; i<72; i++) {
        res[i] = result[i];
    }
    return res;
}
