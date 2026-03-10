#include <stdio.h>
#define MAX 1000
int A[MAX];   
int prime(int n){
    if(n < 2)
        return 0;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int find_primes(int a, int b){
    int count = 0;

    for(int i = a; i <= b; i++){
        if(prime(i)){
            A[count] = i;
            count++;
        }
    }
    return count;
}
int main(){
    int a, b;
    printf("a, b утгуудыг оруулна уу: ");
    scanf("%d%d", &a, &b);
    int n = find_primes(a, b);
    printf("Олдсон анхны тоонууд:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("\nНийт анхны тоо: %d\n", n);
    return 0;
}