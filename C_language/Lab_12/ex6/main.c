#include <stdio.h>
#include "calculator.h"
#include "array_utils.h"
#include "number_utils.h"

int main() {
    int choice;

    do {
        printf("\n==== MENU ====\n");
        printf("1. Calculator\n");
        printf("2. Array\n");
        printf("3. Number analyze\n");
        printf("4. Exit\n");
        printf("Songolt: ");
        scanf("%d", &choice);

        if (choice == 1) {
        double a, b;
        int op;

        printf("a, b: ");
        scanf("%lf %lf", &a, &b);
        while(getchar() != '\n');  // ← нэм

        printf("1:+ 2:- 3:* 4:/ : ");
        scanf("%d", &op);
        while(getchar() != '\n');  // ← нэм

        if(op == 1) printf("Result: %.2lf\n", add(a,b));
        else if(op == 2) printf("Result: %.2lf\n", sub(a,b));
        else if(op == 3) printf("Result: %.2lf\n", mul(a,b));
        else if(op == 4) printf("Result: %.2lf\n", div(a,b));
        else printf("Invalid!\n");
    }
        else if (choice == 2) {
            int n;
            printf("Hemjee: ");
            scanf("%d", &n);

            int arr[n];
            for(int i = 0; i < n; i++) {
                printf("arr[%d]: ", i);
                scanf("%d", &arr[i]);
            }

            printf("Sum = %d\n", find_sum(arr, n));
            printf("Max = %d\n", find_max(arr, n));
        }

        else if (choice == 3) {
            int n;
            printf("Too: ");
            scanf("%d", &n);

            printf("Prime: %s\n", is_prime(n) ? "Yes" : "No");
            printf("Factorial: %d\n", factorial(n));
        }

    } while (choice != 4);

    return 0;
}