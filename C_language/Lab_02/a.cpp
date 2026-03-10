# include <stdio.h>
int main(){
    int a, b;
    printf("a тоог оруулна уу: ");
    scanf("%d", &a);
    printf("b тоог оруулна уу: ");
    scanf("%d", &b);
    int c = (a > b)*a + (a<=b)*b;
    printf("%d", c);
    return 0;
}