#include <stdio.h>
#include <stdlib.h>


int main() {
    char *env_name = "GDMSESSION";
    char *s;
    s = getenv(env_name);
    if(s != NULL) {
        printf("%s = %s", env_name, s);
    }
    else {
        printf("this variable does not exist");
    }
    return 0;
}
