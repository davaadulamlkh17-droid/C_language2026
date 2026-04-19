#include <stdio.h>
#include <string.h>
#include "student.h"

void input_student(Student *s) {
    printf("Name: ");
    fgets(s->name, sizeof(s->name), stdin);

    // newline арилгах
    s->name[strcspn(s->name, "\n")] = 0;

    printf("Age: ");
    scanf("%d", &s->age);

    printf("GPA: ");
    scanf("%f", &s->gpa);

    // buffer цэвэрлэх
    while(getchar() != '\n');
}

void print_student(Student s) {
    printf("\n--- Student Info ---\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("GPA: %.2f\n", s.gpa);
}

int is_honor(Student s) {
    return s.gpa >= 3.5;
}