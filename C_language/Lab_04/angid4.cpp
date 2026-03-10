#include <stdio.h>
#define sz 101
int main(){
    int a[sz];
    int n;
    int i,x;
    scanf("%d",&n);
    for ( i = 1; i<=n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    int b=0;
    for ( i = 1; i <=n; i++)
    {
        if (x==a[i]){
        printf("%d ",i);
        b=1;
    }    
    }
    if (b==0)
    {
        printf("-1");
    }
    return 0;
}
