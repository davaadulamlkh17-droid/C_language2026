#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int asc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int desc(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}
void bubbleSortAsc(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void bubbleSortDesc(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n = 5000; 
    int *arr1 = malloc(n * sizeof(int));
    int *arr2 = malloc(n * sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr1[i] = rand() % 100000;
        arr2[i] = arr1[i]; 
    }
    clock_t start, end;
    start = clock();
    qsort(arr1, n, sizeof(int), asc);
    end = clock();
    double qsort_time = (double)(end - start) / CLOCKS_PER_SEC;
    start = clock();
    bubbleSortAsc(arr2, n);
    end = clock();
    double bubble_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("qsort time: %.5f sec\n", qsort_time);
    printf("bubble sort time: %.5f sec\n", bubble_time);
    free(arr1);
    free(arr2);
    return 0;
}