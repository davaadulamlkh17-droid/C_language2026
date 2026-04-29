#include <stdio.h>
int main() {
    int n, a[100][100];
    printf("Hemjee n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        printf("Mur %d: ", i+1);
        for (int j = 0; j < n; j++) {
            if (a[i][j] % 2 == 0) {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}