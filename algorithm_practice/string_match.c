#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    char source[80];
    char search[80];
    char *loc;
	
    printf("x:");
    gets(source);
	
    printf("y:");
    gets(search);
	
    loc = strstr(source, search);
	
    if (loc == NULL) {
        printf("can't find\n");
    }
    else {
        printf("found");
    }
	
    return 0; 
}