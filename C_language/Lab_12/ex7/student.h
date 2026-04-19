#ifndef STUDENT_H
#define STUDENT_H
typedef struct {
    char name[50];
    int age;
    float gpa;
} Student;
void input_student(Student *s);
void print_student(Student s);
int is_honor(Student s);
#endif