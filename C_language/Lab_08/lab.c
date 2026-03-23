// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// typedef struct Oyutan {
//     char name[50];
//     int stuNo;
//     float avrGrd;
// } oyutan;
// typedef struct Hicheel
// {
//     oyutan *st;
//     char teacherName[30];
//     char classIndex[30];
//     int totalStu;
// } class;
// int main(){
//     class cProg;
//     strcpy(cProg.classIndex, "CSII201");
//     strcpy(cProg.teacherName, "Bagabold");
//     printf("Enter the number of students: ");
//     scanf("%d", &cProg.totalStu);
//     cProg.st = (struct Oyutan*) malloc(cProg.totalStu*sizeof(struct Oyutan));
//     for (int i = 0; i < cProg.totalStu; i++)
//     {
//         printf("Enter first name and ID respectively: ");
//         scanf("%s %d", (cProg.st+i)->name, &(cProg.st+i)->stuNo);
//     }
//     for (int i = 0; i < cProg.totalStu; i++)
//     {
//         printf("Student name: %s, ID: %d\n", (cProg.st+i)->name , (cProg.st+i)->stuNo);
//     }
//     printf("Teacher name: %s\n", cProg.teacherName);
//     printf("Total Student: %d\n", cProg.totalStu);
//     return 0 ;
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// typedef struct Oyutan {
//     char name[50];
//     int stuNo;
// } oyutan;
// void display (struct Oyutan s);
// int main(){
//     oyutan o1;
//     strcpy(o1.name, "bold");
//     o1.stuNo = 123;
//     display(o1);
//     return 0;
// }
// void display(struct Oyutan s){
//     printf("\nDisplaying info");
//     printf("Name: %s", s.name);
//     printf("\nID: %d", s.stuNo);
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// typedef struct Oyutan {
//     char name[50];
//     int stuNo;
// } oyutan;
// struct Oyutan getInformation();
// struct Oyutan getInformation()
// {
//     oyutan s1;
//     printf("Enter name: ");
//     scanf("%[^\n]%*c", s1.name);
//     printf("Enter ID: ");
//     scanf("%d", &s1.stuNo);
//     return s1;
// };

#include <stdio.h>
union unionJob {
    char name [32];
    float salary;
    int workerNo;
} uJob;
struct structJob{
    char name[32];
    float salary;
    int workerNo;
}sJob;
int main(){
    printf("size of union = %lu bytes", sizeof(uJob));
    printf("\n size of structure = %lu bytes", sizeof(sJob));
    return 0;
}



