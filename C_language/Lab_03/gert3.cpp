#include <stdio.h>
long long f(int n){
    if(n <= 0)
        return 0;

    return 1LL * n * (n + 1) * (2 * n + 1) / 6;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%lld\n", f(n));
    return 0;
}