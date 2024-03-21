# Book Database Management System

This is a simple command-line program for managing a database of books. It allows users to add, delete, display, and save books to a text file.

## Features

- **Add a Book:** Add a new book to the database by providing ISBN, author, and title.
- **Delete a Book:** Remove a book from the database by specifying its ISBN.
- **Display a Book:** View the details of a specific book by entering its ISBN.
- **Display All Books:** View all books currently stored in the database.
- **Save and Exit:** Save the current database to a text file and exit the program.

## Getting Started

To use the program, simply compile the source files and run the executable. Make sure you have `gcc` installed.

```bash
gcc -o book_manager main.c addbook.c delbook.c showbook.c showbooks.c poplist.c menu.c
./book_manager
