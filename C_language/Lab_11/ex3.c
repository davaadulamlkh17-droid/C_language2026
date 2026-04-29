#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fptr;
    fptr = fopen("numbers.txt","w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(fptr, "%d\n", i);
    }
    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fclose(fptr);
    return 0;
}