#include<stdio.h>
#include<stdlib.h>


void main() {
    
    FILE * fpointer = fopen("beemovie.txt", "r");

    char line[10000];
    int lines = 0;
    
    for(line; lines < 2078; lines++) {
        fgets(line, 10000, fpointer);
        printf("%s", line);
    }
    

    
    fclose(fpointer);
    
}

