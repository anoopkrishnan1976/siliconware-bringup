#ifndef BITVECTOR_H
#define BITVECTOR_H

#include <stdint.h>

// 🧘 Constants
#define MAX_BITS     128       // Total number of bits tracked
#define WORD_SIZE    32        // Size of each uint32_t word
#define ARRAY_SIZE   (MAX_BITS / WORD_SIZE)  // Number of words needed

// 🧭 Bitvector structure
typedef struct {
    uint32_t bits[ARRAY_SIZE];  // Array of 32-bit words
} BitVector;

// 🌿 API Declarations

// Set the bit at given index to 1
void set_bit(BitVector *bv, int index);

// Clear the bit at given index to 0
void clear_bit(BitVector *bv, int index);

// Get the value of the bit at given index (0 or 1)
int get_bit(BitVector *bv, int index);

// Count total number of bits set to 1
int count_set_bits(BitVector *bv);

// Find the first bit set to 0 (returns index or -1 if none)
int find_first_zero(BitVector *bv);

#endif // BITVECTOR_H

