#include <stdio.h>

int main() {
    FILE *a, *b, *merge;
    char ch;
    a = fopen("a.txt", "r");
    b = fopen("b.txt", "r");
    merge = fopen("merge.txt", "w");
    if (a == NULL || b == NULL || merge == NULL) {
        printf("Файл нээж чадсангүй!\n");
        return 1;
    }
    while ((ch = fgetc(a)) != EOF) {
        fputc(ch, merge);
    }

    while ((ch = fgetc(b)) != EOF) {
        fputc(ch, merge);
    }
    fclose(a);
    fclose(b);
    fclose(merge);
    return 0;
}