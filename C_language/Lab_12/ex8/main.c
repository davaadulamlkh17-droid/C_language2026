#include <stdio.h>
#include "file_utils.h"

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    char filename[] = "numbers.txt";

    // файлд бичих
    write_numbers(filename, arr, n);

    // файлаас унших
    read_numbers(filename);

    return 0;
}