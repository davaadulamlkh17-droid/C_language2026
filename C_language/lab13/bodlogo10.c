#include <stdio.h>

typedef struct {
    int value;
    int index;
} Node;

int main() {
    int n;
    printf("Heden too oruulah ve: ");
    scanf("%d", &n);

    Node a[n];
    printf("Toonuudaa oruulna uu: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i].value);
        a[i].index = i;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j].value > a[j + 1].value) {
                Node temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    int visited[n];
    for (int i = 0; i < n; i++) visited[i] = 0;
    int swaps = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i] || a[i].index == i){
            continue;
        }
        int cycle = 0;
        int j = i;
        while (!visited[j]) {
            visited[j] = 1;
            j = a[j].index;
            cycle++;
        }
        swaps += (cycle - 1);
    }
    printf("Niit hiisen swap: %d\n", swaps);
    return 0;
}