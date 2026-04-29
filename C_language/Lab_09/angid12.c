#include <stdio.h>
int main() {
    int n, m;
    printf("Toonuudiig oruulna uu: ");
    scanf("%d %d", &n, &m);
    int a[20], i = 0;
    int iluu = 0;
    while (n > 0 || m > 0 || iluu > 0) {
        int sum = (n % 10) + (m % 10) + iluu;
        a[i++] = sum % 10;
        iluu = sum / 10;
        n /= 10;
        m /= 10;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", a[j]);
    }
    return 0;
}