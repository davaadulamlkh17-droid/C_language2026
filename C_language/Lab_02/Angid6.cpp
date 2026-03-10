#include <stdio.h>
int main(){
    int a, b, c;
    printf("1r too oruulna uu: ");
    scanf("%d", &a);
    printf("2r too oruulna uu: ");
    scanf("%d", &b);
    printf("3r too oruulna uu: ");
    scanf("%d", &c);
    if (a > b && a > c){
        printf("max too: %d\n", a);
    }
    else if (b > a && b > c){
        printf("max too: %d\n", b);
    }
    else{
        printf("max too: %d\n", c);
    }
    if (a < b && a < c){
        printf("min too: %d\n", a);
    }
    else if (b < a && b < c){
        printf("min too: %d\n", b);
    }
    else{
        printf("min too: %d\n", c);
    }
    if (a == b && b == c){
        printf("Buh toonuud tentsuu\n");
    }
    if (a > b && a < c || a < b && a > c){
        printf("dund too: %d\n", a);
    }
    else if (b > a && b < c || b < a && b > c){
        printf("dund too: %d\n", b);
    }
    else {
        printf("ddund too: %d\n", c);
    }
    return 0;
    
}