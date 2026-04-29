#include <stdio.h>
#include <math.h>
struct Triangle {
    int a, b, c;
};
double findArea(struct Triangle tra1){
    double perimeter1 = (tra1.a + tra1.b + tra1.c) / 2.0;
    double area1 = sqrt(perimeter1 * (perimeter1 - tra1.a) * (perimeter1 - tra1.b) * (perimeter1 - tra1.c));
}
int main(){
    struct Triangle tra1;
    printf("Гурвалжны уртуудыг оруулна уу: ");
    scanf("%d %d %d", &tra1.a, &tra1.b , &tra1.c);
    printf("1-р гурвалжны талбай: %.2f\n", findArea(tra1));
    return 0;
}