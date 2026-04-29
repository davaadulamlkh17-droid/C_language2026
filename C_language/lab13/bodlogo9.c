#include <stdio.h>

typedef struct {
    int value;
    int id;  
} Item;

int isStable(Item a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].value == a[j].value && a[i].id > a[j].id) {
                return 0;
            }
        }
    }
    return 1; 
}

void selectionSort(Item a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j].value < a[min].value) {
                min = j;
            }
        }
        Item temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Item a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i].value);
        a[i].id = i; 
    }
    selectionSort(a, n);
    if (isStable(a, n)) {
        printf("Stable\n");
    } else {
        printf("Not stable\n");
    }
    return 0;
}