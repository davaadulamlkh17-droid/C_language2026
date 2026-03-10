#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c, d;
    printf("a, b, c, d too oruulna uu: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (c==0){
        printf("c ni 0 baij bolohgui");
        return 0;
    }
    double result1 = sqrt(a*a*a+b/c)*(a*a*a+b/c)+d;
    double result2 = result1*d / (d*d-a*b/c);
    printf("Tegshitgeliin hariu: %.3f ", result2);
    return 0;
}
