#include <stdio.h>
int main() {
    long long a;
    int count[10] = {0};  
    printf("10 orontoi buhel too oruulna uu: ");
    scanf("%lld", &a);
    while(a != 0) {
        int digit = a % 10;
        count[digit]++;
        a /= 10;
    }
    int max = count[0];
    int maxDigit = 0;
    for(int i = 1; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            maxDigit = i;
        }
    }
    printf("Hamgiin olon orson tsifr: %d (%d udaa)\n", maxDigit, max);
    return 0;
}
