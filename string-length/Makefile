CC = g++
CFLAGS = -c -Wall

all: string-length

string-length: main.o
	$(CC) main.o -o main.exe

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp