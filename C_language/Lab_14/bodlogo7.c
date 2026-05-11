#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    printf("Tegsh too: ");
    for (int i = 0; i < argc; i++){
        int num = atoi(argv[i]);
        if (num%2==0){
            printf("%d ", num);
        } 
    }
    printf("\nSondgoi too: ");
    for (int i = 0; i < argc; i++){
        int num = atoi(argv[i]);
        if (num%2!=0)
        {
            printf("%d ", num);
        }
    }
    return 0;
}