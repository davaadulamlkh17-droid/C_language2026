#include <stdio.h>
#define SZ 101
int main() {
//     {
//     int A[SZ][SZ], B[SZ][SZ];
//     int C[SZ * SZ * 2];   
//     int n, m;
//     int i, j, k = 0;
//     int h;
//     scanf("%d %d", &n, &m);
//     for(i = 0; i < n; i++)
//         for(j = 0; j < m; j++)
//             scanf("%d", &A[i][j]);
//     for(i = 0; i < n; i++)
//         for(j = 0; j < m; j++)
//             scanf("%d", &B[i][j]);
//     for(i = 0; i < n; i++){
//         for(j = 0; j < m; j++){
//             h = 0;
//             for(int t = 0; t < k; t++){
//                 if(C[t] == A[i][j]){
//                     h = 1;
//                     break;
//                 }
//             }
//             if(!h){
//                 C[k++] = A[i][j];
//             }
//         }
//     }
//     for(i = 0; i < n; i++){
//         for(j = 0; j < m; j++){
//             h = 0;
//             for(int t = 0; t < k; t++){
//                 if(C[t] == B[i][j]){
//                     h = 1;
//                     break;
//                 }
//             }
//             if(!h){
//                 C[k++] = B[i][j];
//             }
//         }
//     }
//     for(i = 0; i < k; i++)
//         printf("%d ", C[i]);
//     return 0;
// }
    // {
    // int a[SZ][SZ];
    // int n, i, j;
    // scanf("%d", &n);
    // for(i = 0; i < n; i++)
    //     for(j = 0; j < n; j++)
    //         scanf("%d", &a[i][j]);
    // for(i = 0; i < n; i++){
    //     int rowSum = 0;
    //     for(j = 0; j < n; j++)
    //         rowSum += a[i][j];
    //     printf("%d mur sum = %d\n", i + 1, rowSum);
    // }
    // for(j = 0; j < n; j++){
    //     int colSum = 0;
    //     for(i = 0; i < n; i++)
    //         colSum += a[i][j];
    //     printf("%d bagana sum = %d\n", j + 1, colSum);
    // }
    // int leftDiag = 0;
    // for(i = 0; i < n; i++)
    //     leftDiag += a[i][i];
    // printf("Zuun diagonal sum = %d\n", leftDiag);
    // int rightDiag = 0;
    // for(i = 0; i < n; i++)
    //     rightDiag += a[i][n - 1 - i];
    // printf("Baruun diagonal sum = %d\n", rightDiag);
    // return 0;
    // }
//     {
//         int davhar, orts, ail;  
//     int a[SZ][SZ][SZ];
//     int i, j, k;
//     int num = 1;
//     scanf("%d %d %d", &davhar, &orts, &ail);
//     for(i = 0; i < orts; i++) {         
//         for(j = 0; j < davhar; j++) {      
//             for(k = 0; k < ail; k++) {  
//                 a[i][j][k] = num++;
//             }
//         }
//     }
//     for(i = 0; i < orts; i++) {
//         printf("%d-r orts:\n", i + 1);
//         for(j = 0; j < davhar; j++) {
//             printf("  %d-r davhar: ", j + 1);
//             for(k = 0; k < ail; k++) {
//                 printf("%d ", a[i][j][k]);
//             }
//             printf("\n");
//         }
//         printf("\n");
//     }
//     return 0;
// }
{
int n;
    scanf("%d", &n);
    int a[SZ][SZ];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i <= j)
                a[i][j] = n - (j - i);
            else
                a[i][j] = n - (i - j);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
    }
}