#include <stdio.h>
int main(){
    char ovog[20], ner[20], ongo[20], hobby[100], freetime[100];
    int on, sar, odor, nas;
    printf("Таны овог: ");
    scanf("%s", ovog);
    printf("Таны нэр: ");
    scanf("%s", ner);
    printf("Төрсөн он: ");
    scanf("%d", &on);
    printf("Төрсөн сар: ");
    scanf("%d", &sar);
    printf("Төрсөн өдөр: ");
    scanf("%d", &odor);
    getchar(); 
    printf("Таны дуртай өнгө: ");
    fgets(ongo, sizeof(ongo), stdin);
    printf("Таны хобби: ");
    fgets(hobby, sizeof(hobby), stdin);
    printf("Чөлөөт цагаараа юу хийдэг: ");
    fgets(freetime, sizeof(freetime), stdin);
    nas = 2026 - on;
    printf("\n %s овогтой %s нь %d оны %d сарын %d өдөр төрсөн. Одоо %d настай.\n",
        ovog, ner, on, sar, odor, nas);
    printf("Түүний дуртай өнгө: %s", ongo);
    printf("Тэр чөлөөт цагаараа: %s", freetime);
    printf("Түүний хобби: %s", hobby);
    return 0;
}