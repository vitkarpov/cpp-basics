CC = g++
CFLAGS = -c -Wall

all: hello

hello: hello-world.o
	$(CC) hello-world.o -o hello-world.exe

hello-world.o: hello-world.cpp
	$(CC) $(CFLAGS) hello-world.cpp