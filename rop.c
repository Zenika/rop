#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv){
    char buffer[232];
    int len, i;

    gets(buffer);
    len = strlen(buffer);

    if(len >= 550){
	    printf("Size too big :(\n");
	    exit(EXIT_FAILURE);
    }
    for (i=0; i<len; i++){
        printf("%02x", buffer[i]);
    }
    printf("\n");
    return 0;
}
