#include <stdio.h>
#include "book.h"
#include "file_utils.h"

#define MAX 100

int main() {
    Book books[MAX];
    int count = 0;
    int choice;
    char filename[] = "books.txt";

    do {
        printf("\n==== LIBRARY MENU ====\n");
        printf("1. Add book\n");
        printf("2. List books\n");
        printf("3. Find by ID\n");
        printf("4. Save to file\n");
        printf("5. Load from file\n");
        printf("6. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        while(getchar() != '\n');

        if (choice == 1) {
            input_book(&books[count]);
            count++;
        }

        else if (choice == 2) {
            list_books(books, count);
        }

        else if (choice == 3) {
            int id;
            printf("Enter ID: ");
            scanf("%d", &id);

            int idx = find_book(books, count, id);
            if (idx != -1)
                print_book(books[idx]);
            else
                printf("Not found!\n");
        }

        else if (choice == 4) {
            save_books(filename, books, count);
            printf("Saved!\n");
        }

        else if (choice == 5) {
            count = load_books(filename, books);
            printf("Loaded! (%d books)\n", count);
        }

    } while (choice != 6);

    return 0;
}