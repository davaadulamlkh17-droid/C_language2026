#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i;

    printf("Ug oguulber oruul: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == ' ')
            printf("\n");
        else
            printf("%c", s[i]);
    }

    return 0;
}