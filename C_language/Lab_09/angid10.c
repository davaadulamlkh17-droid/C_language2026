#include <stdio.h>
int main(){
    int n;
    printf("heden too oruulah ve: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("shine massive: ");
    for (int i = 0; i < n; i++)
    {
        if (a[i]!=0)
        {
            printf("%d ", a[i]);
        }
    }
}