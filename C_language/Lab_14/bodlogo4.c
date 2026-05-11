#include <stdio.h>
#include <stdarg.h>
void printStrings(int n, ...){
    va_list args;
    va_start(args, n);
    char *str;
    for (int i = 0; i < n; i++)
    {
       str = va_arg(args, char*); 
       printf("%s\n", str);
    }
    va_end(args);
}
int main(){
    printStrings(3,"C","Pointer","Function");
    return 0;
}