#include <stdio.h>
int power(int a, int b); 
int main() {
    int n, a;
    scanf("%d%d", &n, &a);
    printf("%d\n", power(n, a));
    scanf("%d%d", &a, &n);
    printf("%d\n", power(a, n));
    return 0;
}
int power(int a, int b) {
    int t = 1;
    for (int i = 1; i <= b; i++)
        t *= a;
    return t;
}