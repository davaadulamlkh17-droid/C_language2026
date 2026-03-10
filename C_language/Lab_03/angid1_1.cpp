#include <stdio.h>
#define SIZE 5
int max_array(int arr[], int size){
    int max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int A[SIZE] = {3, 7, 2, 9, 5};
    int B[SIZE] = {4, 1, 8, 6, 2};
    int maxA = max_array(A, SIZE);
    int maxB = max_array(B, SIZE);
    printf("A husnegtiin hamgiin ih elemetn : %d\n", maxA);
    printf("B  husnegtiin hamgiin ih elemetn : %d\n", maxB);
    if(maxA > maxB)
        printf("A husnegt hamgiin ih utga.\n");
    else if(maxB > maxA)
        printf("B husnegt hamgiin ih utga.\n");
    else
        printf("Hoyor husnegtiin hamgiin ih utga tentsuu.\n");
    return 0;
}