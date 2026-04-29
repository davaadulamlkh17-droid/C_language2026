#include <stdio.h>

typedef struct {
    int value;
    int index;
} Node;

int abs_val(int x) {
    return x < 0 ? -x : x;
}

void sort(Node a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j].value > a[j + 1].value) {
                Node t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

int main() {
    int n;
    printf("Heden too oruulah ve: \n");
    scanf("%d", &n);
    Node a[n];
    int visited[n];
    printf("Toonuudaa oruulna uu: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i].value);
        a[i].index = i;
        visited[i] = 0;
    }
    sort(a, n);
    int cost = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i] || a[i].index == i)
            continue;
        int cycle = 0;
        int j = i;
        while (!visited[j]) {
            visited[j] = 1;
            int next = a[j].index;
            if (!visited[next]) {
                cost += abs_val(a[j].value - a[next].value);
            }
            j = next;
            cycle++;
        }
    }
    printf("Min swap cost: %d\n", cost);
    return 0;
}