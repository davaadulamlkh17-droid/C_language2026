#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
    for (int i = 1; i < argc; i++){
        for (int j = i+1; i < argc; j++){
            if (strcmp(argv[i], argv[j])==0){
                printf("Davtagdsan ug: %s\n", argv[i]);
                return 0;
            }
        }
    }
    printf("Davtagdsan ug baihgui\n");
    return 0;
}