#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fptr;
    int count = 0, inWord = 0;
    char ch;
    fptr = fopen("text.txt", "r");
    while ((ch = fgetc(fptr)) != EOF) {
        if (isspace(ch)) {
            inWord = 0;
        } else {
            inWord = 1;
            count++;
        }
    }
    printf("Ugiin too = %d\n", count);
    fclose(fptr);
    return 0;
}