// Prompt the user to enter ISBN, author, and title. Add this information as a new record to the linked list.
#include "hw06.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to add a book to the database
void addbook(struct Book **head) {
    // Create a new book node
    struct Book *newBook = (struct Book*)malloc(sizeof(struct Book));
    if (newBook == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    // Prompt the user to enter ISBN, author, and title
    printf("Enter ISBN: ");
    scanf("%99s", newBook->isbn);
    getchar(); // Consume newline character
    printf("Enter author: ");
    scanf("%99[^\n]", newBook->author);
    getchar(); // Consume newline character
    printf("Enter title: ");
    scanf("%99[^\n]", newBook->title);
    getchar(); // Consume newline character

    // Set the next pointer of the new book node to NULL
    newBook->next = NULL;

    // If the list is empty, set the head to the new book node
    if (*head == NULL) {
        *head = newBook;
    } else {
        // Find the last node in the list
        struct Book *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        // Append the new book node to the end of the list
        current->next = newBook;
    }

    printf("Book added successfully.\n");
}
