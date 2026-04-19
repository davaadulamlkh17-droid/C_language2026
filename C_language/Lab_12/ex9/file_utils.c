#include <stdio.h>
#include "file_utils.h"

void save_books(const char *filename, Book arr[], int n) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("File aldaa!\n");
        return;
    }

    for(int i = 0; i < n; i++) {
        fprintf(fp, "%d|%s|%s|%d\n",
                arr[i].id,
                arr[i].title,
                arr[i].author,
                arr[i].year);
    }

    fclose(fp);
}

int load_books(const char *filename, Book arr[]) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("File oldsongui!\n");
        return 0;
    }

    int n = 0;

    while (fscanf(fp, "%d|%99[^|]|%49[^|]|%d\n",
           &arr[n].id,
           arr[n].title,
           arr[n].author,
           &arr[n].year) == 4) {
        n++;
    }

    fclose(fp);
    return n;
}