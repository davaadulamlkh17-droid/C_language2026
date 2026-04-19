#include <stdio.h>
#include "file_utils.h"
void write_numbers(const char *filename, int arr[], int n) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("File neehad aldaa!\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%d ", arr[i]);
    }
    fclose(fp);
}
void read_numbers(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("File oldsongui!\n");
        return;
    }
    int x;
    printf("File dotorh toonuud:\n");
    while (fscanf(fp, "%d", &x) != EOF) {
        printf("%d ", x);
    }
    printf("\n");
    fclose(fp);
}