#include "string_utils.h"
#include <ctype.h>
int str_length(char s[]) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}

int count_vowels(char s[]) {
    int count = 0;
    int i = 0;
    while (s[i] != '\0') {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
        i++;
    }
    return count;
}

void to_uppercase(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32; 
        }
        i++;
    }
}