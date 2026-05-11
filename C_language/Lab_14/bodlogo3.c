#include <stdio.h>
#include <stdarg.h>
double average(int n, ...){
    va_list args;
    va_start(args, n);
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+va_arg(args, int);
    }
    va_end(args);
    return (double)sum/n;
}
int main(){
    printf("%.1f\n", average(5,4,3,45,12,3));
}