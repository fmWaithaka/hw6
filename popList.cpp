// popList() is responsible for saving the current state of the linked list to the database
#include "hw06.h"
#include <stdio.h>

// Function to save the linked list to the database file without clearing it
void popList(struct Book **head)
{
    FILE *file = fopen("booksdb.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    struct Book *current = *head;
    while (current != NULL)
    {
        fprintf(file, "%s\n%s\n%s\n", current->isbn, current->author, current->title);
        current = current->next;
    }

    fclose(file);
    printf("Database saved successfully.\n");
}
