#include <stdio.h>
#define sz 101
int main(){
    int a[sz];
    int n;
    int i,x;
    int usuh=1, buurah=1;
    scanf("%d",&n);
    for ( i = 1; i<n; i++){
        scanf("%d", &a[i]);
        if (a[i]<a[i+1]){
            usuh=0;
        }else if(a[i]>a[i+1]){
            buurah=0;
        }
    }
    if (buurah==1){
        printf("buurah erembe bna");
    } else if (usuh==1){
        printf("usuh erembe");
    }
    else{
        printf("erembelegdeegui");
    }
}
