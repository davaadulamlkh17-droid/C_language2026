#include <stdio.h>
#include "array_utils.h"
int find_sum(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum=sum+arr[i];
    }
    return sum;
}
int find_max(int arr[], int n){
    int max = arr[0];
    for (int i = 0; i < n; i++){
        if (arr[0]<arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int find_min(int arr[], int n){
    int min = arr[0];
    for (int i = 0; i < n; i++){
        if (arr[0]>arr[i]){
            min=arr[i];
        }
    }
    return min;
}
double find_average(int arr[], int n){
    double average=find_sum(arr, n)/n;
    return average;
}
void print_array(int arr[], int n){
    printf("array");
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
}