#include <stdio.h>

int lowerBound(int arr[], int n, int target) {
    int left = 0, right = n;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

int upperBound(int arr[], int n, int target) {
    int left = 0, right = n;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] <= target)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    int arr[n];
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int q;
    printf("q = ");
    scanf("%d", &q);
    while (q--) {
        int L, R;
        printf("L R = ");
        scanf("%d %d", &L, &R);
        int leftIndex = lowerBound(arr, n, L);
        int rightIndex = upperBound(arr, n, R);
        int count = rightIndex - leftIndex;
        printf("[%d, %d] dotor %d element baina\n",
               L, R, count);
    }
    return 0;
}