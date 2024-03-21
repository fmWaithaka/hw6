// his file will contain declarations for all functions and any necessary structure
// definitions and constants. Here's how you can structure it:

#ifndef HW06_H
#define HW06_H

#define MAX_LENGTH 100

// Structure to represent a book
struct Book
{
    char isbn[MAX_LENGTH];
    char author[MAX_LENGTH];
    char title[MAX_LENGTH];
    struct Book *next;
};

// Function declarations
void addbook(struct Book **head);
void delbook(struct Book **head);
void showbook(const struct Book *head);
void showbooks(struct Book *head);
void popList(struct Book **head);
#endif /* HW06_H */
