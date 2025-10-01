#include "gpio_allocator.h"
#include <stdio.h>
#include <stdint.h>

static uint32_t gpio_bitmap = 0;

int allocate_gpio(void) {
    for (int i = 0; i < MAX_GPIO; i++) {
        if (!(gpio_bitmap & (1 << i))) {
            gpio_bitmap |= (1 << i);
            return i;
        }
    }
    return -1;
}

bool free_gpio(int pin) {
    if (pin < 0 || pin >= MAX_GPIO) return false;
    if (!(gpio_bitmap & (1 << pin))) return false;
    gpio_bitmap &= ~(1 << pin);
    return true;
}

void print_gpio_bitmap(void) {
    printf("GPIO Bitmap: ");
    for (int i = MAX_GPIO - 1; i >= 0; i--) {
        printf("%d", (gpio_bitmap >> i) & 1);
    }
    printf("\n");
}

