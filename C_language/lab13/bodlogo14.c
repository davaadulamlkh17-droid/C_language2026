#include <stdio.h>

int main() {
    int n;
    printf("Heden too oruulah ve:\n");
    scanf("%d", &n);
    int a[n];
    printf("Toonuudaa oruulna uu: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int inv = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                inv++;
            }
        }
    }

    if (inv < n) {
        printf("Insertion Sort\n");
    }
    else if (inv < n * n / 4) {
        printf("Bubble Sort\n");
    }
    else {
        printf("Selection Sort\n");
    }
    return 0;
}