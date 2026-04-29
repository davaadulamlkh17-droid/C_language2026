#include <stdio.h>
void printArray(int arr[], int n);
void bubbleSort(int arr[], int n);
void insertionSort(int arr[], int n);
void selectionSort(int arr[], int n);

int main(){
    int a[]={5,1,4,2,8};
    int n=5;
    int arr1[5], arr2[5], arr3[5];

    for(int i = 0; i < n; i++) {
        arr1[i] = a[i];
        arr2[i] = a[i];
        arr3[i] = a[i];
    }

    printf("\nBubble Sort\n");
    bubbleSort(arr1, n);

    printf("\nInsertion Sort\n");
    insertionSort(arr2, n);

    printf("\nSelection Sort\n");
    selectionSort(arr3, n);

    return 0;
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[],int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                printArray(arr, n);
            }       
        }
    }
}

void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++){
        int key = arr[i];
        int j = i-1;

        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
            printArray(arr, n);
        }
        arr[j+1]=key;
        printArray(arr, n);
    }
}

void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int min_idx = i;
        for (int j = i+1; j < n; j++){  
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
            printArray(arr, n); 
        }
    }
}