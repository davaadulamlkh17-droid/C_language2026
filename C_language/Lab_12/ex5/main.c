#include <stdio.h>
#include "geometry.h"
int main(){
    int a, b, r;
    printf("tegsh untsugtiin taluudiig oruulna uu: ");
    scanf ("%d %d", &a, &b);
    printf("toirgiin radius oruulna uu: ");
    scanf("%d", &r);
    printf("tegsh untsugtiin talbai: %.2f\n", area_rectangle(a, b));
    printf("tegsh untsugtiin perimeter: %.2f\n", perimeter_rectangle(a, b));
    printf("toirgiin talbai: %.2f\n", area_circle(r));
    printf("toirgiin urt: %.2f", circumference(r));
}