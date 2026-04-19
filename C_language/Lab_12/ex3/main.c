#include <stdio.h>
#include "number_utils.h"
int main(){
    int n;
    printf("Too oruulna uu: ");
    scanf("%d", &n);
    printf("Tegsh too eseh: %d\n", is_even(n));
    printf("Anhnii too eseh: %d\n", is_prime(n));
    printf("Factorial: %d\n",factorial(n));
    printf("Digit sum: %d\n", digit_sum(n));
    return 0;
}