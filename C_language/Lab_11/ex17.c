#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char line[256];
    char longest[256] = "";
    int maxLen = 0;

    file = fopen("text.txt", "r");

    if (file == NULL) {
        printf("Файл нээж чадсангүй!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        int len = strlen(line);

        if (len > maxLen) {
            maxLen = len;
            strcpy(longest, line);
        }
    }

    fclose(file);

    printf("Хамгийн урт мөр:\n%s", longest);
    printf("Урт: %d\n", maxLen);

    return 0;
}