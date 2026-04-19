#ifndef BOOK_H
#define BOOK_H

typedef struct {
    int id;
    char title[100];
    char author[50];
    int year;
} Book;

void input_book(Book *b);
void print_book(Book b);
void list_books(Book arr[], int n);
int find_book(Book arr[], int n, int id);

#endif