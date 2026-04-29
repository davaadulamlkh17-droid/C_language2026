#include <stdio.h>

int main() {
    int num;
    FILE *in, *out;

    in = fopen("numbers.txt", "r");
    out = fopen("odd.txt", "w");  

    while (fscanf(in, "%d", &num) == 1) {
        if (num % 2 != 0) {
            fprintf(out, "%d\n", num);
        }
    }

    fclose(in);
    fclose(out);
    
    return 0;
}