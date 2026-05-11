#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int findIndex(int arr[], int n, int x) {
    int l = 0, r = n - 1;

    while (l <= r) {
        int m = (l + r) / 2;
        if (arr[m] == x) return m + 1; 
        else if (arr[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    qsort(b, n, sizeof(int), cmp);
    int m = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || b[i] != b[i - 1]) {
            b[m++] = b[i];
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", findIndex(b, m, a[i]));
    }
    return 0;
}