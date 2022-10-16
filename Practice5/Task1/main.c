#include <stdio.h>
#include <stdlib.h>

int main() {
    extern char **environ;
    for (int i = 0; i < sizeof(environ); ++i) {
        printf("%s", environ[i]);
    }
    return 0;
}
