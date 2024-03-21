# Makefile
CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g
OBJS = addbook.o delbook.o showbook.o showbooks.o poplist.o menu.o main.o
TARGET = book_manager

$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
    $(CC) $(CFLAGS) -c $<

clean:
    rm -f $(TARGET) $(OBJS)
