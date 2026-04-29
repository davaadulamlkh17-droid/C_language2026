#include <stdio.h>
int main() {
    FILE *fptr;
    int x, sum = 0;
    fptr = fopen("numbers.txt", "r");
    while (fscanf(fptr, "%d", &x) != EOF) {
        sum += x;
    }
    printf("Niilber = %d\n", sum);
    fclose(fptr);
    return 0;
}