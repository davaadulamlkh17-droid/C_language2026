#include <stdio.h>
void selectionSort(int arr[], int n, int *swap);
void printArray(int arr[], int n);
int main(){
    int n;
    int swap = 0;
    printf("Heden too oruulah ve: ");
    scanf("%d", &n);
    int arr[n];
    printf("Toonuudaa oruulna uu:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, n, &swap);
    printf("\nSorted array:\n");
    printArray(arr, n);
    printf("Niit swap: %d\n", swap);
    return 0;
}
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void selectionSort(int arr[], int n, int *swap){
    for (int i = 0; i < n - 1; i++){
        int min_idx = i;
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if (min_idx != i){
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
            (*swap)++;
            printArray(arr, n);
        }
    }
}