#include <stdio.h>
int main(){
    int n;
    printf("On oruulna uu: ");
    scanf("%d", &n);
    if(n/400==0){
        printf("Undur jil");
    }else if (n/4==0||!((n/100)==0))
    {
        printf("Undur jil");
    }else{
        printf("Undur jil bish");
    }
    return 0;
}