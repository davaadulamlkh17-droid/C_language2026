#include <stdio.h>

int main() {
    FILE *file;
    int num;
    int count = 0;

    file = fopen("numbers.txt", "r");

    if (file == NULL) {
        printf("Файл нээж чадсангүй!\n");
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1) {
        if (num % 2 == 0) {  
            count++;
        }
    }

    printf("Тэгш тоонуудын тоо: %d\n", count);

    fclose(file);
    return 0;
}