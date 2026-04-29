#include <stdio.h>
int main() {
    FILE *fptr;
    int count = 0;
    char ch;
    fptr = fopen("text.txt", "r");
    while ((ch = fgetc(fptr)) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }
    printf("Muriin too = %d\n", count + 1);
    fclose(fptr);
    return 0;
}