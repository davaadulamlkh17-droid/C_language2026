#include <stdio.h>
int main() {
    long long a;
    int sum = 0;
    printf("N too oruulna uu: ");
    scanf("%lld", &a);
    while(a!= 0) {
        sum += a % 10;
        a /= 10;
    }
    printf("Tsifruudiin niilber: %d\n", sum);
    return 0;
}
