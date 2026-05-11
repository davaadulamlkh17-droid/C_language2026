#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    char *mode = argv[1];
    if (strcmp(mode, "sum") == 0) {
        int sum = 0;
        for (int i = 2; i < argc; i++) {
            sum += atoi(argv[i]);
        }
        printf("%d\n", sum);
    }
    else if (strcmp(mode, "max") == 0) {
        int max = atoi(argv[2]);
        for (int i = 3; i < argc; i++) {
            int val = atoi(argv[i]);
            if (val > max) {
                max = val;
            }
        }
        printf("%d\n", max);
    }
    else if (strcmp(mode, "min") == 0) {
        int min = atoi(argv[2]);
        for (int i = 3; i < argc; i++) {
            int val = atoi(argv[i]);
            if (val < min) {
                min = val;
            }
        }
        printf("%d\n", min);
    }
    else {
        printf("Ul medegdeh mode: %s\n", mode);
    }
    return 0;
}