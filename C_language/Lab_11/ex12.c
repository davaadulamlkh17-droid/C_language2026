#include <stdio.h>
int main() {
    FILE *file;
    char name[50];
    int score;
    
    int sum = 0, count = 0;

    file = fopen("score.txt", "r");

    if (file == NULL) {
        printf("Файл нээж чадсангүй!\n");
        return 1;
    }
    printf("Оюутнуудын мэдээлэл:\n");

    while (fscanf(file, "%s %d", name, &score) == 2) {
        printf("%s %d\n", name, score);
        sum += score;
        count++;
    }
    if (count > 0) {
        double avg = (double)sum / count;
        printf("Дундаж оноо: %.2f\n", avg);
    } else {
        printf("Мэдээлэл олдсонгүй.\n");
    }

    fclose(file);
    return 0;
}