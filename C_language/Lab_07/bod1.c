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
	printf("Таны дуртай өнгө: ");
	char ch=getchar();
	fgets(ongo, sizeof(ongo), stdin);
	printf("Таны хобби: ");
	fgets(hobby, sizeof(hobby), stdin);
	printf("Чөлөөт цагаараа юу хийдэг: ");
	fgets(freetime, sizeof(freetime), stdin);
	nas=2026-on;
	printf(" %s овогтой %s нь %d оны %d сарын %d нд төрсөн.", ovog, ner, on, sar, odor);
    printf("Одоо %d настай.", nas);
	printf("Түүний дуртай өнгө бол %s .",ongo);
    printf("Тэр чөлөөт цагаараа %s .",freetime);
	printf("Түүүний хобби бол %s .",hobby);	
    return 0;
}