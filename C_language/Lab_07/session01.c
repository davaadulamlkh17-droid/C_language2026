// #include <stdio.h>
// int main(){
//     char name[20];
//     printf("Нэрээ оруулна уу: ");
//     scanf("%s", name);
//     printf("%d\n",name[1]);
//     printf("Таны нэр: %s.", name);
//     return 0;
// }

// #include <stdio.h>
// void userFunc(char str[]);
// int main(){
//     char str[50];
//     printf("Enter string: ");
//     fgets(str, sizeof(str),stdin);
//     userFunc(str);
//     return 0;
// }
// void userFunc(char str[])
// {
//     printf("String Output: ");puts(str);
// }

// #include <stdio.h>
// int main(void){
//    char name[] = "uujim buural";
//    printf("%c", *name);
//    printf("%c", *(name+1));
//    printf("%c", *(name+7));
//    char *namePtr;
//    namePtr = name;
//    printf("%c", *namePtr);
//    printf("%c", *(name+1));
//    printf("%c", *(name+7));
// }

// #include <string.h>
// #include <stdio.h>
// char str1[27];
// char str2[2];
// int main(){
//     str2[1]='\0';
//     for (int i = 97; i < 123; i++)
//     {
//         str2[0] = i;
//         strcat(str1, str2);
//     }
//     printf("%s\n",str1);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//    char str1[]="abcd", str2[]="abCd", str3[]="abcd";
//    int result;
//    result = strcmp(str1, str2);
//    printf("strcmp(str1,str2)=%d\n", result);
//    result = strcmp(str1,str3);
//    printf("strcmp(str1,str3)=%d\n", result);
//    return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//    char str[]="Hello everyone";
//    char* ch = strchr(str,'o');
//    puts(ch);
//    ch = strrchr(str, 'o');
//    puts(ch);
//    return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//    char str[]="Hello everyone";
//    char str2[] = "ev";
//    char* ch = strstr(str, str2);
//    puts(ch);
//    return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//    char str[]="Hello everyone";
//    char str2[] = "zr";
//    char* ch = strpbrk(str, str2);
//    puts(ch);
//    return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//    char str[]="Hello everyone";
//    char str2[] = "lg";
//    int a = strcspn(str, str2);
//    printf("%d",a);
//    return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//    char str[]="Hello everyone";
//    char str2[] = "Hell";
//    int a = strspn(str, str2);
//    printf("%d",a);
//    return 0;
// }

#include <stdio.h>
#include <string.h>
int main(){
    char str[]="Hello everyone";
    char str2[] = "l";
    char *c1=str;
    char* ch=strtok(c1, str2);
    printf("%s",ch);
    return 0;
}
