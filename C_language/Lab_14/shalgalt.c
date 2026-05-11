// #include <stdio.h>
// void swap(int * xp, int * yp){
//     int temp = *xp;
//     *xp=*yp;
//     *yp=temp;
// }
// void bubbleSort(int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n-i-1; j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 swap(&arr[j],&arr[j+1]);
//             }
//         }
//     }
// }
// void printArray(int arr[], int size){
//     int i;
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int arr[] = {22, 1 ,34};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     bubbleSort(arr, n);
//     printArray(arr, n);
//     return 0;
// }


void insertion(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int key=arr[i];
        for (int j = i-1; j >= 0; j--)
        {
            if (arr[j]>key)
            {
                arr[j+1]=arr[j];
            }else{
                break;
            }
            arr[j+1]=key;
        }
        
    }
    
}