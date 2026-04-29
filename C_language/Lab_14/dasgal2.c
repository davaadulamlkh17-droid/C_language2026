#include <stdio.h>
int main(){
    int a[5];
    int *p[5];
    printf("Toonuud oruulna uu: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        p[i]=&a[i];
    }
    printf("oruulsan utga: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *p[i]);
    }
    int max = *p[0];
    int *max_n = p[0];
    for (int i = 1; i < 5; i++)
    {
        if (*p[i]>max){
            max = *p[i];
            max_n = p[i];
        }  
    }
    printf("\nHamgiin ih utga: %d", max);
    printf("\nHamgiin ih utgiin hayag: %p", max_n);
    return 0;
}