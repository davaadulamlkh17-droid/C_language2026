#include <stdio.h>
#include <time.h>
#define N 1000
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int swapped = 0;
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
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
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void copy(int a[], int b[], int n) {
    for(int i = 0; i < n; i++)
        b[i] = a[i];
}

int main() {
    int n;
    printf("Heden too oruulah ve: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Toonuudaa oruulna uu:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    copy(arr1, arr2, n);
    clock_t start, end;
    double time1, time2;
    start = clock();
    bubbleSort(arr1, n);
    end = clock();
    time1 = (double)(end - start) / CLOCKS_PER_SEC;
    start = clock();
    insertionSort(arr2, n);
    end = clock();
    time2 = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Bubble Sort time: %f sec\n", time1);
    printf("Insertion Sort time: %f sec\n", time2);
    if(time1 < time2)
        printf("Bubble Sort hurdan\n");
    else
        printf("Insertion Sort hurdan\n");
    return 0;
}