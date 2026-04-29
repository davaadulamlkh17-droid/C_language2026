#include <stdio.h>
#include <stdarg.h>
int sum(int n, ...){
    va_list args;
    va_start(args, n);
     int max_val = va_arg(args, int); 

    for (int i = 1; i < n; i++) {
        int x = va_arg(args, int);
        if (x > max_val) {
            max_val = x;
        }
    }
    va_end(args);
    return max_val;
}
int main(){
   printf("%d\n", sum(3, 10, 20, 30));
   printf("%d\n", sum(5,1 ,2, 3, 4,5));
   return 0;
}