#include <stdio.h>
#include <stdlib.h>
void printBinary(int n){
    int bytes[32];
    int i = 0;
    if (n == 0){
        printf("0");
        return;
    }
    while(n>0){
        bytes[i]=n%2;
        n=n/2;
        i++;
    }
    for (int j = i-1; j >= 0; j--){
        printf("%d", bytes[j]);
    }
}
int main(int argc, char *argv[]){
    int num = atoi(argv[1]);
    printf("Binary: ");
    printBinary(num);
    printf("\n");
    printf("Octal: %o\n", num);
    printf("Hexadecimal: %X\n", num);
    return 0;
}