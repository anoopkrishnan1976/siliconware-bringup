#include <stdio.h>
#include "bitvector.h"

void test_set_and_get() {
    BitVector bv = {0};
    set_bit(&bv, 5);
    set_bit(&bv, 31);
    set_bit(&bv, 32);
    printf("Test set/get:\n");
    printf("Bit 5: %d\n", get_bit(&bv, 5));     // Expected: 1
    printf("Bit 31: %d\n", get_bit(&bv, 31));   // Expected: 1
    printf("Bit 32: %d\n", get_bit(&bv, 32));   // Expected: 1
    printf("Bit 33: %d\n", get_bit(&bv, 33));   // Expected: 0
}

void test_clear() {
    BitVector bv = {0};
    set_bit(&bv, 10);
    clear_bit(&bv, 10);
    printf("\nTest clear:\n");
    printf("Bit 10: %d\n", get_bit(&bv, 10));   // Expected: 0
}

void test_count() {
    BitVector bv = {0};
    set_bit(&bv, 0);
    set_bit(&bv, 1);
    set_bit(&bv, 63);
    printf("\nTest count_set_bits:\n");
    printf("Count: %d\n", count_set_bits(&bv)); // Expected: 3
}

void test_find_first_zero() {
    BitVector bv = {0};
    for (int i = 0; i < 10; i++) {
        set_bit(&bv, i);
    }
    printf("\nTest find_first_zero:\n");
    printf("First zero at: %d\n", find_first_zero(&bv)); // Expected: 10
}

int main() {
    test_set_and_get();
    test_clear();
    test_count();
    test_find_first_zero();
    return 0;
}

