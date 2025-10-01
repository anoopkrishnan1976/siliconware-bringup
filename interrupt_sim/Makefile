CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = interrupt_test
SRC = interrupt_sim.c interrupt_test.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

