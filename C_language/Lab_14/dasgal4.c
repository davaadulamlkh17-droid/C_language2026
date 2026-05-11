#include <stdio.h>
#include <stdarg.h>
int max(int n, ...){
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
int sum(int n, ...){
    va_list args;
    va_start(args, n);
    int s=0;
    for (int i = 0; i < n; i++){
        s += va_arg(args, int);
    }
    va_end(args);
    return s;
}
int main(){
   printf("10, 20, 30\ntoonii niilber: %d\n", sum(3, 10, 20, 30));
   printf("1 ,2, 3, 4, 5\ntoonii niilber: %d\n", sum(5, 1 ,2, 3, 4, 5));
   printf("10, 20, 30\ntoonii max: %d\n", max(3, 10, 20, 30));
   printf("1 ,2, 3, 4, 5\ntoonii max: %d\n", max(5, 1 ,2, 3, 4, 5));
   return 0;
}