#include <stdio.h>
#include <math.h>
struct Triangle {
    int a, b, c;
};
double area(struct Triangle tra) {
    double perimeter = (tra.a + tra.b + tra.c) / 2.0;
    double area = sqrt(perimeter * (perimeter - tra.a) * (perimeter - tra.b) * (perimeter - tra.c));
    return area;
}
int main(){
    struct Triangle tra1, tra2;
    printf("Эхний гурвалжны уртуудыг оруулна уу: ");
    scanf("%d %d %d", &tra1.a, &tra1.b , &tra1.c);
    printf("Дараагийн гурвалжны уртуудыг оруулна уу: ");
    scanf("%d %d %d", &tra2.a, &tra2.b, &tra2.c);
    double s1 = area(tra1);
    double s2 = area(tra2);
    printf("1-р гурвалжны талбай: %.2f\n", s1);
    printf("2-р гурвалжны талбай: %.2f\n", s2);
    if(s1 > s2){
        printf("1-р гурвалжин том.\n");
    } else if(s2 > s1){
        printf("2-р гурвалжин том.\n");
    } else {
        printf("Хоёр гурвалжин тэнцүү.\n");
    }
    return 0;
}