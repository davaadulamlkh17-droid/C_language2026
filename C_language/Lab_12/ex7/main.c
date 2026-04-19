#include <stdio.h>
#include "student.h"

int main() {
    Student s;
    input_student(&s);
    print_student(s);
    if (is_honor(s))
        printf("Honor student\n");
    else
        printf("Not honor student\n");

    return 0;
}