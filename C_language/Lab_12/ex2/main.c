#include <stdio.h>
#include "array_utils.h"
int main(){
    int n;
    printf("Heden too oruulah ve: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &a[i]);
    }
    print_array(a, n);
    printf("Niilber: %d\n", find_sum(a, n));
    printf("Hamgiin baga: %d\n", find_min(a, n));
    printf("Hamgiin ih: %d\n", find_max(a, n));
    printf("Dundaj: %f", find_average(a, n));
    return 0;
}