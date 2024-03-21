// Prompt the user to enter the ISBN of the book they want to delete.
// Remove the corresponding record from the linked list.

#include "hw06.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to delete a book from the linked list
void delbook(struct Book **head)
{
    if (*head == NULL)
    {
        printf("The database is empty.\n");
        return;
    }

    char isbn[MAX_LENGTH];
    printf("Enter ISBN of the book you want to delete: ");
    scanf("%s", isbn);

    struct Book *prev = NULL;
    struct Book *current = *head;

    // If the book to delete is the first book in the list
    if (strcmp(current->isbn, isbn) == 0)
    {
        *head = current->next;
        free(current);
        printf("Book with ISBN %s deleted successfully.\n", isbn);
        return;
    }

    // Traverse the list to find the book with the given ISBN
    while (current != NULL && strcmp(current->isbn, isbn) != 0)
    {
        prev = current;
        current = current->next;
    }

    // If the book with the given ISBN is found, delete it
    if (current != NULL)
    {
        prev->next = current->next;
        free(current);
        printf("Book with ISBN %s deleted successfully.\n", isbn);
    }
    else
    {
        printf("Book with ISBN %s not found.\n", isbn);
    }
}
