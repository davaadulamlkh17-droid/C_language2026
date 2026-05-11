#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
    char *str = argv[1];
    int length = strlen(str);
    int isPalindrome = 1;
    for (int i = 0; i < length/2; i++){
        if (str[i]!=str[length-i-1]){
            isPalindrome=0;
            break;
        }
    }
    if (isPalindrome){
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }
    return 0;
}