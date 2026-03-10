#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, alpha;
    printf("Гурвалжны талуудыг болон өнцөгийг (радианаар) оруулна уу: ");
    scanf("%lf %lf %lf", &a, &b, &alpha);
    double c = sqrt(b*b + a*a - 2*a*b*cos(alpha));
    printf("Гурвалжны нөгөө тал: %.2lf\n", c);
    return 0;
}