// Prompt the user to enter the ISBN of the book they want to display. Display the
// information of that book.

// showbook.cpp
#include "hw06.h"
#include <stdio.h>
#include <string.h>

// Function to display information for a specific book in the linked list
void showbook(const struct Book *head)
{
    char isbn[MAX_LENGTH];
    printf("Enter ISBN of the book you want to display: ");
    scanf("%s", isbn);

    const struct Book *current = head;
    while (current != NULL)
    {
        if (strcmp(current->isbn, isbn) == 0)
        {
            printf("Book information:\n");
            printf("ISBN: %s\n", current->isbn);
            printf("Author: %s\n", current->author);
            printf("Title: %s\n", current->title);
            return;
        }
        current = current->next;
    }

    printf("Book with ISBN %s not found.\n", isbn);
}
