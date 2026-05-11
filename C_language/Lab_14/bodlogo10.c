#include <stdio.h>
#include <ctype.h>
int main(int argc, char *argv[]){
    printf("BUH TOM: ");
    for (int i = 1; i < argc; i++){
        for (int j = 0; argv[i][j] != '\0'; j++){
            printf("%c", toupper(argv[i][j]));
        }
        printf("\n");
    }
    printf("buh jijig: ");
    for (int i = 1; i < argc; i++){
        for (int j = 0; argv[i][j] != '\0' ; j++){
            printf("%c", tolower(argv[i][j]));
        }
        printf("\n");
    }
    return 0;
}