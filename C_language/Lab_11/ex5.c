#include <stdio.h>
int main() {
    FILE *fptr;
    int count = 0;
    char ch;
    fptr = fopen("text.txt", "r");
    while ((ch=fgetc(fptr)) != EOF) {
        count++;
    }
    printf("Temdegtiin too = %d\n", count);
    fclose(fptr);
    return 0;
}