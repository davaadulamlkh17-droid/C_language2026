# include <stdio.h>
int main(){
    int a;
    int i;
    int sum=0;
    printf("Too oruulna uu: ");
    scanf("%d", &a);
    for (i=1; i<=a; i++)
    {if (i%2==0)
        {
        sum=sum+i;
        }else{}
    }printf("Niilber: %d\n",sum);
    return 0;
}