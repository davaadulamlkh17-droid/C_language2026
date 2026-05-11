#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int num1 = atoi(argv[1]);
    char operation = argv[2][0];
    int num2 = atoi(argv[3]);
    int result;
    switch (operation){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2==0)
            {
                printf("Error");
                return 1;
            }
            result = num1 / num2;
            break;
        default:
        printf("Invalid operator\n");
        return 1;
    }
    printf("%d\n", result);
    return 0;
}