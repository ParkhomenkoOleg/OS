#include <stdio.h>
#include <stdlib.h>

int main() {
    char *env_name = "GDMSESSION";
    if(env_name != NULL) {
        int unset = unsetenv(env_name);
        if(unset == 0) {
            printf("Variable successfully unset");
        }
        else {
            printf("Something wrong");
        }
    }
    else {
        clearenv();
    }
    return 0;
}
