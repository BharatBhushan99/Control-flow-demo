CC = g++

CFLAGS = -Wall -pedantic -std=c++17

all: main

main: main.obj
	$(CC) $(CFLAGS) main.obj -o main

main.obj: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o main.obj

