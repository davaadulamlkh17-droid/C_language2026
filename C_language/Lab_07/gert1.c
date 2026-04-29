#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int wordCount = 0;
    printf("Өгүүлбэр оруулна уу: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")]=0;
    char *word = strtok(str, " ");
    while (word != NULL){
        wordCount++;
        word = strtok(NULL, " ");
    }
    printf("Үгийн тоо: %d\n", wordCount);
    return 0;
}