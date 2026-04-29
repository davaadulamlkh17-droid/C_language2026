#include <stdio.h>

void bubbleSort(int arr[], int n);

int main() {
    int n;
    printf("Heden too oruulah ve: ");
    scanf("%d", &n);
    int arr[n];
    printf("Toonuudaa oruulna uu:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int swapped = 0; 
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0) {
            break;
        }
    }
}