#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int n = argc-1;
    int arr[50];
    for (int i = 0; i < n; i++){
        arr[i]=atoi(argv[i+1]);
    }
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Erembelegdsen too: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}