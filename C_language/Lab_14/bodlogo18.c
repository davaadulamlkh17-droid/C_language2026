#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int rows = atoi(argv[1]);
    int columns = atoi(argv[2]);
    if (argc < 3 + rows * columns) {
        printf("Dutuu baina\n");
        return 1;
    }
    int index = 3;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", atoi(argv[index]));
            index++;
        }
        printf("\n");
    }
    return 0;
}