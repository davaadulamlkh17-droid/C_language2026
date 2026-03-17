#include <stdio.h>
int main(){
    int a;
    printf("too oruulna uu: ");
    scanf("%d", &a);
    if (a%2==0){
        printf("ene too tegsh too\n");
        if (a/10 && a/4){
            printf("ene too 10,4-t huvaagdana.");
        }else{
            printf("ene too 10,4-t huvaagdahgui.");
        }
    } else{
        printf("ene too sondgoi too\n");
        if (a/3 && a/7){
            printf("ene too 3,7-t huvaagdana.");
        } else{
            printf("ene too 3,7-t huvaagdahgui.");
        }
    }
    return 0;
}