#ifndef GPIO_ALLOCATOR_H
#define GPIO_ALLOCATOR_H

#include <stdbool.h>

#define MAX_GPIO 32

int allocate_gpio(void);
bool free_gpio(int pin);
void print_gpio_bitmap(void);

#endif // GPIO_ALLOCATOR_H

