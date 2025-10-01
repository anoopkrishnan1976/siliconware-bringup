#include "bitvector.h"

// 🧘 Set the bit at given index to 1
void set_bit(BitVector *bv, int index) {
    int word = index / WORD_SIZE;
    int bit = index % WORD_SIZE;
    bv->bits[word] |= (1U << bit);
}

// 🌿 Clear the bit at given index to 0
void clear_bit(BitVector *bv, int index) {
    int word = index / WORD_SIZE;
    int bit = index % WORD_SIZE;
    bv->bits[word] &= ~(1U << bit);
}

// 🧭 Get the value of the bit at given index
int get_bit(BitVector *bv, int index) {
    int word = index / WORD_SIZE;
    int bit = index % WORD_SIZE;
    return (bv->bits[word] >> bit) & 1U;
}

// 🧮 Count total number of bits set to 1
int count_set_bits(BitVector *bv) {
    int count = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        uint32_t word = bv->bits[i];
        while (word) {
            count += word & 1U;
            word >>= 1;
        }
    }
    return count;
}

// 🌿 Find the first bit set to 0
int find_first_zero(BitVector *bv) {
    for (int i = 0; i < MAX_BITS; i++) {
        if (get_bit(bv, i) == 0) {
            return i;
        }
    }
    return -1;  // All bits are set
}

