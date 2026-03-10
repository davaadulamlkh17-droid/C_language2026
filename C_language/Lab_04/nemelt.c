#include<stdio.h>
#define sz 101
int main (){
int a[sz], b[sz];
        int n, m, i, j;
        scanf("%d", &n);
        for(i = 1; i <= n; i++){
            scanf("%d", &a[i]);
        }
        scanf("%d", &m);
        for(i = 1; i <= m; i++){
              scanf("%d", &b[i]);
        }
        int s = 0;
        for(i = 1; i <= n; i ++){
            for(j = 1; j <= m; j ++){
                if(a[i] == b[j]){
                    printf("a %d element b baina\n", a[i]);
                    s = 1;
                    break;
                }
            }
        }
        if(s == 0){
            printf("oldsongui");
        }
    }