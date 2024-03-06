#include <stdio.h>

void printBinary(int value) {
    unsigned int mask = 1 << (sizeof(int) * 8 - 1); // Create a mask with a 1 in the leftmost bit and 0s elsewhere
    for (int i = 0; i < sizeof(int) * 8; i++) { // Loop through each bit
        putchar((value & mask) ? '1' : '0'); // Print 1 or 0 depending on the bit's value
        mask >>= 1; // Shift the mask to the right
        if (i % 8 == 7) putchar(' '); // Optional: Print a space every 8 bits for readability
    }
    putchar('\n'); // Newline after printing the binary representation
}

int main() {
    int number = 4294967296; // Example number to print in binary
    printf("The binary representation of %d is: ", number);
    printBinary(number);
    return 0;
}


// outputs

// gcc 04-binary-representation.c && time ./a.out 
// with number set to 2147483647
// The binary representation of -2147483648 is: 10000000 00000000 00000000 00000000 

// real    0m0.021s
// user    0m0.003s
// sys     0m0.000s

// gcc 04-binary-representation.c && time ./a.out 
// with number set to 4294967295
// The binary representation of -1 is: 11111111 11111111 11111111 11111111 

// real    0m0.020s
// user    0m0.003s
// sys     0m0.001s

// gcc 04-binary-representation.c && time ./a.out 
// with number set to 4294967296
// 04-binary-representation.c: In function ‘main’:
// 04-binary-representation.c:14:18: warning: overflow in conversion from ‘long int’ to ‘int’ changes value from ‘4294967296’ to ‘0’ [-Woverflow]
//    14 |     int number = 4294967296; // Example number to print in binary
//       |                  ^~~~~~~~~~
// The binary representation of 0 is: 00000000 00000000 00000000 00000000

// real    0m0.034s
// user    0m0.000s
// sys     0m0.003s