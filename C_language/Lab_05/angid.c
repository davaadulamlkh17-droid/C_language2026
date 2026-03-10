#include <stdio.h>
#define sz 101
void find(int a[], int n, int *addr, int *addr1){
    int i;
    for(i =0; i<n; i++)
        if(a[i]%2==0)
            (*addr)++;
        else
            (*addr1)++;
}
int main() {
    int i, n; 
    int a[101];
    scanf("%d", &n);
    for(i =0; i<n; i++){
         scanf("%d", &a[i]);
    }
    int x_t=0;
    int x_o=0;
    find(a,n, &x_t,&x_o);
    printf("sondgoi: %d tegsh: %d\n", x_t, x_o);
    return 0;
}


// void swap(int *a, int *b){
//     int t = *a;
//     *a = *b;
//     *b = t;
// }
// int main(){
//     int a, b; 
//     a = 10, b = 20;
//     swap(&a,&b);
//     printf("a = %d b = %d", a, b);
// }



// void find(int a[], int n, int *addr, int *addr1){
//     int maxCount = 0;
//     int frequent = a[0];
//     for(i =0; i<n; i++){
//         int count = 0;
//         for (int j = 0; j < n; j++){
//             if (a[i]==a[j]){
//                 count++;
//             }
//         } if (count > maxCount){
//             maxCount = count;
//             frequent = a[i];
//         }
//         *addr = frequent;
//         *addr1 = maxCount;
//     }
// }
// int main(){
//     int h;
//     int a[sz];
//     printf("heden too oruulah ve: ")
//     scanf("%d", &h);
//     for ( i = 0; i < h; i++)
//     {
//         printf("toonuudaa oruulna uu: ");
//         scanf("%d", a[i]);
//     }
//     find (i, n, *addr, *addr1);
//     printf("%d %d", addr, addr1);
// }


        








    