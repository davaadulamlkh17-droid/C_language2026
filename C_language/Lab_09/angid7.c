#include <stdio.h>
int main(){
    int j,i,n;
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
    for ( j = 0; j < n; j++)
    {
        int s = a[0][j];
    a[0][j] = a[n-1][j];
    a[n-1][j]= s;
    }
    printf("shine massive: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
    }
}
