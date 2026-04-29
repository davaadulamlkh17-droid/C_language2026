#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    printf("Argumentiin too: %d\n", argc);
    int sum=0;
    // for (int i = 0; i < argc; i++)
    // {
    //     printf("arvg[%d]=%s\n",i,argv[i]);
    // }
    for (int i = 1; i < argc; i++)
    {
        sum += atoi(argv[i]);
    }
    printf("Sum: %d\n", sum);
    return 0;
}
