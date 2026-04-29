#include <stdio.h>
#include <stdlib.h>
int main(){
    char text[101]; FILE *fptr;
    fptr = fopen("output.txt","w");
    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    fprintf(fptr, "%s", text);
    fclose(fptr);
    return 0;
}