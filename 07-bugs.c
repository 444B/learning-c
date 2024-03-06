#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    int sum;
    float average = 0.0;

    for(int i = 0; i <= 5; i++) {
        sum += numbers[i];
    }

    average = sum / 5.0;

    printf("Average: %f\n", average);

    return 0;
}


// Let's walk through the code together and identify the issues. While the program may seem straightforward, there are a few subtle bugs/errors that could affect its execution and output:
// Issue 1: Uninitialized Variable

// The variable sum is used to accumulate the total of the numbers in the array, but it's not initialized. Using an uninitialized variable leads to undefined behavior because it starts with whatever value happens to be in memory at its location.

// Fix: Initialize sum to 0 at declaration.

// c

// int sum = 0;

// Issue 2: Incorrect Loop Boundary

// The loop is intended to iterate over each element of the numbers array, but the condition i <= 5 allows it to run one time too many since arrays are zero-indexed in C. This results in an out-of-bounds array access, another instance of undefined behavior.

// Fix: Change the loop condition to i < 5.

// c

// for(int i = 0; i < 5; i++) {

// Issue 3: Integer Division

// When calculating the average, the expression sum / 5 uses integer division because both sum and 5 are integers. This means any fractional part of the average will be discarded, which is likely not the intended behavior when calculating an average.

// Fix: Cast sum to float before division, or use 5.0 (a floating-point literal) to ensure floating-point division is used.

// c

// average = (float)sum / 5;
// // Or
// average = sum / 5.0;

// Issue 4: Potential Precision Loss

// While not an error in this specific context, assigning the result of floating-point division to a float variable (average) works but be aware that float has less precision than double. The printf statement uses %f, which expects a double argument, and while float values are promoted to double when passed to printf, using double for floating-point calculations is generally preferred for increased precision.

// Fix: Consider using double for average if higher precision is needed.

// c

// double average = 0.0;

// Summary

// This example illustrates common issues in C programming, including the importance of initializing variables, understanding loop boundaries to avoid accessing arrays out of bounds, the implications of integer division, and considerations for numeric precision. Identifying and understanding these issues is key to becoming proficient in C programming and debugging.
