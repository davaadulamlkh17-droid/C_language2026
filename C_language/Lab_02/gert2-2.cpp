#include <stdio.h>
int main() {
    int a, b, temp;
    printf("a toog oruulna uu: ");
    scanf("%d", &a);
    printf("b toog oruulna uu: ");
    scanf("%d", &b);
    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("HIEH: %d\n", a);
    return 0;
}
