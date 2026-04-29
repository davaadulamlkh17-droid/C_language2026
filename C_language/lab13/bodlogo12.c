#include <stdio.h>

int main() {
    int n, k;
    printf("Heden too oruulah ve: \n");
    scanf("%d ", &n);
    printf("zuv bairlald oruulah elementee songono uu: \n");
    scanf("%d", &k);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < k; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    for (int i = 0; i < n; i++) {
        printf("k element zuv bairlald orson.\n %d ", a[i]);
    }
    return 0;
}