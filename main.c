#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char buf[256];
    printf("shell cmd: ");
    gets(buf);
    system(buf);
    return 0;
}
