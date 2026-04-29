#include <stdio.h>
struct Rational
{
    int d, n;
};
typedef struct Rational Rational;
int gcd(int a, int b){
    if (b==0) return a;
    return gcd(b, a%b);
    }
Rational simplify (Rational a){
    int g = gcd(a.n, a.d);
    a.n/=g;
    a.d/=g;
    if (a.d<0)
    {
        a.n=-a.n;
        a.d= -a.d;
    }
    return a;
}
Rational add(Rational a, Rational b){
    Rational r;
    r.n=a.n*b.d +b.n*a.d;
    r.d=a.d*b.d;
    return simplify(r);
}
Rational sub(Rational a, Rational b){
    Rational r;
    r.n=a.n*b.d-b.n*a.d;
    r.d=a.d*b.d;
    return simplify(r);
}
Rational mult(Rational a, Rational b){
    Rational r;
    r.n= a.n*b.n;
    r.d=a.d*b.d;
    return simplify(r);
}
Rational div(Rational a, Rational b){
    Rational r;
    r.n= a.n*b.d;
    r.d= a.d*b.n;
    return simplify(r);
}
void print(Rational a){
    printf("%d/%d\n", a.n, a.d);
}
int main (){
    Rational a,b;
    printf("butarhai: ");
    scanf("%d %d", &a.n, &a.d);
    printf("butarhai: ");
    scanf("%d %d", &b.n, &b.d);
    printf("Niilber: ");
    print(add(a,b));
    printf("Ylgavar: ");
    print(sub(a,b));
    printf("Urjver: ");
    print(mult(a, b));
    printf("Huvaah: ");
    print(div(a,b));
    return 0;
}