#include <stdio.h>
#include <math.h>
int main(){
    //Angd 1
    printf("Hello? C language\n");
    //Angid 2
    int y=2018, m=2, d=5;
    printf("Unuudur %d onii %d sariin %d-nii udur\n", y, m, d);
    //Angid 3
    int y1=2008, m1=1, d1=7;
    printf("Minii tursun udur: %d/%d/%d\n", y1, m1, d1);
    //Angid 4
    int y2, m2, d2;
    printf("On oruulna uu: ");
    scanf("%d", &y2);
    printf("Sar oruulna uu: ");
    scanf("%d", &m2);
    printf("Udur oruulna uu: ");
    scanf("%d", &d2);
    printf("On sar udur: %d/%d/%d\n", y2, m2, d2);
    //Angid 5
    printf("1-r too oruulna uu: ");
    int a;
    scanf("%d", &a);
    printf("2-r too oruulna uu: ");
    int b;
    scanf("%d", &b);
    printf("a+b=%d\n", a+b);
    printf("a-b=%d\n", a-b);
    printf("a*b=%d\n", a*b);
    if(b!=0){
        printf("a/b=%.2f\n", (float)a/b);
    }
    else{
        printf("Too 0-d huvaagdah bolomjgui\n");
    }
    //Angid 6
    int a1;
    printf("a toog oruulna uu: ");
    scanf("%d", &a1);
    int b1;
    printf("b toog oruulna uu: ");
    scanf("%d", &b1);
    int c1;
    printf("c toog oruulna uu: ");
    scanf("%d", &c1);
    int d3;
    printf("d toog oruulna uu: ");
    scanf("%d", &d3);
    double result = sqrt((a1+b1)*(a1+b1)+d3)/c1;
    printf("Result: %.3lf\n", result);
    //Geriin daalgavar 1a
    int r;
    printf("Gurvaljnii suuriig oruulna uu: ");
    scanf("%d", &r);
    int h;
    printf("Gurvaljnii undriig oruulna uu: ");
    scanf("%d", &h);
    int area = (r * h) / 2;
    printf("Gurvaljnii talbai: %d\n", area);
    //Geriin daalgavar 1b
    int t, n, o;
    printf("Tegshitgeliin koeffitsient oruulna uu: ");
    scanf("%d %d %d", &t, &n, &o);
    printf("%dx^2 + %dx + %d\n", t, n, o);
    double D = n * n - 4 * t * o;
    if (D > 0){
        double x1 = (-n + sqrt(D)) / (2 * t);
        double x2 = (-n - sqrt(D)) / (2 * t);
        printf("Hoyor shiidtei: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (D == 0) { 
        double x = -n / (2.0 * t);
        printf("Neg shiidtei: x = %.2f\n", x);
    } else{
        printf("Shiidgui.\n");
    }  
    //Geriin daalgavar 2a
    int x, i, z, w;
    printf("a, b, c, d toog oruulna uu: ");
    scanf("%d %d %d %d", &x, &i, &z, &w);
    if (z==0){
        printf("c ni 0 baij bolohgui");
        return 0;
    }
    double result1 = sqrt(x*x*x+i/z)*(x*x*x+i/z)+w;
    double result2 = result1*w / (w*w-x*i/z);
    printf("Tegshitgeliin hariu: %.3f\n", result2);
    //Geriin daalgavar 2b
    double j, g, alpha;
    printf("Gurvaljnii taluud bolon untsgiig (radianaar) oruulna uu: ");
    scanf("%lf %lf %lf", &j, &g, &alpha);
    double c = sqrt(g*g + j*j - 2*j*g*cos(alpha));
    printf("Gurvaljnii nuguu tal: %.2lf\n", c);
    return 0;
}