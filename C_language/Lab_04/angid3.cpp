#include <stdio.h>
#define sz 101
int main(){
    int a[sz], b[sz], c[sz];
    int n, m;
    int i;
    scanf("%d %d",&m,&n);
    for ( i = 1; i<=m; i++)
        scanf("%d", &a[i]);
    for ( i = 1; i<=n; i++)
        scanf("%d", &b[i]);
    for ( i = 1; i<=m+n; i++)
        {if (i<=m)c[i]=a[i];
        else c[i]=b[i-m];}
    for ( i = 1; i <=m+n; i++)
        printf("%d ", c[i]);
    printf("\n");
    return 0;
}
