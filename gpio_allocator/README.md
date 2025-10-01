# GPIO Allocator

This module dynamically allocates and frees GPIO pins using a bitvector-backed ritual.

## Features
- Bitvector-based allocation of up to 32 GPIOs
- Reuse of freed pins
- Edge-case handling: overflow, double-free, invalid frees
- Visual bitmap tracing

## Usage
```bash
gcc gpio_allocator.c gpio_test.c -o gpio_test
./gpio_test

