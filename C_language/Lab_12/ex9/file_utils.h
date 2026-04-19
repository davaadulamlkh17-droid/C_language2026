#ifndef FILE_UTILS_H
#define FILE_UTILS_H

#include "book.h"

void save_books(const char *filename, Book arr[], int n);
int load_books(const char *filename, Book arr[]);

#endif