#include <stdio.h>
int main(){
    printf("1-r toog oruulna uu: ");
    int a;
    scanf("%d", &a);
    printf("2-r toog oruulna uu: ");
    int b;
    scanf("%d", &b);
    printf("a+b=%d\n", a+b);
    printf("a-b=%d\n", a-b);
    printf("a*b=%d\n", a*b);
    if(b!=0){
        printf("a/b=%.2f\n", (float)a/b);
    }
    else{
        printf("0-d huvaagdah bolomjgui\n");
    }
    return 0;
}