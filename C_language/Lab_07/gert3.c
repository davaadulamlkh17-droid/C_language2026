#include <stdio.h>
#include <string.h>
int main() {
    char text[200], word[50];
    printf("Өгүүлбэрэ оруулна уу: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0;
    printf("Хайх үг: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = 0; 
    char *pos = strstr(text, word);
    if (pos != NULL) {
        int index = pos - text; 
        printf("Үг %d-р байрлалд олдлоо.\n", index);
    } else {
        printf("-1\n");
    }
    return 0;
}