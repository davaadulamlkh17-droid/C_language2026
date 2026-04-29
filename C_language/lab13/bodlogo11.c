#include <stdio.h>

int main() {
    int n;
    printf("Heden too oruulah ve: ");
    scanf("%d", &n);
    int a[n];
    printf("Toonuudaa oruulna uu: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                count++;
            }
        }
    }
    printf("Hiisen niit alham: %d\n", count);
    return 0;
}