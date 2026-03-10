#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("%dx^2 + %dx + %d\n", a, b, c);
    double D = b * b - 4 * a * c;
    if (D > 0){
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        printf("Two real roots: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (D == 0) { 
        double x = -b / (2.0 * a);
        printf("One real root: x = %.2f\n", x);
    } else{
        printf("No real roots.\n");
    }  
    return 0;
}