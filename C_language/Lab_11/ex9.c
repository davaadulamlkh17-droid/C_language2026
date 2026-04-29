#include <stdio.h>
#include <stdlib.h>
int main(){
    int num, max; FILE *fptr;
    fptr = fopen("data.txt","r");
    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fscanf(fptr, "%d", &max);
    while (fscanf(fptr, "%d", &num)==1)
    {
        if (num>max)
        {
            max = num;
        }
    }
    printf("max = %d", max);
    fclose(fptr);
    return 0;
}