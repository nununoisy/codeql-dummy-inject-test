#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char buf[256];
    printf("shell cmd: ");
    fgets(buf, 255, stdin);
    char[255] = '\0';
    system(buf);
    return 0;
}
