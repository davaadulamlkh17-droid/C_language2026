#include "number_utils.h"

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int factorial(int n) {
    int result = 1;
    for(int i = 1; i <= n; i++)
        result *= i;
    return result;
}