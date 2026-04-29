#include <stdio.h>

int bubbleSort(int arr[], int n);
void printArray(int arr[], int n);

int main(){
    int n;
    printf("Heden too oruulah ve: ");
    scanf("%d", &n);
    int arr[n];
    printf("Toonuudaa oruulna uu: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int swaps = bubbleSort(arr, n);
    printf("Bubble sorted array: ");
    printArray(arr, n);
    printf("Swap hiisen too: %d\n", swaps);
    return 0;
}

int bubbleSort(int arr[], int n){
    int count = 0;
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count++;  
            }
        }
    }
    return count;
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}