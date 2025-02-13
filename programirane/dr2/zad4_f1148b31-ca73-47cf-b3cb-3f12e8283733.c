#include <stdio.h>
#define COMMAND(NAME, TYPE) TYPE##_##NAME##_command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void)

DEFINE_COMMAND(quit, internal) {
    printf("text1\n");
}

DEFINE_COMMAND(quit, external) {
    printf("text2\n");
}

int main() {
    internal_quit_command();
    external_quit_command();
    return 0;
}
