#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int max=atoi(argv[1]);
    int min=atoi(argv[1]);
    for (int i = 2; i < argc; i++){
        if (atoi(argv[i])<min){
            min=atoi(argv[i]);
        }
        if (atoi(argv[i])>max){
            max=atoi(argv[i]);
        }
    }
    printf("Max: %d\n", max);
    printf("Min: %d", min);
    return 0;
}