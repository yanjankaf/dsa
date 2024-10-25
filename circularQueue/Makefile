CC=gcc
CFLAGS=-Wall -g
BIN=./bin/main

# COMPILE target
COMPILE: main.c
	$(CC) $(CFLAGS) main.c -o $(BIN)

# RUN target depends on COMPILE
RUN: COMPILE
	$(BIN)

# Clean target (optional)
clean:
	rm -f $(BIN)
