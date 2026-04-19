#include <stdio.h>
#include <string.h>
#include "book.h"

void input_book(Book *b) {
    printf("ID: ");
    scanf("%d", &b->id);
    while(getchar() != '\n');

    printf("Title: ");
    fgets(b->title, sizeof(b->title), stdin);
    b->title[strcspn(b->title, "\n")] = 0;

    printf("Author: ");
    fgets(b->author, sizeof(b->author), stdin);
    b->author[strcspn(b->author, "\n")] = 0;

    printf("Year: ");
    scanf("%d", &b->year);
    while(getchar() != '\n');
}

void print_book(Book b) {
    printf("\nID: %d\nTitle: %s\nAuthor: %s\nYear: %d\n",
           b.id, b.title, b.author, b.year);
}

void list_books(Book arr[], int n) {
    for(int i = 0; i < n; i++) {
        print_book(arr[i]);
    }
}

int find_book(Book arr[], int n, int id) {
    for(int i = 0; i < n; i++) {
        if(arr[i].id == id)
            return i;
    }
    return -1;
}