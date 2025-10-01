CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = gpio_test
SRC = gpio_allocator.c gpio_test.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

