#include <stdio.h>

int main() {
    int numbers[10]; // Declare an array of 10 integers

    // Initialize the array with values 0 through 9
    for(int i = 0; i < 10; i++) {
        numbers[i] = i;
    }

    // Print the starting and ending addresses of each element
    for(int i = 0; i < 10; i++) {
        printf("Element %d: Value = %d, Starting Address = %p, Ending Address = %p\n",
               i, numbers[i], (void*)&numbers[i], (void*)((char*)&numbers[i] + sizeof(int) - 1));
    }

    return 0;
}


// output
// Element 0: Value = 0, Starting Address = 0x7ffc7ef946b0, Ending Address = 0x7ffc7ef946b3
// Element 1: Value = 1, Starting Address = 0x7ffc7ef946b4, Ending Address = 0x7ffc7ef946b7
// Element 2: Value = 2, Starting Address = 0x7ffc7ef946b8, Ending Address = 0x7ffc7ef946bb
// Element 3: Value = 3, Starting Address = 0x7ffc7ef946bc, Ending Address = 0x7ffc7ef946bf
// Element 4: Value = 4, Starting Address = 0x7ffc7ef946c0, Ending Address = 0x7ffc7ef946c3
// Element 5: Value = 5, Starting Address = 0x7ffc7ef946c4, Ending Address = 0x7ffc7ef946c7
// Element 6: Value = 6, Starting Address = 0x7ffc7ef946c8, Ending Address = 0x7ffc7ef946cb
// Element 7: Value = 7, Starting Address = 0x7ffc7ef946cc, Ending Address = 0x7ffc7ef946cf
// Element 8: Value = 8, Starting Address = 0x7ffc7ef946d0, Ending Address = 0x7ffc7ef946d3
// Element 9: Value = 9, Starting Address = 0x7ffc7ef946d4, Ending Address = 0x7ffc7ef946d7

// real    0m0.014s
// user    0m0.000s
// sys     0m0.005s