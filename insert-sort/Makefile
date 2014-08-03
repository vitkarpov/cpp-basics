CC = g++
CFLAGS = -c -Wall

all: insert-sort

insert-sort: insert-sort.o
	$(CC) insert-sort.o -o insert-sort.exe

insert-sort.o: insert-sort.cpp
	$(CC) $(CFLAGS) insert-sort.cpp