#include <stdio.h>
#include "calculator.h"

int main(){
    int a, b;
    printf("2 too oruulna uu: ");
    scanf("%d %d", &a, &b);
    printf("Niilber: %d\n", add(a, b));
    printf("Yalgavar: %d\n", subtract(a, b));
    printf("Urjver: %d\n", multiply(a, b));
    printf("Noogdvor: %.2f\n", divide(a, b));
    return 0;
}