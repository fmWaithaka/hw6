// The main function
#include "hw06.h"
#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void menu(struct Book **head);

int fileExists(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file)
    {
        fclose(file);
        return 1; // File exists
    }
    return 0; // File does not exist
}

int main()
{
    struct Book *head = NULL; // Initialize an empty linked list

    // Check for the existence of the database file
    if (fileExists("booksdb.txt"))
    {
        // Populate the linked list with the contents of the file
        popList(&head);
        printf("Database file loaded successfully.\n");
    }
    else
    {
        printf("Database file does not exist.\n");
    }

    // Display the menu and handle user interaction
    menu(&head);

    // Free memory allocated for the linked list before exiting
    popList(&head);

    return 0;
}
