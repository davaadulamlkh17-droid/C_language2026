#include <stdio.h>
int main(){
    int n;
    printf("Hemjee: ");
    scanf("%d", &n);
    int a[sizeof(n)][sizeof(n)];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int total = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[0][j]==a[n-1][j])
        {
            printf("%d \n", a[0][j]);
            total=total+1;
        }
    } printf("Niit: %d", total);
    if (total==0)
    {
         printf ("tentsuu element baihgui");
    }
}