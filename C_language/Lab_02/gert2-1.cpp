#include <stdio.h>
int main() {
    int n;
    printf("N too oruulna uu: ");
    scanf("%d", &n);
    printf("%d toonii huvaagchid:\n", n);
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
