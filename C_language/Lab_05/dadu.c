// #include <stdio.h>
// void swap(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("in swap function: x=%d, y=%d\n",a,b);
// }  
// int main()
// {
//     int x = 3, y = 2;
//     printf("before: x = %d, y = %d\n",x,y);
//     swap(x,y);
//     printf("after: x = %d, y = %d\n",y,x);
// }

// #include <stdio.h>
// void swap(int* a, int* b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }  
// int main()
// {
//     int x = 3, y = 2;
//     printf("before: x = %d, y = %d\n",x,y);
//     swap(&x,&y);
//     printf("after: x = %d, y = %d\n",x,y);
// }

// #include <stdio.h>
// double square(double x);
// double (*p)(double x);
// int main(){
//     p = square;
//     printf("%f %f\n", square(1.5), p(1.5));
//     return 0;
// }
// double square(double x){
//     return x*x;
// }

// #include <stdio.h>
// double square(double x){
//     return x*x;
// }
// double kuba(double x){
//     return x*x*x;
// }
// double p(double x){
//     return x;
// }
// int main(){
//     printf("too: %f kvadrat: %f kuba: %f\n", p(1.5), square(1.5), kuba(1.5));
//     return 0;
// } 

//n toonii tegsh toonuudiin niilber
// #include <stdio.h>
// int main() {
//     int n, sum = 0;
//     printf("n utga oruul: ");
//     scanf("%d", &n);
//     for(int i = 2; i <= n; i += 2){
//         sum += i;
//     }
//     printf("Niilber = %d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n;
//     int c = 0;
//     double f;
//     printf("n utga oruul: ");
//     scanf("%d", &n);
//     while (1) {
//         f = (9.0/5) * c + 32;
//         if (f > n)
//             break;
//         printf("%d %.1f\n", c, f);
//         c++;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n;
//     int sum = 0;
//     printf("n too oruulna uu: ");
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//          sum += i;
//     }
//     printf("Niilber: %d", sum);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int n, i, *ptr, sum = 0;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     ptr = (int*) malloc(n * sizeof(int));
//     if (ptr == NULL)
//     {
//         printf("Error! memory not allocated. ");
//         exit(0);
//     }
//     printf("Enter elements: ");
//     for ( i = 0; i < n; i++)
//     {
//         scanf("%d", ptr + i);
//         sum += *(ptr +i);
//     }
//     printf("Sum = %d", sum);
//     free(ptr);
//     return 0;
// }

#include <stdio.h>
int main(){
    int arr[] = {3, 5, 6, 7, 9};
    int *p = arr;
    int (*ptr)[5] = &arr;
    printf("p = %p, ptr = %p\n",p ,ptr);
    printf("*p = %d, *ptr  =&p")
}

