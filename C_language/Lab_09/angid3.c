#include <stdio.h>
int main() {
    int n, a[100][100];
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++){
        sum += a[i][n - 1 - i];
    }
    printf("Niilber = %d\n", sum);
    int anhnii = 1;
    if (sum < 2) anhnii = 0;
    for (int i = 2; i < sum; i++) {
        if (sum % i == 0) {
            anhnii = 0;
        }
    }
    if (anhnii == 1)
        printf("Anhnii too");
    else
        printf("Anhnii bish");
    return 0;
}