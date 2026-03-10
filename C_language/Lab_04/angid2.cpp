#include <stdio.h>
#define sz 101
int main(){
    int a[sz];
    int n;
    int i;
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
        scanf("%d", &a[i]);
    for ( i = 1; i <=n; i++)
        printf("%d ", a[n-i+1]);
    printf("\n");
    return 0;
}