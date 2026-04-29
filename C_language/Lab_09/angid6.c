#include <stdio.h>
int main(){
    int i,j,n;
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
    printf("Diogonalias doosh element: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           if (i>j){
                 printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");
}