#include<stdio.h>
#define sz 101
int main ()
{
int a[sz][sz];
        int n, m, i, j;
        scanf("%d %d", &n, &m);
        for(i = 1; i <= n; i ++){
            for(j = 1; j <= m; j ++)
            scanf("%d", &a[i][j]);
        }
        int x;
        scanf("%d", &x);
        int c = 0;
        for(i = 1; i <= n; i ++){
            for(j = 1; j <= m; j ++)
                if(a[i][j] == x){
                    printf("%d mur %d bagana, ", i, j);
                    c = 1;
                }
        }
        if(c == 0)
            printf("-1 -1");
}