#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int opt;
    char* c;

    while ((opt = getopt(argc, argv, "ho:c")) != -1) {
        switch (opt) {
            case 'h':
                printf("The program has three options\n"
                       "-> -h - help on using the program and stop program\n"
                       "-> -o out_file_name - non-standard output file name\n"
                       "-> -c - special mode of operation\n");
                break;
            case 'o':
                c = (char*) optarg;
                printf("Input -o -> %s\n", c);
                break;
            case 'c':
                printf("Special mod is ON\n");
                break;
            default:
                exit(1);
        }
    }

    return 0;
}
