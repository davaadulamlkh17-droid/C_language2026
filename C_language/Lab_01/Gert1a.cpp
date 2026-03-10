#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Gurvaljnii suuriig oruulna uu: ");
    scanf("%d", &a);
    int h;
    printf("Gurvaljnii unduriig oruulna uu: ");
    scanf("%d", &h);
    int area = (a * h) / 2;
    printf("Gurvaljnii talbai: %d", area);
    return 0;
}