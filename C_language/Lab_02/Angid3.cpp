#include <stdio.h>
#include <math.h>
int main(){
    int a;
    printf("1r too oruulna uu: ");
    scanf("%d", &a);
    int b;
    printf("2r too oruulna uu: ");
    scanf("%d", &b);
    int c;
    printf("3r too oruulna uu: ");
    scanf("%d", &c);
    int d = (a>b && a>c)*a+(b>a && b>c)*b+(c>a && c>b)*c;
    printf("ih too: %d\n", d);
    int e = (a<b && a<c)*a+(b<a && b<c)*b+(c<a && c<b)*c;
    printf("baga too: %d\n ", e);
    int f = (b<a && a<c || c<a && a<b)*a+(a<b && b<c || c<b && b<a)*b+(a<c && c<b || b<c && c<a)*c;
    printf("dund: %d\n", f);
    return 0;
}