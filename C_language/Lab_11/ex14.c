#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int count = 0;

    file = fopen("text.txt", "r");

    if (file == NULL) {
        printf("Файл нээж чадсангүй!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (isupper(ch)) { 
            count++;
        }
    }

    printf("Том үсгийн тоо: %d\n", count);

    fclose(file);
    return 0;
}