// Display information for all books in the linked list.
#include "hw06.h"
#include <stdio.h>

// Function to display information for all books in the linked list
void showbooks(struct Book *head)
{
    if (head == NULL)
    {
        printf("The database is empty.\n");
        return;
    }

    printf("List of books:\n");
    struct Book *current = head;
    while (current != NULL)
    {
        printf("ISBN: %s\n", current->isbn);
        printf("Author: %s\n", current->author);
        printf("Title: %s\n", current->title);
        printf("\n");
        current = current->next;
    }
}
