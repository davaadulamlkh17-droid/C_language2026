#include <stdio.h>
long countWays(int n) {
    if (n == 0) return 1;
    if (n == 1) return 1;
    long long a = 1, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main() {
    int n;
    printf("n утга оруулна уу: ");
    scanf("%d", &n);

    printf("Дүүргэх аргын тоо: %ld\n", countWays(n));
    return 0;
}