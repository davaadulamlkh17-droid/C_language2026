#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
    char *longest = argv[1];
    int max = strlen(argv[1]);
    for (int i = 2; i < argc; i++)
    {
        int length = strlen(argv[i]);
        if (length > max)
        {
            max = length;
            longest = argv[i];
        }
    }
    printf("%s\n", longest);
    return 0;
}