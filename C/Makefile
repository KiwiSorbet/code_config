MAKEFLAGS = --no-print-directory

CC = gcc
DB = lldb

CFLAGS = -Wall
LDFLAGS = -lm

DBFLAGS = -O0 -g
RLFLAGS = -O3 -march=native -mtune=native -DNDEBUG

FILES = $(wildcard *.c)
OBJECTS = $(FILES:.c=.o)
TARGET = main

debug:
	@make clean
	$(CC) -o $(TARGET) $(CFLAGS) $(DBFLAGS) $(FILES) $(LDFLAGS)

release:
	@make clean
	$(CC) -o $(TARGET) $(CFLAGS) $(RLFLAGS) $(FILES) $(LDFLAGS)

clean:
	@rm -rf $(TARGET) *.exe $(OBJECTS)

run:
	@make debug
	@echo "-------------------------"
	@./$(TARGET)
	@echo "-------------------------"
	@make clean

rundebug:
	@make debug
	$(DB) ./$(TARGET)
	@make clean
