#include <stdio.h>
#include <string.h>
typedef struct {
    char fname[20], lname[20], id[10];
    float golch;
} Student;
void read_students(Student a[], int n);
void print_students(Student a[], int n);
void print(Student st);
int search_by_fname(Student a[], int n, char fname[]);
int search_by_lname(Student a[], int n, char lname[]);
int search_by_id(Student a[], int n, char id[]);
int search_by_golch(Student a[], int n, float golch);
void sort_by_golch(Student a[], int n);
int main() {
    Student a[100];
    int n, cmd, idx;
    printf("Oyutnii too: ");
    scanf("%d", &n);
    read_students(a, n);
    print_students(a, n);
    char fname[20], lname[20], id[20];
    float golch;
    while (1) {
        printf("\n1: Nereer haih\n");
        printf("2: Ovgoor haih\n");
        printf("3: ID-aar haih\n");
        printf("4: Golchoor haih\n");
        printf("5: Golchoor erembeleh\n");
        printf("6: Hevleh\n");
        printf("7: Garah\n");
        printf("Songolt: ");
        scanf("%d", &cmd);
        if (cmd == 1) {
            printf("Ner: ");
            scanf("%s", fname);
            idx = search_by_fname(a, n, fname);
            if (idx == -1)
                printf("Oldsongui\n");
            else
                print(a[idx]);
        } else if (cmd == 2) {
            printf("Ovog: ");
            scanf("%s", lname);
            idx = search_by_lname(a, n, lname);
            if (idx == -1)
                printf("Oldsongui\n");
            else
                print(a[idx]);
        } else if (cmd == 3) {
            printf("ID: ");
            scanf("%s", id);
            idx = search_by_id(a, n, id);
            if (idx == -1)
                printf("Oldsongui\n");
            else
                print(a[idx]);
        } else if (cmd == 4) {
            printf("Golch: ");
            scanf("%f", &golch);
            idx = search_by_golch(a, n, golch);
            if (idx == -1)
                printf("Oldsongui\n");
            else
                print(a[idx]);
        } else if (cmd == 5) {
            sort_by_golch(a, n);
            printf("Erembelsen!\n");

        } else if (cmd == 6) {
            print_students(a, n);

        } else if (cmd == 7) {
            break;

        } else {
            printf("Buruu songolt!\n");
        }
    }
    return 0;
}
void read_students(Student a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Student %d: fname lname id golch\n", i+1);
        scanf("%s %s %s %f", a[i].fname, a[i].lname, a[i].id, &a[i].golch);
    }
}
void print(Student st) {
    printf("Ner: %s\n", st.fname);
    printf("Ovog: %s\n", st.lname);
    printf("ID: %s\n", st.id);
    printf("Golch: %.2f\n", st.golch);
}
void print_students(Student a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n[%d]\n", i);
        print(a[i]);
    }
}
int search_by_fname(Student a[], int n, char fname[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(a[i].fname, fname) == 0)
            return i;
    }
    return -1;
}
int search_by_lname(Student a[], int n, char lname[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(a[i].lname, lname) == 0)
            return i;
    }
    return -1;
}
int search_by_id(Student a[], int n, char id[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(a[i].id, id) == 0)
            return i;
    }
    return -1;
}
int search_by_golch(Student a[], int n, float golch) {
    for (int i = 0; i < n; i++) {
        if (a[i].golch == golch)
            return i;
    }
    return -1;
}
void sort_by_golch(Student a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].golch < a[j].golch) {
                Student temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}