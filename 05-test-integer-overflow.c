// Create an array of two integers with values of 69 and 420.
// Read through the binary and integer values in both arrays
// print them out on the screen.
// Prompt the user for input 
//     Store in the first element of the array.
// Finally, it will print out the binary and integer values of the array again.

# include <stdio.h>

void printBinary(int value) {
    unsigned int mask = 1 << (sizeof(int) * 8 - 1); // Create a mask with a 1 in the leftmost bit and 0s elsewhere
    for (int i = 0; i < sizeof(int) * 8; i++) { // Loop through each bit
        putchar((value & mask) ? '1' : '0'); // Print 1 or 0 depending on the bit's value
        mask >>= 1; // Shift the mask to the right
        if (i % 8 == 7) putchar(' '); // Optional: Print a space every 8 bits for readability
    }
    putchar('\n'); // Newline after printing the binary representation
}

int array[2];


int main() {
        // set values for elements of array
        array[0] = 69;
        array[1] = 420;

        // loop through and print them
        for (int i=0; i < 2; i++){
            printf("Integer value of array[%d] = %d\n", i, array[i]);
            printf("Binary value of array[%d] = ", i);
            printBinary(i);
        }


    return 0;
}