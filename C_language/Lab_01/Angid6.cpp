#include <stdio.h>
#include <math.h>
int main(){
    int a;
    printf("a toog oruulna uu: ");
    scanf("%d", &a);
    int b;
    printf("b toog oruulna uu: ");
    scanf("%d", &b);
    int c;
    printf("c toog oruulna uu: ");
    scanf("%d", &c);
    int d;
    printf("d toog oruulna uu: ");
    scanf("%d", &d);
    double result = sqrt((a+b)*(a+b)+d)/c;
    printf("Result: %.3lf\n", result);
    return 0;
}