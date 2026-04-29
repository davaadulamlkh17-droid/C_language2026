#include <stdio.h>
#include <stdlib.h>
int main(){
    char text[101]; FILE *fptr;
    fptr = fopen("input.txt","r");
    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fgets(text, 100, fptr);
    printf("n = %s", text);
    fclose(fptr);
    return 0;
}