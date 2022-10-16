#include <stdio.h>
#include <unistd.h>
#include <sys/utsname.h>

int main() {
    char host_buffer[1024];
    gethostname(host_buffer, sizeof(host_buffer));

    printf("Host name -> %s\n", host_buffer);

    struct utsname info;
    uname(&info);
    printf("Sys name -> %s\n", info.sysname);
    printf("Node name -> %s\n", info.nodename);
    printf("Release -> %s\n", info.release);
    printf("Version -> %s\n", info.version);
    printf("Machine -> %s\n", info.machine);
    printf("Host id -> %ld\n", gethostid());
    return 0;
}
