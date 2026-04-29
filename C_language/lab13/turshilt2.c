#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n);
void insertionSort(int arr[], int n);
void selectionSort(int arr[], int n);
void copyArray(int src[], int dest[], int n);
int main() {
    int sizes[] = {100, 1000, 5000};
    for(int s = 0; s < 3; s++) {
        int n = sizes[s];
        int *original = (int*)malloc(n * sizeof(int));
        int *a = (int*)malloc(n * sizeof(int));
        int *b = (int*)malloc(n * sizeof(int));
        int *c = (int*)malloc(n * sizeof(int));

        for(int i = 0; i < n; i++) {
            original[i] = rand() % 10000;
        }
        printf("\n===== n = %d =====\n", n);
        clock_t start, end;
        copyArray(original, a, n);
        start = clock();
        bubbleSort(a, n);
        end = clock();
        printf("Bubble Sort:   %.5f sec\n", (double)(end - start) / CLOCKS_PER_SEC);
        copyArray(original, b, n);
        start = clock();
        insertionSort(b, n);
        end = clock();
        printf("Insertion Sort: %.5f sec\n", (double)(end - start) / CLOCKS_PER_SEC);
        copyArray(original, c, n);
        start = clock();
        selectionSort(c, n);
        end = clock();
        printf("Selection Sort: %.5f sec\n", (double)(end - start) / CLOCKS_PER_SEC);
        free(original);
        free(a);
        free(b);
        free(c);
    }
    return 0;
}
void copyArray(int src[], int dest[], int n) {
    for(int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
}
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
void selectionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        if(min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}