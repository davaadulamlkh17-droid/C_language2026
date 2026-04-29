#include <stdio.h>
int main() {
    int n, a[100];
    printf("Heden too oruulah ve: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int max = a[0];
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            count = 1;
        } else if (a[i] == max) {
            count++;
        }
    }
    printf("Hamgiin ih too: %d\n", max);
    printf("Davtagdsan too: %d", count);
    return 0;
}