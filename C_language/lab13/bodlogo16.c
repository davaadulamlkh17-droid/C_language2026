#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Heden too oruulah ve: \n");
    scanf("%d", &n);
    int a[n], target[n];
    printf("Toonuudaa oruulna uu: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &target[i]);
        a[i] = target[i];
    }
    int possible = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            int match = 1;
            for (int k = 0; k < n; k++) {
                if (a[k] != target[k]) {
                    match = 0;
                    break;
                }
            }
            if (match) {
                possible = 1;
                break;
            }
        }
        if (possible) break;
    }
    if (possible) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}