#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++){
        printf("Paramentro ( %2d ): %s\n", i, argv[i]); 
    }
    return 0;
}