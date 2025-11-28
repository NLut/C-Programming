#include <stdint.h>
#include <stdio.h>
#include "bitwise.h"
void binprintf(int v);
void set(uint8_t *word, uint8_t b);
uint8_t get(uint8_t *word, uint8_t b);
void clear(uint8_t *word, uint8_t b);

int main(){
    // Shift left bit by bit
    unsigned long x = 0;
    printf("Shift left operation\n");
    printf("----------------------\n");
    for (int i = 1; i < 32; i=1<<i){
        printf("The value of i is %d\n", i);
    }
    puts("");

    // Shift right bit by bit
    printf("Shift right operation\n");
    printf("----------------------\n");
    for (int i = 32; i > 1; i=i>>1){ // can also write as i>>=1
        printf("The value of i is %d\n", i);
    }
    puts("");

    // Value from bitwise.h
    printf("Value from bitwise.h\n");
    printf("----------------------\n");
    printf("The value of LONG3_S2 is: %ld, %08x\n", LONG3_S2, LONG3_S2);
    binprintf(LONG3_S2);
    printf("The value of LONG2_S2 is: %ld, %08x\n", LONG2_S2, LONG2_S2);
    binprintf(LONG2_S2);
    printf("The value of LONG1_S2 is: %ld, %08x\n", LONG1_S2, LONG1_S2);
    binprintf(LONG1_S2);
    printf("The value of ~LONG3_S2 is: %ld, %08x\n", ~LONG3_S2, ~LONG3_S2);
    binprintf(~LONG3_S2);
    printf("The value of 0 =& LONG2_S2 is: %ld, %08x\n", (x &= LONG2_S2), (x &= LONG2_S2)); // Bitwise and
    binprintf(x &= LONG2_S2);
    printf("The value of 0 |& LONG2_S2 is: %ld, %08x\n", (x |= LONG2_S2), (x |= LONG2_S2)); // Bitwise or
    binprintf(x |= LONG2_S2);


    puts("");
    // bitwise or operation (set)
    uint8_t word = 0x0;
    uint8_t* word_pt = &word;
    uint8_t bitLocation = 5;
    printf("Set word value to: %x\n", word);
    printf("Set bit %d\n", bitLocation);
    set(word_pt, bitLocation);
    printf("After set value: %x\n", word);
    printf("Get bit %d\n", bitLocation);
    printf("%d\n", get(word_pt, bitLocation));
    printf("Clear bit %d\n", bitLocation);
    clear(word_pt, bitLocation);
    printf("After clear value: %x\n", word);
}

void binprintf(int v)
{
    unsigned int mask=1<<((sizeof(int)<<3)-1);
    printf("Mask value: %d", mask);
    while(mask) {
        printf("%d", (v&mask ? 1 : 0)); // & = bitwise and operation -> between v and mask
        mask >>= 1; // mask = mask shift right by 1 bit
    }
    puts("");
}

// bit wise set value

void set(uint8_t *word, uint8_t b){
    uint8_t mask = 1 << b; 
    *word = *word | mask;
}

uint8_t get(uint8_t *word, uint8_t b){
    uint8_t mask = 1;
    return (*word >> b) & mask;
}

void clear(uint8_t *word, uint8_t b){
    uint8_t mask = !(1 << b); // creat flipped mask: 0b00010000 -> 0b11101111 for b = 4
    *word = *word & mask;
}
