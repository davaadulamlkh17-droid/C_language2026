#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("source.txt", "r");
    dest = fopen("copy.txt", "w");

    if (src == NULL || dest == NULL) {
        printf("Файл нээж чадсангүй!\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("Файл амжилттай хууллаа.\n");
    return 0;
}