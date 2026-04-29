#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    printf("Эхний үг: ");
    scanf("%s", str1);
    printf("Дараагийн үг: ");
    scanf("%s", str2);
    if (strcmp(str1, str2)==0)
    {
        printf("Ижил үг байна.");
    } else {
        printf("Өөр үг байна.");
    }
    return 0;
}