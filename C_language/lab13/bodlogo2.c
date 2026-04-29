#include <stdio.h>

void insertionSort(int arr[], int n, int *shift);
void printArray(int arr[], int n);

int main(){
    int n;
    int shift = 0;
    printf("Heden too oruulah ve: ");
    scanf("%d", &n);
    int arr[n];
    printf("Toonuudaa oruulna uu: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, n, &shift);
    printf("Etssiin array:\n");
    printArray(arr, n);
    printf("Insertion sort niit shift: %d\n", shift);
    return 0;
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int n, int *shift){
    for (int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
            (*shift)++;  
            printArray(arr, n);
        }
        arr[j + 1] = key;
        printArray(arr, n);
    }
}