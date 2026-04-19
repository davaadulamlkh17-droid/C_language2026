#include <stdio.h>
#include "string_utils.h"
int main(){
    char s[101];
    printf("Ug oruulna uu: ");
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i] !='\0'; i++)
    {
        if (s[i]=='\n')
        {
            s[i]='\0';
            break;
        }
    }
    printf("Ugiin urt: %d\n", str_length(s));
    printf("Egshigiin too: %d\n", count_vowels(s));
    to_uppercase(s);
    printf("Tom useg: %s", s);
    return 0;
}