CC = gcc
TARGET = bin/gauss

all: $(TARGET)
	

$(TARGET):  src/main.c src/gauss.c src/solver.c src/read.c src/swap.c
	@$(CC) -o $(TARGET)  src/main.c src/gauss.c src/solver.c src/read.c src/swap.c

test: $(TARGET)
	@./$(TARGET) dane/A dane/b