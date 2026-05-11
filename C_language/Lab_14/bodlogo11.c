#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int sum=0;
    for (int i = 0; i < argc; i++){
        sum += atoi(argv[i]);
    }
    printf("Niilber: %d\n", sum);
    double average=sum/argc;
    printf("Dundaj: %.2f", average);
}