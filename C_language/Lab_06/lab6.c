// //bodlogo1 
// #include <stdio.h>
// int sum(int *a, int n){
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     return sum;
// }
// int main(){
//     int n, a[101];
//     printf("Heden too oruulah ve: ");
//     scanf("%d", &n);

//     printf("Toonuudaa oruulna uu: ");
//     for (int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }
//     printf("garalt: %d", sum(a,n));
// }   

//bodlogo 2
// #include <stdio.h>
// int *findMin(int *a, int n){
//     int *min = &a[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i]< *min)
//         {
//              min = &a[i];
//         }
//     }
//     return min;
// }
// int main(){
//     int n, a[101];
//     printf("Heden too oruulah ve: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int *min = findMin(a, n);
//     printf("Hamgiin baga: %d\n", *min);
//     printf("Index ni: %td", min - a);
//     return 0;
// }

//bodlogo 3
// #include <stdio.h>
// void reverse(int *a, int n);
// int main(){
//     int n, a[101];
//     printf("Heden too oruulah ve: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     reverse(a, n);
//     for(int i = 0; i < n; i++){
//         printf("%d ", a[i]);
//     }
//     return 0;
// }
// void reverse(int *a, int n){
//     int temp;
//     for(int i = 0; i < n/2; i++){
//         temp = a[i];
//         a[i] = a[n-1-i];
//         a[n-1-i] = temp;
//     }
// }

//bodlogo 4
// #include <stdio.h>
// void count(int *a, int n, int *even, int *odd){
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i]%2 ==0)
//         {
//             (*even)++;
//         } else 
//         {
//             (*odd)++;
//         }
//     }
// }
// int main(){
//     int n, a[101];
//     printf("Heden too oruulah ve: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int even = 0;
//     int odd = 0;
//     count(a, n, &even, &odd);
//     printf("sondgoi too: %d\n", odd);
//     printf("tegsh too: %d", even);
//     return 0;
// }

//bodlogo5
// #include <stdio.h>
// #include <stdlib.h>
// int ansx=0, ansy=0;
// int mindiff(int *a, int n){
//     int ret = 100001;
//     for (int i = 0; i < n-1 ; i++)
//     {
//        for (int j = i+1; j < n; j++)
//        {
//         if (ret>abs( a[i]-a[j]))
//         {
//             ret=abs(a[i]-a[j]);
//             ansx=a[i];
//             ansy=a[j];
//         }
//        }  
//     }
//     return ret;
// }
// int main(){
    // int n, a[101];
    // printf("Heden too oruulah ve: ");
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &a[i]);
    // }
//     int ans=mindiff(a,n);
//     printf("hamgiin baga zoruutei: %d %d\n zoruu: %d", ansy, ansx, ans);
//     return 0;
// }

//bodlogo6
// #include <stdio.h>
// double avg(int *a, int n){
//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         sum += *(a+i);
//     }
//     return (double)sum / n;
// }
// int main(){
//     int n, a[101];
//     printf("Heden too oruulah ve: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Average = %.2f", avg(a,n));
//     return 0;
// }

//bodlogo7
// #include <stdio.h>
// void print(int *a, int n){
//     for(int i = 0; i < n; i++){
//         printf("%d ", *(a+i));
//     }
// }
// int main(){
    // int n, a[101];
    // printf("Heden too oruulah ve: ");
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &a[i]);
    // }
//     print(a,n);
//     return 0;
// }

//bodlogo8
// #include <stdio.h>
// int indexMax(int *a, int n){
//     int max = *a;
//     int index = 0;
//     for(int i = 1; i < n; i++){
//         if(*(a+i) > max){
//             max = *(a+i);
//             index = i;
//         }
//     }
//     return index;
// }
// int main(){
//     int n, a[101];
//     printf("Heden too oruulah ve: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("hamgiin ih index = %d", indexMax(a,n));
//     return 0;
// }

//bodlogo9
// #include <stdio.h>
// void merge(int *a, int n, int *b, int m, int *c){
//     for(int i = 0; i < n; i++){
//         *(c+i) = *(a+i);
//     }
//     for(int i = 0; i < m; i++){
//         *(c+n+i) = *(b+i);
//     }
// }
// int main(){
//     int n, m, a[101], b[101], c[101];
//     printf("1r hesegt heden too oruulah ve: ");
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("2r hesegt heden too oruulah ve: ");
//     scanf("%d",&m);
//     for (int i = 0; i < m; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     merge(a,n,b,m,c);
//     for(int y=0;y<m+n;y++)
//         printf("%d ",c[y]);
//     return 0;
// }

//bodlogo10
// #include <stdio.h>
// int duplicate(int *a, int n){
//     int found = 0;
//     for(int i = 0; i < n; i++){
//         int alreadyPrinted = 0;
//         for(int k = 0; k < i; k++){
//             if(a[i] == a[k])
//                 alreadyPrinted = 1;
//         }
//         if(alreadyPrinted)
//             continue;
//         for(int j = i + 1; j < n; j++){
//             if(a[i] == a[j]){
//                 printf("Davtagdsan too: %d\n", a[i]);
//                 found = 1;
//                 break;
//             }
//         }
//     }
//     return found;
// }
// int main(){
//     int n, a[101];
//     printf("Heden too oruulah ve: ");
//     scanf("%d",&n);
//     for(int i = 0; i < n; i++){
//         scanf("%d",&a[i]);
//     }
//     if(!duplicate(a,n))
//         printf("Davtagdsan too baihgui");
//     return 0;
// }

//bodlogo11
#include <stdio.h>
void print(int *begin, int *end){
    while(begin < end){
        printf("%d ", *begin);
        begin++;
    }
}
int main(){
    int a[101], n;
    printf("Heden too oruulah ve: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    print(a, a+n);
    return 0;
}