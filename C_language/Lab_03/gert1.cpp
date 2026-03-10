#include <stdio.h>
int is_palindrome(int n);
int main(){
    int x;
    printf("Тоо оруулна уу: ");
    scanf("%d", &x);
    printf("%d\n", is_palindrome(x));
    return 0;
}
int is_palindrome(int n){
    int original = n;
    int reversed = 0;
    if(n < 0)     
        return 0;
    while(n > 0){
        reversed = reversed * 10 + (n % 10);
        n = n / 10;
    }
    if(original == reversed)
        return 1;
    else
        return 0;
}