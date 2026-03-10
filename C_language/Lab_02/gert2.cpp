#include <stdio.h>
int main(){
    float a;
    printf("avsan onoogoo oruulna uu: ");
    scanf("%f",&a);
    int score = a/35*100;
    if (score>=90 && score<=100){
        printf("Үнэлгээ: А");
    }else if (score<90 && score>=80){
        printf("Үнэлгээ: B");
    }else if (score<80 && score>=70){
        printf("Үнэлгээ: C");
    }else if (score<70 && score>=60){
        printf("Үнэлгээ: D");
    }else {
        printf("Үнэлгээ: F");
    }
    return 0;    
}