CC = gcc

CFLAGS = -Iinclude -Wall -Wextra -pedantic -DNDEBUG 

SRC_DIR = src

EXAMPLE_DIR = examples

OBJ_FILES = $(SRC_DIR)/fonctions.o

TARGET = $(EXAMPLE_DIR)/main

all: $(TARGET)

$(TARGET): $(OBJ_FILES) $(EXAMPLE_DIR)/main.c
	$(CC) $(CFLAGS) -o $@ $^

$(SRC_DIR)/fonctions.o: $(SRC_DIR)/fonctions.c include/fonctions.h
	$(CC) $(CFLAGS) -c $< -o $@

