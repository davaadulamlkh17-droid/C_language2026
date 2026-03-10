#include <stdio.h>
int digit_sum(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main(){
    int N;
    printf("N утгыг оруулна уу: ");
    scanf("%d", &N);
    printf("Цифрийн нийлбэртээ хуваагддаг тоонууд:\n");
    for(int i = 1; i <= N; i++){
        int s = digit_sum(i);
        if(i % s == 0){      
            printf("%d ", i);
        }
    }
    return 0;
}