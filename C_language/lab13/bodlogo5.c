#include <stdio.h>

int insertionSort(int arr[], int n);

int main() {
    int n;
    printf("Heden too oruulah ve: ");
    scanf("%d", &n);
    int arr[n];
    printf("Toonuudaa oruulna uu:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int inversions = insertionSort(arr, n);
    printf("Sorted array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nInversion too: %d\n", inversions);
    return 0;
}

int insertionSort(int arr[], int n) {
    int count = 0;
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
            count++;  
        }
        arr[j+1] = key;
    }
    return count;
}