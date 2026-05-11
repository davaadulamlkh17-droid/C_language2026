// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int compare(const void *a, const void *b) {
//     return (*(int*)a - *(int*)b);
// }
// int main() {
//     int n;
//     printf("n оруулна уу: ");
//     scanf("%d", &n);
//     int *arr = (int*)malloc(n * sizeof(int));
//     srand(time(NULL));
//     // Санамсаргүй тоо үүсгэх [-10^6, 10^6]
//     for (int i = 0; i < n; i++) {
//         arr[i] = rand() % 2000001 - 1000000;
//     }
//     // Эрэмбэлэх
//     qsort(arr, n, sizeof(int), compare);
//     int duplicate_count = 0;
//     int max_count = 1;
//     int current_count = 1;
//     int most_frequent = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] == arr[i - 1]) {
//             current_count++;
//             duplicate_count++; // давхардал
//         } else {
//             if (current_count > max_count) {
//                 max_count = current_count;
//                 most_frequent = arr[i - 1];
//             }
//             current_count = 1;
//         }
//     }
//     if (current_count > max_count) {
//         max_count = current_count;
//         most_frequent = arr[n - 1];
//     }
//     printf("Давхардсан элементүүдийн тоо: %d\n", duplicate_count);
//     printf("Хамгийн олон давтагдсан утга: %d (%d удаа)\n", most_frequent, max_count);
//     free(arr);
//     return 0;
// }




// #include <stdlib.h> 
// #include <stdio.h>
// int main(){
//     double a, b, c;
//     for (int i = 0; i < 100; i++)
//     {
//         a=(double)rand()/(double)RAND_MAX*100;
//         b=(double)rand()/(double)RAND_MAX*100;
//         c=a/b;
//         printf("itteration: %d values a=%.f, b=%.f, c=%.f, RAND_MAX=%d\n", i, a, b, c, RAND_MAX);
//     }
//     return 0;
// }


#include <stdio.h>
int findFirst(int a[], int n, int k) {
    int left = 0, right = n - 1;
    int ans = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == k) {
            ans = mid;
            right = mid - 1; 
        }
        else if (a[mid] < k) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return ans;
}

int findLast(int a[], int n, int k) {
    int left = 0, right = n - 1;
    int ans = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == k) {
            ans = mid;
            left = mid + 1;
        }
        else if (a[mid] < k) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n, k;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    int first = findFirst(a, n, k);
    int last = findLast(a, n, k);
    if (first == -1) {
        printf("k oldsongui\n");
    } else {
        printf("Ehnii bairlal: %d\n", first);
        printf("Suuliin bairlal: %d\n", last);
        printf("Niit davtalt: %d\n", last - first + 1);
    }
    return 0;
}