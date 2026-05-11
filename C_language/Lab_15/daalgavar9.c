#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

struct Student {
    int id;
    int score;
};

int n;
struct Student a[MAX], b[MAX];
int cmpScore(const void *x, const void *y) {
    struct Student *a = (struct Student*)x;
    struct Student *b = (struct Student*)y;
    return b->score - a->score;
}

int cmpId(const void *x, const void *y) {
    struct Student *a = (struct Student*)x;
    struct Student *b = (struct Student*)y;
    return a->id - b->id;
}

int findById(int id) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (b[m].id == id)
            return m;
        else if (b[m].id < id)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main() {
    printf("n = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i].id, &a[i].score);
        b[i] = a[i]; 
    }
    qsort(a, n, sizeof(struct Student), cmpScore);
    printf("\nTop 3 students by score:\n");
    for (int i = 0; i < 3 && i < n; i++) {
        printf("ID: %d Score: %d\n", a[i].id, a[i].score);
    }
    qsort(b, n, sizeof(struct Student), cmpId);
    int searchId;
    printf("\nEnter id to search: ");
    scanf("%d", &searchId);
    int idx = findById(searchId);
    if (idx != -1)
        printf("Found -> ID: %d Score: %d\n", b[idx].id, b[idx].score);
    else
        printf("Not found\n");
    return 0;
}