#include <stdio.h>

int main() {
    FILE *in, *out;
    char name[50];
    int score;
    char grade;

    in = fopen("score.txt", "r");
    out = fopen("result.txt", "w");

    if (in == NULL || out == NULL) {
        printf("Файл нээж чадсангүй!\n");
        return 1;
    }

    while (fscanf(in, "%s %d", name, &score) == 2) {

        if (score < 60)
            grade = 'F';
        else if (score < 70)
            grade = 'D';
        else if (score < 80)
            grade = 'C';
        else if (score < 90)
            grade = 'B';
        else
            grade = 'A';

        fprintf(out, "%s %d %c\n", name, score, grade);
    }

    fclose(in);
    fclose(out);

    printf("Үр дүнг result.txt файлд бичлээ.\n");
    return 0;
}