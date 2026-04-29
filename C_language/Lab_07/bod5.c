#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100], sum[200];
    printf("Эхний үг: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")]=0;
    printf("Дараагийн үг: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")]=0;
    strcpy(sum, str1);
    strcat(sum, " ");
    strcat(sum, str2);
    printf("%s", sum);
}