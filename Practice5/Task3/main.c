#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *env_name = "TEST_ENV_NAME";
    char *value = "test_info";
    int set = setenv(env_name, value, 1);
    if(set != 0){
        printf("Name or value not correct");
    }
    char env[100];
    strcpy(env, env_name);
    strcat(env, "=");
    strcat(env, value);

    int put = putenv(env);
    if(put == 0 ){
        printf("The program was completed successfully");
    }
    else {
        printf("Error");
    }
    return 0;
}
