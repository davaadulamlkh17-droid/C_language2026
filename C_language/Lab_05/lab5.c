// #include <stdio.h>
// #define sz 101
// void find(int a[], int n, int *addr, int *addr1){
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i]%2==0)
//         {
//             (*addr)++;
//         }else{
//             (*addr1)++;
//         }
//     }
// }
// int main(){
//     int i, n;
//     int a[101];
//     scanf("%d", &n);
//     for ( i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int x_t=0;
//     int x_o=0;
//     find(a, n, &x_t, &x_o);
//     printf("Tegsh too %d, Sondgoi too %d\n", x_t, x_o);
//     return 0;
// }

// #include <stdio.h>
// #define sz 101
// void swap(int *a, int *b){
//     int c = *a;
//     *a = *b;
//     *b = c;
// }
// int main(){
//     int a, b;
//     printf("2 too oruulna uu: ");
//     scanf("%d %d", &a, &b);
//     swap(&a, &b);
//     printf("Soligdson too: %d %d", a, b);
// }

#include <stdio.h>
#define sz 101
void find(int a[], int n, int *addr, int *addr1){
    int i,j,t,k;
    int m=0;
    for(i=0;i<n;i++){
        k=0;
        for(j=0;j<i;j++){
            if(a[i]==a[j]){
                k=1;
            }
        }
        if(k==0){
            int count=0;
            for(t=0;t<n;t++){
                if(a[i]==a[t]){
                    count++;
                }
            }
            if(m<count){
                m=count;
                *addr=a[i];
                *addr1=count;
            }
        }
    }
}
int main(){
    int a[101], n, i;
    scanf("%d", &n);
    for ( i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int x_t=0;
    int x_s=0;
    find (a, n ,&x_t,&x_s);
    printf("Too: %d, davtamj: %d", x_t, x_s);
    return 0;
}

// #include <stdio.h>
// void find(int a[][100], int n, int m, int *min, int *max)
// {
//     int i, j;
//     *min = a[0][0];
//     *max = a[0][0];
//     for(i = 0; i < n; i++)
//     {
//         for(j = 0; j < m; j++)
//         {
//             if(a[i][j] < *min){
//                 *min = a[i][j];
//             }
//             if(a[i][j] > *max){
//                 *max = a[i][j];
//             }
//         }
//     }
// }
// int main()
// {
//     int a[100][100];
//     int n, m;
//     int min, max;
//     int i, j;
//     printf("n m: ");
//     scanf("%d %d", &n, &m);
//     printf("Elements:\n");
//     for(i = 0; i < n; i++){
//         for(j = 0; j < m; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }
//     find(a, n, m, &min, &max);
//     printf("Min = %d\n", min);
//     printf("Max = %d\n", max);
//     return 0;
// }

// #include <stdio.h>
// int *search(int a[], int value, int size)
// {
//     int i;
//     for(i = 0; i < size; i++)
//     {
//         if(a[i] == value){
//             return &a[i];
//         }
//     }
//     return NULL;
// }
// int main()
// {
//     int a[100];
//     int n, value;
//     int i;
//     int *p;
//     printf("n: ");
//     scanf("%d", &n);
//     printf("Elements:\n");
//     for(i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }
//     printf("Search value: ");
//     scanf("%d", &value);
//     p = search(a, value, n);
//     if(p != NULL){
//         printf("Found: %d\n", *p);
//     }else{
//         printf("Not found\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// void print(int *begin, int *end)
// {
//     while(begin < end)
//     {
//         printf("%d ", *begin);
//         begin++;
//     }
//     printf("\n");
// }

// int main()
// {
//     int a[100] = {10, 2, 3, 7, 11, 3};
//     print(a, a + 6);
//     return 0;
// }