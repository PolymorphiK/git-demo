#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    for(int i = 0; i < argc; ++i) {
        printf("%i %s\n", i, argv[0]);
    }

    printf("Hello, World\n");

    return EXIT_SUCCESS;
}

// Github
// master
// c0 (readme)
// end...

// local
// master
// c0 (readme) -> c1 (main.c)