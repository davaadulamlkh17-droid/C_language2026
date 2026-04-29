#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fptr;
    char ch[101];
    fptr = fopen("students.txt","w");
    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    for (int i = 0; i < 5; i++)
    {
        fgets(ch, sizeof(ch), stdin);
        fprintf(fptr, "%s", ch);
    }
    fclose(fptr);
    return 0; 
}