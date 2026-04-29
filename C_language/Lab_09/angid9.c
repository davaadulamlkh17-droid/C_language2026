#include <stdio.h>
int main(){
    int a[101], n;
    printf("heden too oruulah ve: ");
    scanf("%d", &n);
    printf("Too oruulna uu: ");
    for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("0-eer tugssun elementuud: ");
    for (int i = 0; i < n; i++)
        {
        if (a[i]%10==0)
            {
        printf("%d ", a[i]);
            }  
        }
    return 0;
}