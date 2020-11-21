#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

struct termios orig_termios;
void disableRaw() {
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig_termios);
}

void enableRaw() {
    tcgetattr(STDIN_FILENO, &orig_termios);
    atexit(disableRaw);
    struct termios raw = orig_termios;
    raw.c_lflag &= ~(ECHO | ICANON);

    raw.c_lflag &= ~(ECHO);
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}