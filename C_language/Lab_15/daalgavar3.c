#include <stdio.h>

int firstOccurrence(int arr[], int n, int k) {
    int left = 0, right = n - 1;
    int ans = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == k) {
            ans = mid;
            right = mid - 1;  
        }
        else if (arr[mid] < k) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return ans;
}
int lastOccurrence(int arr[], int n, int k) {
    int left = 0, right = n - 1;
    int ans = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == k) {
            ans = mid;
            left = mid + 1;   
        }
        else if (arr[mid] < k) {
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
    printf("n = ");
    scanf("%d", &n);
    int arr[n];
    printf("Sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("k = ");
    scanf("%d", &k);
    int first = firstOccurrence(arr, n, k);
    int last = lastOccurrence(arr, n, k);
    if (first == -1) {
        printf("k oldsongui\n");
    } else {
        int count = last - first + 1;
        printf("Ehnii bairlal: %d\n", first);
        printf("Suuliin bairlal: %d\n", last);
        printf("Niit %d udaa baina\n", count);
    }
    return 0;
}