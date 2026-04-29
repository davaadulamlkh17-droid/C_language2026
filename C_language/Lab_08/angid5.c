// #include <stdio.h>
// int main() {
//     int num = 212, i;
//     for (i = 0; i <= 2; ++i)
//         printf("%d‑ээр баруун шилжүүлбэл: %d\n", i, num >> i);
//     for (i = 0; i <= 2; ++i)
//         printf("%d‑ээр зүүн шилжүүлбэл: %d\n", i, num << i);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int x = 5;      // энгийн хувьсагч
//     int *p = &x;    // p нь x-ийн хаягийг хадгалж байна

//     printf("x-ийн утга = %d\n", x);       // энгийн хувьсагчийн утга
//     printf("p-ийн хадгалж буй утга = %d\n", *p);  // pointer-аар дамжуулан утгыг авах
//     printf("x-ийн хаяг = %p\n", p);       // x-ийн хаягийг хэвлэх

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int mat[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     int sum = 0;

//     // Тогтмол диагонал: i == j
//     for(int i = 0; i < 3; i++) {
//         sum += mat[i][i];
//     }

//     printf("Тогтмол диагоналын нийлбэр: %d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// struct Student {
//     char name[50];
//     int age;
//     int score;
// };

// int main() {
//     struct Student students[3];

//     // 3 сурагчийн мэдээлэл оруулах
//     strcpy(students[0].name, "Davaa");
//     students[0].age = 17;
//     students[0].score = 95;

//     strcpy(students[1].name, "Batz");
//     students[1].age = 16;
//     students[1].score = 88;

//     strcpy(students[2].name, "Oyun");
//     students[2].age = 17;
//     students[2].score = 92;

//     // Мэдээллийг хэвлэх
//     for(int i = 0; i < 3; i++) {
//         printf("Нэр: %s, Нас: %d, Оноо: %d\n",
//                students[i].name,
//                students[i].age,
//                students[i].score);
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*) malloc(3 * sizeof(int));
    for(int i = 0; i < 3; i++) ptr[i] = i+1; // 1 2 3

    ptr = (int*) realloc(ptr, 5 * sizeof(int)); // 5 int болгон өөрчлөх
    ptr[3] = 4;
    ptr[4] = 5;

    for(int i = 0; i < 5; i++)
        printf("%d ", ptr[i]); // 1 2 3 4 5
    printf("\n");

    free(ptr);
    return 0;
}