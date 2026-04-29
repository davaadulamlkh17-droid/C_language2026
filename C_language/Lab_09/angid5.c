#include <stdio.h>
int main(){
    int i,j;
    int a[sizeof(2)][sizeof(2)];
    printf("too oruulna uu: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           printf("%d ", a[i][j]);
        }
    }
}