#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[], int n, int x) {
    int steps = 0;
    for (int i = 0; i < n; i++) {
        steps++;
        if (arr[i] == x)
            return steps;
    }
    return steps;
}

int binarySearch(int arr[], int n, int x) {
    int l = 0, r = n - 1;
    int steps = 0;
    while (l <= r) {
        steps++;
        int m = (l + r) / 2;
        if (arr[m] == x)
            return steps;
        else if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return steps;
}

void test(char *name, int arr[], int n, int x) {
    printf("\n=== %s ===\n", name);
    printf("Linear steps: %d\n", linearSearch(arr, n, x));
    printf("Binary steps: %d\n", binarySearch(arr, n, x));
}

int main() {
    int n = 10;
    int x = 7;
    int sorted[10]   = {1,2,3,4,5,6,7,8,9,10};
    int reverse[10]  = {10,9,8,7,6,5,4,3,2,1};
    int random[10]   = {4,1,9,2,7,3,8,6,5,10};
    test("Sorted array", sorted, n, x);
    test("Reverse array", reverse, n, x);
    test("Random array", random, n, x);
    return 0;
}