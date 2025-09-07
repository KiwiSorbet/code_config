MAKEFLAGS = --no-print-directory

CC = g++
DB = lldb

CFLAGS = -Wall -Wextra
LDFLAGS =

DBFLAGS = -O0 -g
RLFLAGS = -O3 -march=native -mtune=native -DNDEBUG

FILES = $(wildcard *.cpp)
OBJECTS = $(FILES:.cpp=.o)
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
