#include <stdio.h>
int main() {
    int n, a[100][100];
    printf("Hemjee (n): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Gol diagonal elementuud:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i][i]);
    }
    return 0;
}