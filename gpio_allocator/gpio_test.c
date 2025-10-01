#include "gpio_allocator.h"
#include <stdio.h>

int main() {
    printf("=== Basic Allocation ===\n");
    for (int i = 0; i < 5; i++) {
        int pin = allocate_gpio();
        printf("Allocated GPIO: %d\n", pin);
    }
    print_gpio_bitmap();

    printf("\n=== Free and Reallocate ===\n");
    free_gpio(1);
    int reused = allocate_gpio();
    printf("Reallocated GPIO: %d\n", reused);
    print_gpio_bitmap();

    printf("\n=== Overflow Test ===\n");
    for (int i = 0; i < MAX_GPIO; i++) allocate_gpio();  // Fill up
    int overflow = allocate_gpio();
    printf("Overflow allocation result: %d\n", overflow);  // Should be -1

    printf("\n=== Double-Free Test ===\n");
    bool first = free_gpio(2);
    bool second = free_gpio(2);
    printf("First free: %s, Second free: %s\n", first ? "OK" : "Fail", second ? "OK" : "Fail");

    printf("\n=== Invalid Free Test ===\n");
    bool neg = free_gpio(-1);
    bool out = free_gpio(MAX_GPIO + 1);
    printf("Negative index free: %s, Out-of-range free: %s\n", neg ? "OK" : "Fail", out ? "OK" : "Fail");

    return 0;
}

