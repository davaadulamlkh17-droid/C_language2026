#include <stdio.h>
int main() {
    int n;
    printf("Too oruulna uu: ");
    scanf("%d", &n);
    int a[20], i = 0;
    while (n > 0) {
        a[i++] = n % 10;
        n /= 10;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d ", a[j]);
    }
    return 0;
}