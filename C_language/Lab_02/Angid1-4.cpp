#include <stdio.h>
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
    int d = (a==b || b==c || a==c);
    printf("Tegsh untsugt gurvaljin: %d\n", d);
    int e = (a==b && b==c);
    printf ("Zuv gurvaljin: %d\n", e);
    int f = (a!=b && a!=c && b!=c);
    printf("Eldev talt gurvaljin: %d\n", f);
}