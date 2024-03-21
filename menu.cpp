// Display a menu with options for adding, deleting, displaying one or all records, and saving the list to the text file.
// Prompt the user to enter their choice.

// menu.cpp
#include "hw06.h"
#include <stdio.h>
#include <stdlib.h>

// Function to display the menu and handle user input
void menu(struct Book **head)
{
    int choice;
    do
    {
        printf("Select from the following options:\n");
        printf("1. Add a book\n");
        printf("2. Delete a book\n");
        printf("3. Display a book\n");
        printf("4. Display all books\n");
        printf("5. Save and exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addbook(head);
            break;
        case 2:
            delbook(head);
            break;
        case 3:
            showbook(*head);
            break;
        case 4:
            showbooks(*head);
            break;
        case 5:
            popList(head);
            // Save and exit
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);
}
