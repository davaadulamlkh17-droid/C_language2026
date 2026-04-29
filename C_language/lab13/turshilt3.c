#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 1000

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
        }
        if(!swapped) break;
    }
}

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void copyArray(int a[], int b[], int n) {
    for(int i = 0; i < n; i++)
        b[i] = a[i];
}

int main() {
    int sorted[N], reverse[N], random[N];
    int temp[N];

    srand(time(NULL)); 
    for(int i = 0; i < N; i++)
        sorted[i] = i;

    for(int i = 0; i < N; i++)
        reverse[i] = N - i - 1;

    for(int i = 0; i < N; i++)
        random[i] = rand() % 1000;

    clock_t start, end;
    double time_taken;

    printf("Bubble Sort\n");

    copyArray(sorted, temp, N);
    start = clock();
    bubbleSort(temp, N);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Sorted: %f sec\n", time_taken);

    copyArray(reverse, temp, N);
    start = clock();
    bubbleSort(temp, N);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Reverse: %f sec\n", time_taken);

    copyArray(random, temp, N);
    start = clock();
    bubbleSort(temp, N);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Random: %f sec\n", time_taken);

    printf("\nInsertion Sort\n");

    copyArray(sorted, temp, N);
    start = clock();
    insertionSort(temp, N);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Sorted: %f sec\n", time_taken);

    copyArray(reverse, temp, N);
    start = clock();
    insertionSort(temp, N);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Reverse: %f sec\n", time_taken);

    copyArray(random, temp, N);
    start = clock();
    insertionSort(temp, N);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Random: %f sec\n", time_taken);

    return 0;
}