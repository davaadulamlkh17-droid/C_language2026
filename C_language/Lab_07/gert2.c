#include <stdio.h>
#include <string.h>
#include <ctype.h>
int count_vowels(const char *word) {
    int count = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}
int main() {
    char sentence[200];
    printf("Өгүүлбэр оруулна уу: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0;  
    char *word = strtok(sentence, " ");
    char max_vowel_word[100] = "";
    int max_vowel_count = 0;
    while (word != NULL) {
        int vowels = count_vowels(word);
        if (vowels > max_vowel_count) {
            max_vowel_count = vowels;
            strcpy(max_vowel_word, word);
        }
        word = strtok(NULL, " ");
    }
    printf("Хамгийн олон эгшигтэй үг: %s (%d эгшиг)\n", max_vowel_word,
         max_vowel_count);
    return 0;
}