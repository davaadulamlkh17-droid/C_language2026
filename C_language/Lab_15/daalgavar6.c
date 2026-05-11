#include <stdio.h>
#include <stdlib.h>
#define MAXQ 10000

int arr[MAXQ];
int size = 0;
int lowerBound(int x) {
    int l = 0, r = size;
    while (l < r) {
        int m = (l + r) / 2;
        if (arr[m] < x) l = m + 1;
        else r = m;
    }
    return l;
}

int upperBound(int x) {
    int l = 0, r = size;
    while (l < r) {
        int m = (l + r) / 2;
        if (arr[m] <= x) l = m + 1;
        else r = m;
    }
    return l;
}

void add(int x) {
    int pos = lowerBound(x);
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
    size++;
}

int find(int x) {
    int pos = lowerBound(x);
    return (pos < size && arr[pos] == x);
}

int countRange(int L, int R) {
    return upperBound(R) - lowerBound(L);
}

int main() {
    int q;
    scanf("%d", &q);
    while (q--) {
        char type[10];
        scanf("%s", type);
        if (type[0] == 'a') {
            int x;
            scanf("%d", &x);
            add(x);
        }
        else if (type[0] == 'f') {
            int x;
            scanf("%d", &x);

            if (find(x))
                printf("YES\n");
            else
                printf("NO\n");
        }
        else if (type[0] == 'c') {
            int L, R;
            scanf("%d %d", &L, &R);

            printf("%d\n", countRange(L, R));
        }
    }
    return 0;
}