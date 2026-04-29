#include <stdio.h>
#include <math.h>
typedef struct Point {
    int x, y;
}Point;
double distance(Point p1, Point p2){
    double distance=sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p2.y)*(p2.y-p2.y));
    return distance;
}
int main(){
    Point p1, p2;
    printf("Эхний цэгийг оруулна уу: (x1, y1) ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Дараагийн цэгийг оруулна уу: (x2, y2) ");
    scanf("%d %d", &p2.x, &p2.y);
    double d1 = distance(p1, p2);
    printf("Цэгийн хоорондох зай: %.2f\n", d1);
    return 0;
}