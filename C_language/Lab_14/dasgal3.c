#include <stdio.h>
#include <string.h>
int main(){
    char *names[]={
        "Bold",
        "Sarnai",
        "Temuulen",
        "Anu"
    };
    printf("Buh ner: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", names[i]);
    }
    int max = strlen(names[0]);
    char *longName = names[0];
    for (int i = 1; i < 4; i++)
    {
        if (strlen(names[i])> max)
        {
            max = strlen(names[i]);
            longName = names[i];
        }
    }
    printf("Urt ner: %s", longName);
    return 0;
}