#include <stdio.h>
int main(){
    int n;
    printf("4 orontoi too oruulna uu: ");
    scanf("%d", &n);
    int n1 = n / 1000;       
    int n2 = (n / 100) % 10;  
    int n3 = (n / 10) % 10;  
    int n4 = n % 10;          
    printf("%s", (n1 + n2 == n3 + n4) ? "aziin too" : "aziin too bish");
    return 0;
}
